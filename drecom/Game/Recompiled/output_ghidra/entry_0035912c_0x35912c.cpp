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

// Function: entry_0035912c
// Address: 0x35912c - 0x359180
void entry_0035912c_0x35912c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035912c_0x35912c");
#endif

    switch (ctx->pc) {
        case 0x35915cu: goto label_35915c;
        case 0x359168u: goto label_359168;
        default: break;
    }

    ctx->pc = 0x35912cu;

    // 0x35912c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359130: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x359130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x359134: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x359134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x359138: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x359138u;
    {
        const bool branch_taken_0x359138 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x359138) {
            ctx->pc = 0x3591A4u;
            return;
        }
    }
    ctx->pc = 0x359140u;
    // 0x359140: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359144: 0x24044802  addiu       $a0, $zero, 0x4802
    ctx->pc = 0x359144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18434));
    // 0x359148: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359148u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35914c: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x35914cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x359150: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x359150u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359154: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x359154u;
    SET_GPR_U32(ctx, 31, 0x35915Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x359154u, 0x35915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35915Cu;
label_35915c:
    // 0x35915c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35915cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x359160: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x359160u;
    SET_GPR_U32(ctx, 31, 0x359168u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x359160u, 0x359168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359168u;
label_359168:
    // 0x359168: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35916c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x35916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x359170: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x359170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x359174: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x359174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x359178: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x359178u;
    {
        const bool branch_taken_0x359178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359178) {
            ctx->pc = 0x3591A4u;
            return;
        }
    }
    ctx->pc = 0x359180u;
}
