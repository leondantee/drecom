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

// Function: entry_0015a42c
// Address: 0x15a42c - 0x15a464
void entry_0015a42c_0x15a42c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a42c_0x15a42c");
#endif

    switch (ctx->pc) {
        case 0x15a440u: goto label_15a440;
        default: break;
    }

    ctx->pc = 0x15a42cu;

    // 0x15a42c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a430: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a434: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x15a434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x15a438: 0xc040c1a  jal         func_103068
    ctx->pc = 0x15A438u;
    SET_GPR_U32(ctx, 31, 0x15A440u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x15A440u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A440u) { return; }
    ctx->pc = 0x15A440u;
label_15a440:
    // 0x15a440: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a444: 0x0  nop
    ctx->pc = 0x15a444u;
    // NOP
    // 0x15a448: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15a448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a44c: 0x0  nop
    ctx->pc = 0x15a44cu;
    // NOP
    // 0x15a450: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A450u;
    {
        const bool branch_taken_0x15a450 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a450) {
            ctx->pc = 0x15A464u;
            return;
        }
    }
    ctx->pc = 0x15A458u;
    // 0x15a458: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15a458u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15a45c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15A45Cu;
    {
        const bool branch_taken_0x15a45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a45c) {
            ctx->pc = 0x15A4A0u;
            return;
        }
    }
    ctx->pc = 0x15A464u;
}
