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

// Function: entry_00357270
// Address: 0x357270 - 0x3572ac
void entry_00357270_0x357270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00357270_0x357270");
#endif

    switch (ctx->pc) {
        case 0x357294u: goto label_357294;
        case 0x3572a0u: goto label_3572a0;
        default: break;
    }

    ctx->pc = 0x357270u;

    // 0x357270: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x357270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x357274: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x357274u;
    {
        const bool branch_taken_0x357274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357274) {
            ctx->pc = 0x3572ACu;
            return;
        }
    }
    ctx->pc = 0x35727Cu;
    // 0x35727c: 0x24041720  addiu       $a0, $zero, 0x1720
    ctx->pc = 0x35727cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5920));
    // 0x357280: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x357280u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357284: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x357284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x357288: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x357288u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35728c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35728Cu;
    SET_GPR_U32(ctx, 31, 0x357294u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35728Cu, 0x357294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357294u;
label_357294:
    // 0x357294: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x357294u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357298: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x357298u;
    SET_GPR_U32(ctx, 31, 0x3572A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x357298u, 0x3572A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572A0u;
label_3572a0:
    // 0x3572a0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3572a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3572a4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3572A4u;
    {
        const bool branch_taken_0x3572a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3572a4) {
            ctx->pc = 0x3572FCu;
            return;
        }
    }
    ctx->pc = 0x3572ACu;
}
