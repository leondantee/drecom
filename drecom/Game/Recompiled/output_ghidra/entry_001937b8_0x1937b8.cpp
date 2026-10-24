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

// Function: entry_001937b8
// Address: 0x1937b8 - 0x1937f0
void entry_001937b8_0x1937b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001937b8_0x1937b8");
#endif

    ctx->pc = 0x1937b8u;

    // 0x1937b8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1937b8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1937bc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1937bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1937c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1937c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1937c4: 0x0  nop
    ctx->pc = 0x1937c4u;
    // NOP
    // 0x1937c8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1937c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1937cc: 0x0  nop
    ctx->pc = 0x1937ccu;
    // NOP
    // 0x1937d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1937D0u;
    {
        const bool branch_taken_0x1937d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1937d0) {
            ctx->pc = 0x1937F0u;
            return;
        }
    }
    ctx->pc = 0x1937D8u;
    // 0x1937d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1937d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1937dc: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x1937dcu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1937e0: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1937e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1937e4: 0x0  nop
    ctx->pc = 0x1937e4u;
    // NOP
    // 0x1937e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1937E8u;
    {
        const bool branch_taken_0x1937e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1937e8) {
            ctx->pc = 0x1937F8u;
            return;
        }
    }
    ctx->pc = 0x1937F0u;
}
