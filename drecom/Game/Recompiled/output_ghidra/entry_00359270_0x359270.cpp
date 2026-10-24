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

// Function: entry_00359270
// Address: 0x359270 - 0x3592cc
void entry_00359270_0x359270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359270_0x359270");
#endif

    switch (ctx->pc) {
        case 0x359294u: goto label_359294;
        case 0x3592a0u: goto label_3592a0;
        default: break;
    }

    ctx->pc = 0x359270u;

    // 0x359270: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x359270u;
    {
        const bool branch_taken_0x359270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x359270) {
            ctx->pc = 0x3592F0u;
            return;
        }
    }
    ctx->pc = 0x359278u;
    // 0x359278: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35927c: 0x24044806  addiu       $a0, $zero, 0x4806
    ctx->pc = 0x35927cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18438));
    // 0x359280: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359280u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359284: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x359284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x359288: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x359288u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35928c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35928Cu;
    SET_GPR_U32(ctx, 31, 0x359294u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35928Cu, 0x359294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359294u;
label_359294:
    // 0x359294: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x359294u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x359298: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x359298u;
    SET_GPR_U32(ctx, 31, 0x3592A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x359298u, 0x3592A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3592A0u;
label_3592a0:
    // 0x3592a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3592a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3592a4: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x3592a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x3592a8: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x3592a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x3592ac: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3592ACu;
    {
        const bool branch_taken_0x3592ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3592ac) {
            ctx->pc = 0x3592F0u;
            return;
        }
    }
    ctx->pc = 0x3592B4u;
    // 0x3592b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3592b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3592b8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3592b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3592bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3592bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3592c0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3592c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3592c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3592C4u;
    {
        const bool branch_taken_0x3592c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3592c4) {
            ctx->pc = 0x3592F0u;
            return;
        }
    }
    ctx->pc = 0x3592CCu;
}
