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

// Function: entry_00280258
// Address: 0x280258 - 0x280284
void entry_00280258_0x280258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00280258_0x280258");
#endif

    ctx->pc = 0x280258u;

    // 0x280258: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x280258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28025c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x28025cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x280260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280264: 0x0  nop
    ctx->pc = 0x280264u;
    // NOP
    // 0x280268: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x280268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28026c: 0x0  nop
    ctx->pc = 0x28026cu;
    // NOP
    // 0x280270: 0x4501ffe4  bc1t        . + 4 + (-0x1C << 2)
    ctx->pc = 0x280270u;
    {
        const bool branch_taken_0x280270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280270) {
            ctx->pc = 0x280204u;
            return;
        }
    }
    ctx->pc = 0x280278u;
    // 0x280278: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x280278u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28027c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x28027Cu;
    {
        const bool branch_taken_0x28027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28027c) {
            ctx->pc = 0x280330u;
            return;
        }
    }
    ctx->pc = 0x280284u;
}
