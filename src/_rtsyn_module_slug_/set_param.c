#include <string.h>

#include "rtsyn/internal/_rtsyn_module_slug_.h"
#include "rtsyn/internal/_rtsyn_module_slug_/set_param.h"

rtsyn_abi_status_t RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__set_param(void *instance, uint32_t param_index, const void *value)
{
    rtsyn__rtsyn_module_slug__instance_t *_rtsyn_module_slug_ =
        (rtsyn__rtsyn_module_slug__instance_t *)instance;

    if (!_rtsyn_module_slug_ || !value)
    {
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }

    switch (param_index)
    {
    /* RTSYN_TEMPLATE:_rtsyn_set_param_cases_ */
    default:
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }
}
