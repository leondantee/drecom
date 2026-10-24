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

// Function: caseD_2
// Address: 0x20ee24 - 0x20ee7c
void caseD_2_0x20ee24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x20ee24");
#endif

    switch (ctx->pc) {
        case 0x20ee44u: goto label_20ee44;
        default: break;
    }

    ctx->pc = 0x20ee24u;

    // 0x20ee24: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ee28: 0x84661278  lh          $a2, 0x1278($v1)
    ctx->pc = 0x20ee28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20ee2c: 0x24ca0001  addiu       $t2, $a2, 0x1
    ctx->pc = 0x20ee2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20ee30: 0xa46a1278  sh          $t2, 0x1278($v1)
    ctx->pc = 0x20ee30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 10));
    // 0x20ee34: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20ee34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ee38: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x20ee38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x20ee3c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20EE3Cu;
    SET_GPR_U32(ctx, 31, 0x20EE44u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20EE3Cu, 0x20EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE44u;
label_20ee44:
    // 0x20ee44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20ee44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20ee48: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20ee48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ee4c: 0x85431278  lh          $v1, 0x1278($t2)
    ctx->pc = 0x20ee4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
    // 0x20ee50: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20ee50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20ee54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20ee54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20ee58: 0x28610272  slti        $at, $v1, 0x272
    ctx->pc = 0x20ee58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)626) ? 1 : 0);
    // 0x20ee5c: 0x14200041  bnez        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x20EE5Cu;
    {
        const bool branch_taken_0x20ee5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ee5c) {
            ctx->pc = 0x20EF64u;
            return;
        }
    }
    ctx->pc = 0x20EE64u;
    // 0x20ee64: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20ee64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ee68: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x20ee68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x20ee6c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20ee70: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x20ee70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ee74: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x20EE74u;
    {
        const bool branch_taken_0x20ee74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ee74) {
            ctx->pc = 0x20EF64u;
            return;
        }
    }
    ctx->pc = 0x20EE7Cu;
}
