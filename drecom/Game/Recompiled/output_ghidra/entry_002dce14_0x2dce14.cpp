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

// Function: entry_002dce14
// Address: 0x2dce14 - 0x2dce68
void entry_002dce14_0x2dce14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dce14_0x2dce14");
#endif

    switch (ctx->pc) {
        case 0x2dce2cu: goto label_2dce2c;
        case 0x2dce54u: goto label_2dce54;
        case 0x2dce64u: goto label_2dce64;
        default: break;
    }

    ctx->pc = 0x2dce14u;

    // 0x2dce14: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dce14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dce18: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2dce18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dce1c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2dce1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dce20: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x2dce20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x2dce24: 0xc059e1c  jal         func_167870
    ctx->pc = 0x2DCE24u;
    SET_GPR_U32(ctx, 31, 0x2DCE2Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x2DCE24u, 0x2DCE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE2Cu;
label_2dce2c:
    // 0x2dce2c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2dce2cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dce30: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DCE30u;
    {
        const bool branch_taken_0x2dce30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dce30) {
            ctx->pc = 0x2DCE78u;
            return;
        }
    }
    ctx->pc = 0x2DCE38u;
    // 0x2dce38: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2dce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2dce3c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2dce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dce40: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2dce40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dce44: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2dce44u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dce48: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2dce48u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dce4c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2DCE4Cu;
    SET_GPR_U32(ctx, 31, 0x2DCE54u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2DCE4Cu, 0x2DCE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE54u;
label_2dce54:
    // 0x2dce54: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2dce54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dce58: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2dce58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dce5c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DCE5Cu;
    SET_GPR_U32(ctx, 31, 0x2DCE64u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DCE64u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCE64u) { return; }
    ctx->pc = 0x2DCE64u;
label_2dce64:
    // 0x2dce64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dce64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x2dce68u;
}
