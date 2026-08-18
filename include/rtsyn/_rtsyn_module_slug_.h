/**
 * @file rtsyn/_rtsyn_module_slug_.h
 * @author _rtsyn_module_author_
 * @brief Public descriptor API for the RTSyn _rtsyn_module_title_ module.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 * @copyright Copyright (c) _rtsyn_module_author_ _rtsyn_year_
 */
#ifndef RTSYN__rtsyn_module_upper__H
#define RTSYN__rtsyn_module_upper__H

#include <rtsyn/abi/node.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Return the ABI descriptor for the _rtsyn_module_slug_ node.
 *
 * The returned descriptor has static storage duration and must not be modified
 * or freed by the caller.
 *
 * @return Pointer to the module node descriptor.
 */
RTSYN_ABI_EXPORT const rtsyn_abi_node_descriptor_t *RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__get_descriptor(void);

/**
 * @brief Standard descriptor entry point used by the RTSyn module loader.
 *
 * @return Pointer to the module node descriptor.
 */
RTSYN_ABI_EXPORT const rtsyn_abi_node_descriptor_t *RTSYN_ABI_CALL
rtsyn_module_get_descriptor(void);

#ifdef __cplusplus
}
#endif

#endif /* RTSYN__rtsyn_module_upper__H */
