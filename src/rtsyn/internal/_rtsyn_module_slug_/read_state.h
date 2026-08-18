/**
 * @file rtsyn/internal/_rtsyn_module_slug_/read_state.h
 * @author _rtsyn_module_author_
 * @brief Read-state callback declaration for the RTSyn _rtsyn_module_title_ module.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 * @copyright Copyright (c) _rtsyn_module_author_ _rtsyn_year_
 */
#ifndef RTSYN_INTERNAL__rtsyn_module_upper__READ_STATE_H
#define RTSYN_INTERNAL__rtsyn_module_upper__READ_STATE_H

#include <rtsyn/abi.h>
#include <stdint.h>

/**
 * @brief Read a public state value from a _rtsyn_module_slug_ instance.
 *
 * @param instance Module instance.
 * @param state_index State index from the descriptor.
 * @param out_value Output storage for the state value.
 * @return RTSyn ABI status code.
 */
rtsyn_abi_status_t RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__read_state(const void *instance, uint32_t state_index, void *out_value);

#endif /* RTSYN_INTERNAL__rtsyn_module_upper__READ_STATE_H */
