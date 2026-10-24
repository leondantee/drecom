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

// Function: entry_00306a28
// Address: 0x306a28 - 0x306a98
void entry_00306a28_0x306a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306a28_0x306a28");
#endif

    switch (ctx->pc) {
        case 0x306a38u: goto label_306a38;
        case 0x306a44u: goto label_306a44;
        case 0x306a54u: goto label_306a54;
        case 0x306a60u: goto label_306a60;
        default: break;
    }

    ctx->pc = 0x306a28u;

    // 0x306a28: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306a2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306a30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x306A30u;
    SET_GPR_U32(ctx, 31, 0x306A38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x306A30u, 0x306A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A38u;
label_306a38:
    // 0x306a38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a3c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x306A3Cu;
    SET_GPR_U32(ctx, 31, 0x306A44u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x306A3Cu, 0x306A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A44u;
label_306a44:
    // 0x306a44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x306a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x306a4c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x306A4Cu;
    SET_GPR_U32(ctx, 31, 0x306A54u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x306A4Cu, 0x306A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A54u;
label_306a54:
    // 0x306a54: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a58: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x306A58u;
    SET_GPR_U32(ctx, 31, 0x306A60u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x306A58u, 0x306A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A60u;
label_306a60:
    // 0x306a60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a64: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x306a64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x306a68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x306a6c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x306a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x306a70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a74: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x306a74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x306a78: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x306A78u;
    {
        const bool branch_taken_0x306a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a78) {
            ctx->pc = 0x306B64u;
            return;
        }
    }
    ctx->pc = 0x306A80u;
    // 0x306a80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306a84: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x306a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x306a88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x306a8c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x306a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x306a90: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x306A90u;
    {
        const bool branch_taken_0x306a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a90) {
            ctx->pc = 0x306B64u;
            return;
        }
    }
    ctx->pc = 0x306A98u;
}
