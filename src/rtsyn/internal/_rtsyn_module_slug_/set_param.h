/**
 * @file rtsyn/internal/_rtsyn_module_slug_/set_param.h
 * @author _rtsyn_module_author_
 * @brief Set-param callback declaration for the RTSyn _rtsyn_module_title_ module.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 * @copyright Copyright (c) _rtsyn_module_author_ _rtsyn_year_
 */
#ifndef RTSYN_INTERNAL__rtsyn_module_upper__SET_PARAM_H
#define RTSYN_INTERNAL__rtsyn_module_upper__SET_PARAM_H

#include <rtsyn/abi.h>
#include <stdint.h>

/**
 * @brief Set one parameter value on a _rtsyn_module_slug_ instance.
 *
 * @param instance Module instance.
 * @param param_index Parameter index from the descriptor.
 * @param value Pointer to the parameter value.
 * @return RTSyn ABI status code.
 */
rtsyn_abi_status_t RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__set_param(void *instance, uint32_t param_index, const void *value);

#endif /* RTSYN_INTERNAL__rtsyn_module_upper__SET_PARAM_H */
