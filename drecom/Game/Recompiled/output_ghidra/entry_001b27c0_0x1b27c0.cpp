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

// Function: entry_001b27c0
// Address: 0x1b27c0 - 0x1b27ec
void entry_001b27c0_0x1b27c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b27c0_0x1b27c0");
#endif

    ctx->pc = 0x1b27c0u;

    // 0x1b27c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b27c4: 0x13c20036  beq         $fp, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B27C4u;
    {
        const bool branch_taken_0x1b27c4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b27c4) {
            ctx->pc = 0x1B28A0u;
            return;
        }
    }
    ctx->pc = 0x1B27CCu;
    // 0x1b27cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b27ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b27d0: 0x0  nop
    ctx->pc = 0x1b27d0u;
    // NOP
    // 0x1b27d4: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1b27d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1b27d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b27dc: 0x2450b8d0  addiu       $s0, $v0, -0x4730
    ctx->pc = 0x1b27dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b27e0: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x1b27e0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b27e4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B27E4u;
    {
        const bool branch_taken_0x1b27e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b27e4) {
            ctx->pc = 0x1B2848u;
            return;
        }
    }
    ctx->pc = 0x1B27ECu;
}
