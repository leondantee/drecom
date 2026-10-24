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

// Function: entry_00226624
// Address: 0x226624 - 0x2266e0
void entry_00226624_0x226624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226624_0x226624");
#endif

    switch (ctx->pc) {
        case 0x22667cu: goto label_22667c;
        case 0x2266a0u: goto label_2266a0;
        default: break;
    }

    ctx->pc = 0x226624u;

    // 0x226624: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226628: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22662c: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x22662cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x226630: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x226630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x226634: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x226634u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x226638: 0x2861002e  slti        $at, $v1, 0x2E
    ctx->pc = 0x226638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x22663c: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x22663Cu;
    {
        const bool branch_taken_0x22663c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22663c) {
            ctx->pc = 0x2266F0u;
            return;
        }
    }
    ctx->pc = 0x226644u;
    // 0x226644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226648: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22664c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22664cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x226650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226654: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226658: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x226658u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22665c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226660: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x226660u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226664: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226668: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x226668u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22666c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226670: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x226670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x226674: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226674u;
    SET_GPR_U32(ctx, 31, 0x22667Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226674u, 0x22667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22667Cu;
label_22667c:
    // 0x22667c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22667cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226680: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x226680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x226684: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x226684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x226688: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x226688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22668c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22668cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x226690: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226694: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x226694u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x226698: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226698u;
    SET_GPR_U32(ctx, 31, 0x2266A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226698u, 0x2266A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266A0u;
label_2266a0:
    // 0x2266a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2266a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2266a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2266a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2266a8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2266A8u;
    {
        const bool branch_taken_0x2266a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2266a8) {
            ctx->pc = 0x2266E0u;
            return;
        }
    }
    ctx->pc = 0x2266B0u;
    // 0x2266b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2266b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2266b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2266b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2266b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2266b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2266bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2266bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2266c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2266c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2266c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2266c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2266c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2266c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2266cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2266ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2266d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2266d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2266d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2266d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2266d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2266d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2266dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2266dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2266e0u;
}
