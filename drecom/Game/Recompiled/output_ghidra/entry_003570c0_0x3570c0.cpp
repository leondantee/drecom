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

// Function: entry_003570c0
// Address: 0x3570c0 - 0x357108
void entry_003570c0_0x3570c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003570c0_0x3570c0");
#endif

    switch (ctx->pc) {
        case 0x3570f0u: goto label_3570f0;
        case 0x3570fcu: goto label_3570fc;
        default: break;
    }

    ctx->pc = 0x3570c0u;

    // 0x3570c0: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x3570c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3570c4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x3570C4u;
    {
        const bool branch_taken_0x3570c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3570c4) {
            ctx->pc = 0x357028u;
            return;
        }
    }
    ctx->pc = 0x3570CCu;
    // 0x3570cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3570ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3570d0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3570D0u;
    {
        const bool branch_taken_0x3570d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3570d0) {
            ctx->pc = 0x357108u;
            return;
        }
    }
    ctx->pc = 0x3570D8u;
    // 0x3570d8: 0x2404171f  addiu       $a0, $zero, 0x171F
    ctx->pc = 0x3570d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5919));
    // 0x3570dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3570dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3570e0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x3570e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3570e4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3570e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3570e8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3570E8u;
    SET_GPR_U32(ctx, 31, 0x3570F0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3570E8u, 0x3570F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570F0u;
label_3570f0:
    // 0x3570f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3570f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3570f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3570F4u;
    SET_GPR_U32(ctx, 31, 0x3570FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3570F4u, 0x3570FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570FCu;
label_3570fc:
    // 0x3570fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3570fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357100: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x357100u;
    {
        const bool branch_taken_0x357100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357100) {
            ctx->pc = 0x357158u;
            return;
        }
    }
    ctx->pc = 0x357108u;
}
