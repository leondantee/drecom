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

// Function: entry_002db324
// Address: 0x2db324 - 0x2db39c
void entry_002db324_0x2db324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db324_0x2db324");
#endif

    switch (ctx->pc) {
        case 0x2db334u: goto label_2db334;
        case 0x2db340u: goto label_2db340;
        case 0x2db350u: goto label_2db350;
        case 0x2db35cu: goto label_2db35c;
        case 0x2db384u: goto label_2db384;
        default: break;
    }

    ctx->pc = 0x2db324u;

    // 0x2db324: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2db324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db328: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2db328u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2db32c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DB32Cu;
    SET_GPR_U32(ctx, 31, 0x2DB334u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DB32Cu, 0x2DB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB334u;
label_2db334:
    // 0x2db334: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2db334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db338: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DB338u;
    SET_GPR_U32(ctx, 31, 0x2DB340u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DB338u, 0x2DB340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB340u;
label_2db340:
    // 0x2db340: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2db340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db344: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2db344u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2db348: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DB348u;
    SET_GPR_U32(ctx, 31, 0x2DB350u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DB348u, 0x2DB350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB350u;
label_2db350:
    // 0x2db350: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2db350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db354: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DB354u;
    SET_GPR_U32(ctx, 31, 0x2DB35Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DB354u, 0x2DB35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB35Cu;
label_2db35c:
    // 0x2db35c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db360: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2db360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2db364: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2DB364u;
    {
        const bool branch_taken_0x2db364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db364) {
            ctx->pc = 0x2DB39Cu;
            return;
        }
    }
    ctx->pc = 0x2DB36Cu;
    // 0x2db36c: 0x920300d8  lbu         $v1, 0xD8($s0)
    ctx->pc = 0x2db36cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2db370: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2db370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2db374: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DB374u;
    {
        const bool branch_taken_0x2db374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db374) {
            ctx->pc = 0x2DB39Cu;
            return;
        }
    }
    ctx->pc = 0x2DB37Cu;
    // 0x2db37c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB37Cu;
    SET_GPR_U32(ctx, 31, 0x2DB384u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB37Cu, 0x2DB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB384u;
label_2db384:
    // 0x2db384: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db388: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2db388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2db38c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB38Cu;
    {
        const bool branch_taken_0x2db38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db38c) {
            ctx->pc = 0x2DB39Cu;
            return;
        }
    }
    ctx->pc = 0x2DB394u;
    // 0x2db394: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2db394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2db398: 0xa20300d8  sb          $v1, 0xD8($s0)
    ctx->pc = 0x2db398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2db39cu;
}
