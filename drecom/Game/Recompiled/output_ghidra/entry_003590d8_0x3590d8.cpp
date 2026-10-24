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

// Function: entry_003590d8
// Address: 0x3590d8 - 0x35912c
void entry_003590d8_0x3590d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003590d8_0x3590d8");
#endif

    switch (ctx->pc) {
        case 0x359108u: goto label_359108;
        case 0x359114u: goto label_359114;
        default: break;
    }

    ctx->pc = 0x3590d8u;

    // 0x3590d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3590d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3590dc: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x3590dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x3590e0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3590e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3590e4: 0x1420002f  bnez        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x3590E4u;
    {
        const bool branch_taken_0x3590e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3590e4) {
            ctx->pc = 0x3591A4u;
            return;
        }
    }
    ctx->pc = 0x3590ECu;
    // 0x3590ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3590ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3590f0: 0x24044802  addiu       $a0, $zero, 0x4802
    ctx->pc = 0x3590f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18434));
    // 0x3590f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3590f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3590f8: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x3590f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x3590fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3590fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359100: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x359100u;
    SET_GPR_U32(ctx, 31, 0x359108u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x359100u, 0x359108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359108u;
label_359108:
    // 0x359108: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x359108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35910c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35910Cu;
    SET_GPR_U32(ctx, 31, 0x359114u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35910Cu, 0x359114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359114u;
label_359114:
    // 0x359114: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359118: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x359118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x35911c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35911cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x359120: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x359120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x359124: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x359124u;
    {
        const bool branch_taken_0x359124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359124) {
            ctx->pc = 0x3591A4u;
            return;
        }
    }
    ctx->pc = 0x35912Cu;
}
