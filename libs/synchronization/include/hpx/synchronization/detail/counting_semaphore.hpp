//  Copyright (c) 2007-2015 Hartmut Kaiser
//  Copyright (c)      2011 Bryce Lelbach
//
//  SPDX-License-Identifier: BSL-1.0
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <hpx/config.hpp>
#include <hpx/assert.hpp>
#include <hpx/synchronization/condition_variable.hpp>
#include <hpx/synchronization/spinlock.hpp>
#include <hpx/thread_support/assert_owns_lock.hpp>

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <mutex>
#include <utility>

#if defined(HPX_MSVC_WARNING_PRAGMA)
#pragma warning(push)
#pragma warning(disable : 4251)
#endif

////////////////////////////////////////////////////////////////////////////////
namespace hpx { namespace lcos { namespace local { namespace detail {
    class counting_semaphore
    {
    private:
        typedef lcos::local::spinlock mutex_type;

    public:
        counting_semaphore(std::ptrdiff_t value = 0)
          : value_(value)
          , cond_()
        {
        }

        void wait(std::unique_lock<mutex_type>& l, std::ptrdiff_t count)
        {
            HPX_ASSERT_OWNS_LOCK(l);

            while (value_ < count)
            {
                cond_.wait(l, "counting_semaphore::wait");
            }
            value_ -= count;
        }

        bool wait_until(std::unique_lock<mutex_type>& l,
            util::steady_time_point const& abs_time, std::ptrdiff_t count)
        {
            HPX_ASSERT_OWNS_LOCK(l);

            while (value_ < count)
            {
                // return false if unblocked by timeout expiring
                if (cond_.wait_until(
                        l, abs_time, "counting_semaphore::wait_until"))
                {
                    return false;
                }
            }
            value_ -= count;
            return true;
        }

        bool try_wait(std::unique_lock<mutex_type>& l, std::ptrdiff_t count = 1)
        {
            HPX_ASSERT_OWNS_LOCK(l);

            if (!(value_ < count))
            {
                // enter wait_locked only if there are sufficient credits
                // available
                wait(l, count);
                return true;
            }
            return false;
        }

        bool try_acquire(std::unique_lock<mutex_type>& l)
        {
            HPX_ASSERT_OWNS_LOCK(l);

            if (value_ >= 1)
            {
                --value_;
                return true;
            }
            return false;
        }

        void signal(std::unique_lock<mutex_type> l, std::ptrdiff_t count)
        {
            HPX_ASSERT_OWNS_LOCK(l);

            mutex_type* mtx = l.mutex();

            // release no more threads than we get resources
            value_ += count;
            for (std::int64_t i = 0; value_ >= 0 && i < count; ++i)
            {
                // notify_one() returns false if no more threads are
                // waiting
                if (!cond_.notify_one(std::move(l)))
                    break;

                l = std::unique_lock<mutex_type>(*mtx);
            }
        }

        std::ptrdiff_t signal_all(std::unique_lock<mutex_type> l)
        {
            HPX_ASSERT_OWNS_LOCK(l);

            std::ptrdiff_t count = static_cast<std::ptrdiff_t>(cond_.size(l));
            signal(std::move(l), count);
            return count;
        }

    private:
        std::ptrdiff_t value_;
        local::detail::condition_variable cond_;
    };
}}}}    // namespace hpx::lcos::local::detail

#if defined(HPX_MSVC_WARNING_PRAGMA)
#pragma warning(pop)
#endif
