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

// Function: entry_0015a36c
// Address: 0x15a36c - 0x15a3a4
void entry_0015a36c_0x15a36c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a36c_0x15a36c");
#endif

    switch (ctx->pc) {
        case 0x15a380u: goto label_15a380;
        default: break;
    }

    ctx->pc = 0x15a36cu;

    // 0x15a36c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a370: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a374: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x15a374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15a378: 0xc040c1a  jal         func_103068
    ctx->pc = 0x15A378u;
    SET_GPR_U32(ctx, 31, 0x15A380u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x15A380u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A380u) { return; }
    ctx->pc = 0x15A380u;
label_15a380:
    // 0x15a380: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a384: 0x0  nop
    ctx->pc = 0x15a384u;
    // NOP
    // 0x15a388: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15a388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a38c: 0x0  nop
    ctx->pc = 0x15a38cu;
    // NOP
    // 0x15a390: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A390u;
    {
        const bool branch_taken_0x15a390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a390) {
            ctx->pc = 0x15A3A4u;
            return;
        }
    }
    ctx->pc = 0x15A398u;
    // 0x15a398: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15a398u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15a39c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x15A39Cu;
    {
        const bool branch_taken_0x15a39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a39c) {
            ctx->pc = 0x15A4A0u;
            return;
        }
    }
    ctx->pc = 0x15A3A4u;
}
