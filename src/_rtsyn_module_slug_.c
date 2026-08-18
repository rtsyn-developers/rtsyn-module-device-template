#include "rtsyn/_rtsyn_module_slug_.h"
#include "rtsyn/internal/_rtsyn_module_slug_.h"
#include "rtsyn/internal/_rtsyn_module_slug_/create.h"
#include "rtsyn/internal/_rtsyn_module_slug_/destroy.h"
#include "rtsyn/internal/_rtsyn_module_slug_/process.h"
#include "rtsyn/internal/_rtsyn_module_slug_/read_state.h"
#include "rtsyn/internal/_rtsyn_module_slug_/set_param.h"
#include "rtsyn/internal/_rtsyn_module_slug_/start.h"
#include "rtsyn/internal/_rtsyn_module_slug_/stop.h"

/* RTSYN_TEMPLATE:_rtsyn_port_descriptors_ */
/* RTSYN_TEMPLATE:_rtsyn_param_descriptors_ */
/* RTSYN_TEMPLATE:_rtsyn_state_descriptors_ */
static const rtsyn_abi_node_descriptor_t rtsyn__rtsyn_module_slug__descriptor = {
    .name = "_rtsyn_module_slug_",
    .node_type = RTSYN_ABI_NODE_DEVICE,
    .port_count = RTSYN__rtsyn_module_upper__PORT_COUNT,
    .ports = /* RTSYN_TEMPLATE:_rtsyn_descriptor_ports_pointer_ */ nullptr,
    .param_count = RTSYN__rtsyn_module_upper__PARAM_COUNT,
    .params = /* RTSYN_TEMPLATE:_rtsyn_descriptor_params_pointer_ */ nullptr,
    .state_count = RTSYN__rtsyn_module_upper__STATE_COUNT,
    .states = /* RTSYN_TEMPLATE:_rtsyn_descriptor_states_pointer_ */ nullptr,
    .callbacks =
        {
            .create = rtsyn__rtsyn_module_slug__create,
            .set_param = rtsyn__rtsyn_module_slug__set_param,
            .read_state = rtsyn__rtsyn_module_slug__read_state,
            .start = rtsyn__rtsyn_module_slug__start,
            .process = rtsyn__rtsyn_module_slug__process,
            .stop = rtsyn__rtsyn_module_slug__stop,
            .destroy = rtsyn__rtsyn_module_slug__destroy,
        },
};

const rtsyn_abi_node_descriptor_t *RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__get_descriptor(void)
{
    return &rtsyn__rtsyn_module_slug__descriptor;
}

const rtsyn_abi_node_descriptor_t *RTSYN_ABI_CALL
rtsyn_module_get_descriptor(void)
{
    return rtsyn__rtsyn_module_slug__get_descriptor();
}
