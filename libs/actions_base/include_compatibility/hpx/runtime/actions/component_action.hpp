//  Copyright (c) 2019 Ste||ar Group
//
//  SPDX-License-Identifier: BSL-1.0
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <hpx/config.hpp>
#include <hpx/actions_base/config/defines.hpp>
#include <hpx/actions_base/component_action.hpp>

// different versions of clang-format do different things
// clang-format off
#if HPX_ACTIONS_BASE_HAVE_DEPRECATION_WARNINGS
#if defined(HPX_MSVC)
#pragma message(                                                               \
    "The header hpx/runtime/actions/component_action.hpp is deprecated, \
    please include hpx/actions_base/component_action.hpp instead")
#else
#warning                                                                       \
    "The header hpx/runtime/actions/component_action.hpp is deprecated, \
    please include hpx/actions_base/component_action.hpp instead"
#endif
#endif
// clang-format on
