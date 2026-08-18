/**
 * @file rtsyn/internal/_rtsyn_module_slug_/stop.h
 * @author _rtsyn_module_author_
 * @brief Stop callback declaration for the RTSyn _rtsyn_module_title_ module.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 * @copyright Copyright (c) _rtsyn_module_author_ _rtsyn_year_
 */
#ifndef RTSYN_INTERNAL__rtsyn_module_upper__STOP_H
#define RTSYN_INTERNAL__rtsyn_module_upper__STOP_H

#include <rtsyn/abi.h>

/**
 * @brief Stop runtime execution for a _rtsyn_module_slug_ instance.
 *
 * @param instance Module instance.
 * @return RTSyn ABI status code.
 */
rtsyn_abi_status_t RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__stop(void *instance);

#endif /* RTSYN_INTERNAL__rtsyn_module_upper__STOP_H */
