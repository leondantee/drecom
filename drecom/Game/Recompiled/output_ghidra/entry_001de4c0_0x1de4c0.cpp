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

// Function: entry_001de4c0
// Address: 0x1de4c0 - 0x1de510
void entry_001de4c0_0x1de4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de4c0_0x1de4c0");
#endif

    ctx->pc = 0x1de4c0u;

    // 0x1de4c0: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1de4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de4c4: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1de4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de4c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de4c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de4cc: 0x0  nop
    ctx->pc = 0x1de4ccu;
    // NOP
    // 0x1de4d0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1DE4D0u;
    {
        const bool branch_taken_0x1de4d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de4d0) {
            ctx->pc = 0x1DE510u;
            return;
        }
    }
    ctx->pc = 0x1DE4D8u;
    // 0x1de4d8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1de4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de4dc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1de4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1de4e0: 0x11943c  dsll32      $s2, $s1, 16
    ctx->pc = 0x1de4e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1de4e4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1de4e4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1de4e8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1de4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de4ec: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1de4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1de4f0: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x1de4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1de4f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de4f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de4f8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1de4f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de4fc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1de4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de500: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1de500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1de504: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x1de504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1de508: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de508u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de50c: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x1de50cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1de510u;
}
