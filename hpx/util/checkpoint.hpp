// Copyright (c) 2017 Adrian Serio
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// This header defines the save_checkpoint and restore_checkpoint functions. 
// These functions are designed to help HPX application developers checkpoint 
// thier applications. Save_checkpoint serializes one or more objects and saves 
// them as a byte stream. Restore_checkpoint converts the byte stream back into 
// instances of the objects.
//
// Save_checkpoint takes a any number of objects which a user may wish 
// to store and returns a future to a checkpoint object. 
// Additionally the function can take a policy as a first object which 
// changes its behaviour depending on the policy passed to it. Most
// notably, if a sync policy is used save_checkpoint will simply return a 
// checkpoint object.
//
// Restore_checkpoint takes a checkpoint object as a first argument and the 
// containers which will be filled from the byte stream (in the same order
// as they were placed in save_checkpoint).
//
// Checkpoint is the container object which is produced by save_checkpoint 
// and is consumed by a restore_checkpoint. A checkpoint may be moved into
// the save_checkpoint object to write the byte stream to the pre-created 
// checkpoint object.

#if !defined(CHECKPOINT_HPP_07262017)
#define CHECKPOINT_HPP_07262017

#include <type_traits>

#include <hpx/include/serialization.hpp>

#include <fstream>

namespace hpx
{
namespace util
{
    //Checkpoint Object
    struct checkpoint
    {
        checkpoint()
        {
        }
        checkpoint(checkpoint const& c)
          : data(c.data)
        {
        }
        checkpoint(checkpoint&& c)
         : data(std::move(c.data))
        {
        }
        ~checkpoint()
        {
        }

        //Other Constructors
        checkpoint(std::string file_name)
        {
            this->load(file_name);
        }

        std::vector<char> data;

        //Serialization Definition
        friend class hpx::serialization::access;
        template <typename Volume>
        void serialize(Volume& vol, const unsigned int version)
        {
            vol& data;
        };

        checkpoint& operator=(checkpoint const& c)
        {
            data = c.data;
        }
        checkpoint& operator=(checkpoint&& c)
        {
            data = std::move(c.data);
        }

        void load(std::string file_name)
        {
            std::ifstream ifs(file_name);
            if(ifs)                               //Check fstream is open
            {
                ifs.seekg(0, ifs.end);
                int length = ifs.tellg();         //Get length of file
                ifs.seekg(0, ifs.beg);
                data.resize(length);
                ifs.read(data.data(), length);
            }
        }

        size_t size() const
        {
            return data.size();
        }
    };

    //Function object for save_checkpoint
    namespace detail
    {
        struct save_funct_obj
     {
         template <typename... Ts>
         checkpoint operator()(checkpoint&& c, Ts&&... ts) const
         {
             //Create serialization archive from checkpoint data member
             hpx::serialization::output_archive ar(c.data);
             //Serialize data
             int const sequencer[] = { //Trick to expand the variable pack
                 (ar << ts, 0)...};    //Takes advantage of the comma operator
             return c;
         }
     };
    }

    //Save_checkpoint function 
    template <typename T
            , typename... Ts
            , typename U = typename std::enable_if<
                    !hpx::traits::is_launch_policy<T>::value && 
                    !std::is_same<typename std::decay<T>::type,checkpoint>::value
                >::type
             >
    hpx::future<checkpoint> save_checkpoint(T&& t, Ts&&... ts)
    {
        {
            return hpx::dataflow(
                detail::save_funct_obj()
              , std::move(checkpoint())
              , std::forward<T>(t)
              , std::forward<Ts>(ts)...);
        }
    }
    
    //Save_checkpoint function - Take a pre-initialized checkpoint
    template <typename T, typename... Ts>
    hpx::future<checkpoint> save_checkpoint(checkpoint&& c
        , T&& t
        , Ts&&... ts)
    {
        {
            return hpx::dataflow(
                detail::save_funct_obj()
              , std::move(c)
              , std::forward<T>(t)
              , std::forward<Ts>(ts)...);
        }
    }
    
    
    //Store function - Policy overload
    template <typename T, typename... Ts>
    hpx::future<checkpoint> save_checkpoint(
          hpx::launch p
        , T&& t
        , Ts&&... ts)
    {
        {
            return hpx::dataflow(
                  p
                , detail::save_funct_obj()
                , std::move(checkpoint())
                , std::forward<T>(t)
                , std::forward<Ts>(ts)...);
        }
    }

    //Store function - Policy overload & pre-initialized checkpoint
    template <typename T, typename... Ts>
    hpx::future<checkpoint> save_checkpoint(
          hpx::launch p
        , checkpoint&& c
        , T&& t
        , Ts&&... ts)
    {
        {
            return hpx::dataflow(
                  p
                , detail::save_funct_obj()
                , std::move(c)
                , std::forward<T>(t)
                , std::forward<Ts>(ts)...);
        }
    }

    //Save_checkpoint function - With sync policy
    template <typename T
            , typename... Ts
            , typename U = typename std::enable_if<
                    !std::is_same<typename std::decay<T>::type,checkpoint>::value
                >::type
             >
    checkpoint save_checkpoint(
          hpx::launch::sync_policy sync_p
        , T&& t
        , Ts&&... ts)
    {
        {
            hpx::future<checkpoint> f_chk = 
                hpx::dataflow(
                      sync_p
                    , detail::save_funct_obj()
                    , std::move(checkpoint())
                    , std::forward<T>(t)
                    , std::forward<Ts>(ts)...);
            return f_chk.get();
        }
    }

    //Save_checkpoint function - With sync policy & pre-init. checkpoint
    template <typename T, typename... Ts>
    checkpoint save_checkpoint(
          hpx::launch::sync_policy sync_p
        , checkpoint&& c
        , T&& t
        , Ts&&... ts)
    {
        {
            hpx::future<checkpoint> f_chk = 
                hpx::dataflow(
                      sync_p
                    , detail::save_funct_obj()
                    , std::move(c)
                    , std::forward<T>(t)
                    , std::forward<Ts>(ts)...);
            return f_chk.get();
        }
    }

    //Resurrect Function
    template <typename T, typename... Ts>
    void restore_checkpoint(checkpoint const& c, T& t, Ts& ... ts)
    {
        {
            //Create seriaalization archive
            hpx::serialization::input_archive ar(c.data, c.size());
    
            //De-serialize data
            ar >> t;
            int const sequencer[] = {//Trick to exand the variable pack
               (ar >> ts, 0)...};    //Takes advantage of the comma operator
        }
    }
} //End Util Namespace
} //End HPX Namespace

#endif

