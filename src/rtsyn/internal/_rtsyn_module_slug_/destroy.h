/**
 * @file rtsyn/internal/_rtsyn_module_slug_/destroy.h
 * @author _rtsyn_module_author_
 * @brief Destroy callback declaration for the RTSyn _rtsyn_module_title_ module.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 * @copyright Copyright (c) _rtsyn_module_author_ _rtsyn_year_
 */
#ifndef RTSYN_INTERNAL__rtsyn_module_upper__DESTROY_H
#define RTSYN_INTERNAL__rtsyn_module_upper__DESTROY_H

#include <rtsyn/abi.h>

/**
 * @brief Release a _rtsyn_module_slug_ instance allocated by the create callback.
 *
 * @param instance Instance to destroy.
 */
void RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__destroy(void *instance);

#endif /* RTSYN_INTERNAL__rtsyn_module_upper__DESTROY_H */
