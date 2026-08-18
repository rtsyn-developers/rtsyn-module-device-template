/**
 * @file rtsyn/internal/_rtsyn_module_slug_/process.h
 * @author _rtsyn_module_author_
 * @brief Process callback declaration for the RTSyn _rtsyn_module_title_ module.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 * @copyright Copyright (c) _rtsyn_module_author_ _rtsyn_year_
 */
#ifndef RTSYN_INTERNAL__rtsyn_module_upper__PROCESS_H
#define RTSYN_INTERNAL__rtsyn_module_upper__PROCESS_H

#include <rtsyn/abi.h>

/**
 * @brief Execute one runtime cycle for a _rtsyn_module_slug_ instance.
 *
 * @param instance Module instance.
 * @param context Runtime callback context supplied by the host.
 * @return RTSyn ABI status code.
 */
rtsyn_abi_status_t RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__process(void *instance, const rtsyn_abi_runtime_context_t *context);

#endif /* RTSYN_INTERNAL__rtsyn_module_upper__PROCESS_H */
