// Copyright (c) 2007-2012 Hartmut Kaiser
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// This file has been automatically generated using the Boost.Wave tool.
// Do not edit manually.


namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(1);
        lazy_values.push_back(f0);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(2);
        lazy_values.push_back(f0); lazy_values.push_back(f1);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(3);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(4);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(5);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(6);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(7);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5); lazy_values.push_back(f6);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(8);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5); lazy_values.push_back(f6); lazy_values.push_back(f7);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(9);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5); lazy_values.push_back(f6); lazy_values.push_back(f7); lazy_values.push_back(f8);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(10);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5); lazy_values.push_back(f6); lazy_values.push_back(f7); lazy_values.push_back(f8); lazy_values.push_back(f9);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(11);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5); lazy_values.push_back(f6); lazy_values.push_back(f7); lazy_values.push_back(f8); lazy_values.push_back(f9); lazy_values.push_back(f10);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(12);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5); lazy_values.push_back(f6); lazy_values.push_back(f7); lazy_values.push_back(f8); lazy_values.push_back(f9); lazy_values.push_back(f10); lazy_values.push_back(f11);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(13);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5); lazy_values.push_back(f6); lazy_values.push_back(f7); lazy_values.push_back(f8); lazy_values.push_back(f9); lazy_values.push_back(f10); lazy_values.push_back(f11); lazy_values.push_back(f12);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12 , lcos::future<T, RT> f13)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(14);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5); lazy_values.push_back(f6); lazy_values.push_back(f7); lazy_values.push_back(f8); lazy_values.push_back(f9); lazy_values.push_back(f10); lazy_values.push_back(f11); lazy_values.push_back(f12); lazy_values.push_back(f13);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12 , lcos::future<T, RT> f13 , lcos::future<T, RT> f14)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(15);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5); lazy_values.push_back(f6); lazy_values.push_back(f7); lazy_values.push_back(f8); lazy_values.push_back(f9); lazy_values.push_back(f10); lazy_values.push_back(f11); lazy_values.push_back(f12); lazy_values.push_back(f13); lazy_values.push_back(f14);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12 , lcos::future<T, RT> f13 , lcos::future<T, RT> f14 , lcos::future<T, RT> f15)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(16);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5); lazy_values.push_back(f6); lazy_values.push_back(f7); lazy_values.push_back(f8); lazy_values.push_back(f9); lazy_values.push_back(f10); lazy_values.push_back(f11); lazy_values.push_back(f12); lazy_values.push_back(f13); lazy_values.push_back(f14); lazy_values.push_back(f15);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12 , lcos::future<T, RT> f13 , lcos::future<T, RT> f14 , lcos::future<T, RT> f15 , lcos::future<T, RT> f16)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(17);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5); lazy_values.push_back(f6); lazy_values.push_back(f7); lazy_values.push_back(f8); lazy_values.push_back(f9); lazy_values.push_back(f10); lazy_values.push_back(f11); lazy_values.push_back(f12); lazy_values.push_back(f13); lazy_values.push_back(f14); lazy_values.push_back(f15); lazy_values.push_back(f16);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12 , lcos::future<T, RT> f13 , lcos::future<T, RT> f14 , lcos::future<T, RT> f15 , lcos::future<T, RT> f16 , lcos::future<T, RT> f17)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(18);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5); lazy_values.push_back(f6); lazy_values.push_back(f7); lazy_values.push_back(f8); lazy_values.push_back(f9); lazy_values.push_back(f10); lazy_values.push_back(f11); lazy_values.push_back(f12); lazy_values.push_back(f13); lazy_values.push_back(f14); lazy_values.push_back(f15); lazy_values.push_back(f16); lazy_values.push_back(f17);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12 , lcos::future<T, RT> f13 , lcos::future<T, RT> f14 , lcos::future<T, RT> f15 , lcos::future<T, RT> f16 , lcos::future<T, RT> f17 , lcos::future<T, RT> f18)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(19);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5); lazy_values.push_back(f6); lazy_values.push_back(f7); lazy_values.push_back(f8); lazy_values.push_back(f9); lazy_values.push_back(f10); lazy_values.push_back(f11); lazy_values.push_back(f12); lazy_values.push_back(f13); lazy_values.push_back(f14); lazy_values.push_back(f15); lazy_values.push_back(f16); lazy_values.push_back(f17); lazy_values.push_back(f18);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
namespace hpx
{
    
    template <typename T, typename RT>
    lcos::future<std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > > >
    wait_n (std::size_t n, lcos::future<T, RT> f0 , lcos::future<T, RT> f1 , lcos::future<T, RT> f2 , lcos::future<T, RT> f3 , lcos::future<T, RT> f4 , lcos::future<T, RT> f5 , lcos::future<T, RT> f6 , lcos::future<T, RT> f7 , lcos::future<T, RT> f8 , lcos::future<T, RT> f9 , lcos::future<T, RT> f10 , lcos::future<T, RT> f11 , lcos::future<T, RT> f12 , lcos::future<T, RT> f13 , lcos::future<T, RT> f14 , lcos::future<T, RT> f15 , lcos::future<T, RT> f16 , lcos::future<T, RT> f17 , lcos::future<T, RT> f18 , lcos::future<T, RT> f19)
    {
        std::vector<lcos::future<T, RT> > lazy_values;
        lazy_values.reserve(20);
        lazy_values.push_back(f0); lazy_values.push_back(f1); lazy_values.push_back(f2); lazy_values.push_back(f3); lazy_values.push_back(f4); lazy_values.push_back(f5); lazy_values.push_back(f6); lazy_values.push_back(f7); lazy_values.push_back(f8); lazy_values.push_back(f9); lazy_values.push_back(f10); lazy_values.push_back(f11); lazy_values.push_back(f12); lazy_values.push_back(f13); lazy_values.push_back(f14); lazy_values.push_back(f15); lazy_values.push_back(f16); lazy_values.push_back(f17); lazy_values.push_back(f18); lazy_values.push_back(f19);
        typedef std::vector<HPX_STD_TUPLE<int, lcos::future<T, RT> > >
            return_type;
        lcos::local::futures_factory<return_type()> p(
            detail::wait_n<T, RT>(boost::move(lazy_values), n));
        p.apply();
        return p.get_future();
    }
}
