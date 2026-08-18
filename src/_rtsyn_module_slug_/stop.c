#include <string.h>

#include "rtsyn/internal/_rtsyn_module_slug_.h"
#include "rtsyn/internal/_rtsyn_module_slug_/stop.h"

rtsyn_abi_status_t RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__stop(void *instance)
{
    rtsyn__rtsyn_module_slug__instance_t *_rtsyn_module_slug_ =
        (rtsyn__rtsyn_module_slug__instance_t *)instance;

    if (!_rtsyn_module_slug_)
    {
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }

    /* RTSYN_TEMPLATE:_rtsyn_reset_assignments_ */
    _rtsyn_module_slug_->reserved = 0;

    return RTSYN_ABI_STATUS_OK;
}
