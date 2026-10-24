#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00182cf0
// Address: 0x182cf0 - 0x182d08
void entry_00182cf0_0x182cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182cf0_0x182cf0");
#endif

    ctx->pc = 0x182cf0u;

    // 0x182cf0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x182cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182cf4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x182cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x182cf8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x182cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182cfc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x182cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x182d00: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x182d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182d04: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x182d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x182d08u;
}
