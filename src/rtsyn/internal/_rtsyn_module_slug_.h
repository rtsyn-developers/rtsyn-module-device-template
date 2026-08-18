/**
 * @file rtsyn/internal/_rtsyn_module_slug_.h
 * @author _rtsyn_module_author_
 * @brief Internal state declarations for the RTSyn _rtsyn_module_title_ module.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 * @copyright Copyright (c) _rtsyn_module_author_ _rtsyn_year_
 */
#ifndef RTSYN_INTERNAL__rtsyn_module_upper__H
#define RTSYN_INTERNAL__rtsyn_module_upper__H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Per-node runtime instance owned by RTSyn through the ABI callbacks.
 */
typedef struct rtsyn__rtsyn_module_slug__instance_s {
    /* RTSYN_TEMPLATE:_rtsyn_instance_fields_ */
    uint32_t reserved;
} rtsyn__rtsyn_module_slug__instance_t;

/**
 * @brief Port indexes exposed by the module descriptor.
 */
typedef enum rtsyn__rtsyn_module_slug__instance_ports_e : uint32_t {
    /* RTSYN_TEMPLATE:_rtsyn_port_enum_entries_ */
    RTSYN__rtsyn_module_upper__PORT_COUNT,
} rtsyn__rtsyn_module_slug__instance_ports_t;

/**
 * @brief Parameter indexes accepted by the set-param callback.
 */
typedef enum rtsyn__rtsyn_module_slug__instance_params_e : uint32_t {
    /* RTSYN_TEMPLATE:_rtsyn_param_enum_entries_ */
    RTSYN__rtsyn_module_upper__PARAM_COUNT,
} rtsyn__rtsyn_module_slug__instance_params_t;

/**
 * @brief State indexes accepted by the read-state callback.
 */
typedef enum rtsyn__rtsyn_module_slug__instance_states_e : uint32_t {
    /* RTSYN_TEMPLATE:_rtsyn_state_enum_entries_ */
    RTSYN__rtsyn_module_upper__STATE_COUNT,
} rtsyn__rtsyn_module_slug__instance_states_t;

#ifdef __cplusplus
}
#endif

#endif /* RTSYN_INTERNAL__rtsyn_module_upper__H */
