#include <string.h>

#include "rtsyn/internal/_rtsyn_module_slug_.h"
#include "rtsyn/internal/_rtsyn_module_slug_/process.h"

static rtsyn_abi_status_t
rtsyn__rtsyn_module_slug__process_immediate(
    rtsyn__rtsyn_module_slug__instance_t *_rtsyn_module_slug_,
    const rtsyn_abi_runtime_context_t *context)
{
    rtsyn_abi_status_t status = RTSYN_ABI_STATUS_OK;

    (void)_rtsyn_module_slug_;
    (void)context;

    /* RTSYN_TEMPLATE:_rtsyn_device_immediate_reads_ */

    /* RTSYN_TEMPLATE:_rtsyn_device_immediate_writes_ */
    return RTSYN_ABI_STATUS_OK;
}

static rtsyn_abi_status_t
rtsyn__rtsyn_module_slug__process_terminal(
    rtsyn__rtsyn_module_slug__instance_t *_rtsyn_module_slug_,
    const rtsyn_abi_runtime_context_t *context)
{
    rtsyn_abi_status_t status = RTSYN_ABI_STATUS_OK;

    (void)_rtsyn_module_slug_;
    (void)context;

    /* RTSYN_TEMPLATE:_rtsyn_device_terminal_reads_ */

    /* RTSYN_TEMPLATE:_rtsyn_device_terminal_writes_ */
    return RTSYN_ABI_STATUS_OK;
}

rtsyn_abi_status_t RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__process(void *instance, const rtsyn_abi_runtime_context_t *context)
{
    rtsyn__rtsyn_module_slug__instance_t *_rtsyn_module_slug_ =
        (rtsyn__rtsyn_module_slug__instance_t *)instance;

    if (!_rtsyn_module_slug_ || !context || !context->api || !context->api->read || !context->api->write)
    {
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }

    switch (context->cycle_stage)
    {
        case RTSYN_RUNTIME_CYCLE_STAGE_IMMEDIATE:
            return rtsyn__rtsyn_module_slug__process_immediate(_rtsyn_module_slug_, context);
        case RTSYN_RUNTIME_CYCLE_STAGE_TERMINAL:
            return rtsyn__rtsyn_module_slug__process_terminal(_rtsyn_module_slug_, context);
        default:
            return RTSYN_ABI_STATUS_OK;
    }
}
