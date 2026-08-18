#include <stdlib.h>

#include "rtsyn/internal/_rtsyn_module_slug_.h"
#include "rtsyn/internal/_rtsyn_module_slug_/destroy.h"

void RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__destroy(void *instance)
{
    rtsyn__rtsyn_module_slug__instance_t *_rtsyn_module_slug_ =
        (rtsyn__rtsyn_module_slug__instance_t *)instance;
    free(_rtsyn_module_slug_);
}
