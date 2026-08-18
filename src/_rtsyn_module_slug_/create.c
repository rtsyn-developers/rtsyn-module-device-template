#include <stdlib.h>
#include <string.h>

#include "rtsyn/internal/_rtsyn_module_slug_.h"
#include "rtsyn/internal/_rtsyn_module_slug_/create.h"

rtsyn_abi_status_t RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__create(void **out_instance)
{
    if (!out_instance)
    {
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }

    rtsyn__rtsyn_module_slug__instance_t *_rtsyn_module_slug_ =
        (rtsyn__rtsyn_module_slug__instance_t *)malloc(sizeof(rtsyn__rtsyn_module_slug__instance_t));

    if (!_rtsyn_module_slug_)
    {
        return RTSYN_ABI_STATUS_ERROR;
    }

    /* RTSYN_TEMPLATE:_rtsyn_create_initializers_ */
    _rtsyn_module_slug_->reserved = 0;
    *out_instance = _rtsyn_module_slug_;

    return RTSYN_ABI_STATUS_OK;
}
