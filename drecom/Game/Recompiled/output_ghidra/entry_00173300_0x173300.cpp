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

// Function: entry_00173300
// Address: 0x173300 - 0x17333c
void entry_00173300_0x173300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173300_0x173300");
#endif

    ctx->pc = 0x173300u;

    // 0x173300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x173304: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x173304u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x173308: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x173308u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17330c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x17330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173314: 0x0  nop
    ctx->pc = 0x173314u;
    // NOP
    // 0x173318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17331c: 0x0  nop
    ctx->pc = 0x17331cu;
    // NOP
    // 0x173320: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x173320u;
    {
        const bool branch_taken_0x173320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173320) {
            ctx->pc = 0x17333Cu;
            return;
        }
    }
    ctx->pc = 0x173328u;
    // 0x173328: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x173328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17332c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17332cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x173330: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x173330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x173334: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x173334u;
    {
        const bool branch_taken_0x173334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173334) {
            ctx->pc = 0x173344u;
            return;
        }
    }
    ctx->pc = 0x17333Cu;
}
