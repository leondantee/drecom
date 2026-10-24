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

// Function: entry_002dcd64
// Address: 0x2dcd64 - 0x2dcdb8
void entry_002dcd64_0x2dcd64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dcd64_0x2dcd64");
#endif

    switch (ctx->pc) {
        case 0x2dcd7cu: goto label_2dcd7c;
        case 0x2dcda4u: goto label_2dcda4;
        case 0x2dcdb4u: goto label_2dcdb4;
        default: break;
    }

    ctx->pc = 0x2dcd64u;

    // 0x2dcd64: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dcd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dcd68: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2dcd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dcd6c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2dcd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcd70: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x2dcd70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x2dcd74: 0xc059e1c  jal         func_167870
    ctx->pc = 0x2DCD74u;
    SET_GPR_U32(ctx, 31, 0x2DCD7Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x2DCD74u, 0x2DCD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD7Cu;
label_2dcd7c:
    // 0x2dcd7c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2dcd7cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dcd80: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DCD80u;
    {
        const bool branch_taken_0x2dcd80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd80) {
            ctx->pc = 0x2DCDC8u;
            return;
        }
    }
    ctx->pc = 0x2DCD88u;
    // 0x2dcd88: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2dcd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2dcd8c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2dcd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dcd90: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2dcd90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dcd94: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2dcd94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dcd98: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2dcd98u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dcd9c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2DCD9Cu;
    SET_GPR_U32(ctx, 31, 0x2DCDA4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2DCD9Cu, 0x2DCDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDA4u;
label_2dcda4:
    // 0x2dcda4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2dcda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dcda8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2dcda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dcdac: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DCDACu;
    SET_GPR_U32(ctx, 31, 0x2DCDB4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DCDB4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCDB4u) { return; }
    ctx->pc = 0x2DCDB4u;
label_2dcdb4:
    // 0x2dcdb4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dcdb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x2dcdb8u;
}
