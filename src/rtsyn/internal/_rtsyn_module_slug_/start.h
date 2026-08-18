/**
 * @file rtsyn/internal/_rtsyn_module_slug_/start.h
 * @author _rtsyn_module_author_
 * @brief Start callback declaration for the RTSyn _rtsyn_module_title_ module.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 * @copyright Copyright (c) _rtsyn_module_author_ _rtsyn_year_
 */
#ifndef RTSYN_INTERNAL__rtsyn_module_upper__START_H
#define RTSYN_INTERNAL__rtsyn_module_upper__START_H

#include <rtsyn/abi.h>

/**
 * @brief Prepare a _rtsyn_module_slug_ instance for runtime execution.
 *
 * @param instance Module instance.
 * @return RTSyn ABI status code.
 */
rtsyn_abi_status_t RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__start(void *instance);

#endif /* RTSYN_INTERNAL__rtsyn_module_upper__START_H */
