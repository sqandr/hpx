//  Copyright (c) 2007-2012 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <hpx/hpx_fwd.hpp>
#include <hpx/hpx_init.hpp>
#include <hpx/util/get_commandline_args.hpp>

#include <boost/scoped_array.hpp>

///////////////////////////////////////////////////////////////////////////////
// Forwarding of hpx_main, if necessary. This has to be in a separate
// translation unit to ensure the linker can pick or ignore this function,
// depending on whether the main executable defines this symbol or not.
int hpx_main()
{
    // Reconstruct the command line arguments from system settings.
    std::vector<std::string> args = hpx::util::get_commandline_args();

    // Copy all arguments which are not hpx related to a temporary array
    boost::scoped_array<char*> argv(new char*[args.size()]);
    for(std::size_t i = 0; i < args.size(); ++i)
        argv[i] = const_cast<char*>(args[i].data());

    // Invoke hpx_main
    return hpx_main(static_cast<int>(args.size()), argv.get());
}
