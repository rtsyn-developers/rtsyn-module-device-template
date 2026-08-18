#include <string.h>

#include "rtsyn/internal/_rtsyn_module_slug_.h"
#include "rtsyn/internal/_rtsyn_module_slug_/read_state.h"

rtsyn_abi_status_t RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__read_state(const void *instance, uint32_t state_index, void *out_value)
{
    const rtsyn__rtsyn_module_slug__instance_t *_rtsyn_module_slug_ =
        (const rtsyn__rtsyn_module_slug__instance_t *)instance;

    if (!_rtsyn_module_slug_ || !out_value)
    {
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }

    switch (state_index)
    {
    /* RTSYN_TEMPLATE:_rtsyn_read_state_cases_ */
    default:
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }
}
