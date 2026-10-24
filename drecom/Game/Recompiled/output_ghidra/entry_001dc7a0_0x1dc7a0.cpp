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

// Function: entry_001dc7a0
// Address: 0x1dc7a0 - 0x1dc7cc
void entry_001dc7a0_0x1dc7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc7a0_0x1dc7a0");
#endif

    ctx->pc = 0x1dc7a0u;

    // 0x1dc7a0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1dc7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc7a4: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1dc7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1dc7a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc7a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc7ac: 0x0  nop
    ctx->pc = 0x1dc7acu;
    // NOP
    // 0x1dc7b0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x1dc7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x1dc7b4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1dc7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc7b8: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1dc7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1dc7bc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1dc7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc7c0: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x1dc7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x1dc7c4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1dc7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc7c8: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x1dc7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    ctx->pc = 0x1dc7ccu;
}
