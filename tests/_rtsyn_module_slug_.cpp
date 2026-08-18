#include <array>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <gtest/gtest.h>

#include "rtsyn/_rtsyn_module_slug_.h"

namespace {

struct HostContext {
    std::array<std::array<std::uint8_t, /* RTSYN_TEMPLATE:_rtsyn_host_value_byte_count_ */ sizeof(double)>,
               /* RTSYN_TEMPLATE:_rtsyn_port_slot_count_ */ 1>
        inputs{};
    std::array<std::array<std::uint8_t, /* RTSYN_TEMPLATE:_rtsyn_host_value_byte_count_ */ sizeof(double)>,
               /* RTSYN_TEMPLATE:_rtsyn_port_slot_count_ */ 1>
        outputs{};
    std::array<bool, /* RTSYN_TEMPLATE:_rtsyn_port_slot_count_ */ 1> output_written{};
};

std::size_t
value_size(uint32_t port_index)
{
    /* RTSYN_TEMPLATE:_rtsyn_test_port_value_size_cases_ */
    (void)port_index;
    return sizeof(double);
}

rtsyn_abi_status_t
read(const rtsyn_abi_runtime_context_t *context, uint32_t port_index, void *out_value)
{
    if (out_value == nullptr)
    {
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }
    const auto *host = static_cast<const HostContext *>(context->host_context);
    if (port_index >= host->inputs.size())
    {
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }
    const std::size_t size = value_size(port_index);
    if (size == 0)
    {
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }
    std::memcpy(out_value, host->inputs[port_index].data(), size);
    return RTSYN_ABI_STATUS_OK;
}

rtsyn_abi_status_t
write(const rtsyn_abi_runtime_context_t *context, uint32_t port_index, const void *value)
{
    if (value == nullptr)
    {
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }
    auto *host = const_cast<HostContext *>(static_cast<const HostContext *>(context->host_context));
    if (port_index >= host->outputs.size())
    {
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }
    const std::size_t size = value_size(port_index);
    if (size == 0)
    {
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }
    std::memcpy(host->outputs[port_index].data(), value, size);
    host->output_written[port_index] = true;
    return RTSYN_ABI_STATUS_OK;
}

TEST(_rtsyn_module_pascal_Device, DescribesAbiSurface)
{
    const auto *descriptor = rtsyn__rtsyn_module_slug__get_descriptor();

    ASSERT_NE(descriptor, nullptr);
    EXPECT_STREQ(descriptor->name, "_rtsyn_module_slug_");
    EXPECT_EQ(descriptor->node_type, RTSYN_ABI_NODE_DEVICE);
    /* RTSYN_TEMPLATE:_rtsyn_test_descriptor_expectations_ */
}

TEST(_rtsyn_module_pascal_Device, CreatesStartsProcessesStopsAndDestroys)
{
    const auto *descriptor = rtsyn__rtsyn_module_slug__get_descriptor();
    void *instance = nullptr;
    HostContext host{};
    const rtsyn_abi_runtime_api_t api{read, write};
    const rtsyn_abi_runtime_context_t immediate_context{
        0, 0, 0, RTSYN_RUNTIME_CYCLE_STAGE_IMMEDIATE, &api, &host};
    const rtsyn_abi_runtime_context_t terminal_context{
        0, 0, 0, RTSYN_RUNTIME_CYCLE_STAGE_TERMINAL, &api, &host};

    ASSERT_EQ(descriptor->callbacks.create(&instance), RTSYN_ABI_STATUS_OK);
    ASSERT_NE(instance, nullptr);
    EXPECT_EQ(descriptor->callbacks.start(instance), RTSYN_ABI_STATUS_OK);
    EXPECT_EQ(descriptor->callbacks.process(instance, &immediate_context), RTSYN_ABI_STATUS_OK);
    EXPECT_EQ(descriptor->callbacks.process(instance, &terminal_context), RTSYN_ABI_STATUS_OK);
    EXPECT_EQ(descriptor->callbacks.stop(instance), RTSYN_ABI_STATUS_OK);
    descriptor->callbacks.destroy(instance);
}

} // namespace
