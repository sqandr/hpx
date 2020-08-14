//  Copyright (c) 2007-2016 Hartmut Kaiser
//
//  SPDX-License-Identifier: BSL-1.0
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

/// \file runtime/threads/executors/default_executor.hpp

#pragma once

#include <hpx/config.hpp>

#if defined(HPX_HAVE_THREAD_EXECUTORS_COMPATIBILITY)
#include <hpx/execution/executors/default_executor.hpp>

namespace hpx { namespace threads { namespace executors {
    using default_executor = parallel::execution::default_executor;
}}}    // namespace hpx::threads::executors
#endif
