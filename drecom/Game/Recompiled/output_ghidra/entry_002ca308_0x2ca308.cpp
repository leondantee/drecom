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

// Function: entry_002ca308
// Address: 0x2ca308 - 0x2ca3a0
void entry_002ca308_0x2ca308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ca308_0x2ca308");
#endif

    switch (ctx->pc) {
        case 0x2ca310u: goto label_2ca310;
        case 0x2ca35cu: goto label_2ca35c;
        default: break;
    }

    ctx->pc = 0x2ca308u;

    // 0x2ca308: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA308u;
    SET_GPR_U32(ctx, 31, 0x2CA310u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA308u, 0x2CA310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA310u;
label_2ca310:
    // 0x2ca310: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca314: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2ca314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ca318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca31c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CA31Cu;
    {
        const bool branch_taken_0x2ca31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca31c) {
            ctx->pc = 0x2CA3A0u;
            return;
        }
    }
    ctx->pc = 0x2CA324u;
    // 0x2ca324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca328: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca32c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ca32cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca330: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ca330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ca334: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca338: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2ca338u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca33c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca340: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2ca340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca344: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca348: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2ca348u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca34c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca350: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ca350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ca354: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA354u;
    SET_GPR_U32(ctx, 31, 0x2CA35Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA354u, 0x2CA35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA35Cu;
label_2ca35c:
    // 0x2ca35c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca360: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2ca360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2ca364: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ca364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca368: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CA368u;
    {
        const bool branch_taken_0x2ca368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca368) {
            ctx->pc = 0x2CA3A0u;
            return;
        }
    }
    ctx->pc = 0x2CA370u;
    // 0x2ca370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca374: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca378: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ca378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca37c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ca37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ca380: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca384: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2ca384u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca388: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca38c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2ca38cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca390: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca394: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2ca394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca398: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca39c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ca39cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2ca3a0u;
}
