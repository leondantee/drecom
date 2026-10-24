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

// Function: caseD_7
// Address: 0x14ae40 - 0x14aef4
void caseD_7_0x14ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x14ae40");
#endif

    switch (ctx->pc) {
        case 0x14ae50u: goto label_14ae50;
        case 0x14ae5cu: goto label_14ae5c;
        case 0x14ae70u: goto label_14ae70;
        case 0x14ae7cu: goto label_14ae7c;
        case 0x14ae8cu: goto label_14ae8c;
        case 0x14aea4u: goto label_14aea4;
        case 0x14aeccu: goto label_14aecc;
        default: break;
    }

    ctx->pc = 0x14ae40u;

    // 0x14ae40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ae44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ae44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ae48: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14AE48u;
    SET_GPR_U32(ctx, 31, 0x14AE50u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14AE48u, 0x14AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE50u;
label_14ae50:
    // 0x14ae50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ae54: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14AE54u;
    SET_GPR_U32(ctx, 31, 0x14AE5Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14AE54u, 0x14AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE5Cu;
label_14ae5c:
    // 0x14ae5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14ae5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14ae60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ae64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ae64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ae68: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14AE68u;
    SET_GPR_U32(ctx, 31, 0x14AE70u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14AE68u, 0x14AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE70u;
label_14ae70:
    // 0x14ae70: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14ae70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ae74: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14AE74u;
    SET_GPR_U32(ctx, 31, 0x14AE7Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14AE74u, 0x14AE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE7Cu;
label_14ae7c:
    // 0x14ae7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ae80: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14ae84: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x14AE84u;
    SET_GPR_U32(ctx, 31, 0x14AE8Cu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x14AE84u, 0x14AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE8Cu;
label_14ae8c:
    // 0x14ae8c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14AE8Cu;
    {
        const bool branch_taken_0x14ae8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ae8c) {
            ctx->pc = 0x14AF40u;
            return;
        }
    }
    ctx->pc = 0x14AE94u;
    // 0x14ae94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ae98: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14ae9c: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x14AE9Cu;
    SET_GPR_U32(ctx, 31, 0x14AEA4u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x14AE9Cu, 0x14AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEA4u;
label_14aea4:
    // 0x14aea4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x14AEA4u;
    {
        const bool branch_taken_0x14aea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aea4) {
            ctx->pc = 0x14AF40u;
            return;
        }
    }
    ctx->pc = 0x14AEACu;
    // 0x14aeac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aeb0: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x14aeb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
    // 0x14aeb4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14aeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14aeb8: 0x28610030  slti        $at, $v1, 0x30
    ctx->pc = 0x14aeb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x14aebc: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14AEBCu;
    {
        const bool branch_taken_0x14aebc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aebc) {
            ctx->pc = 0x14AEF4u;
            return;
        }
    }
    ctx->pc = 0x14AEC4u;
    // 0x14aec4: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x14AEC4u;
    SET_GPR_U32(ctx, 31, 0x14AECCu);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14AEC4u, 0x14AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AECCu;
label_14aecc:
    // 0x14aecc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14AECCu;
    {
        const bool branch_taken_0x14aecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aecc) {
            ctx->pc = 0x14AEF4u;
            return;
        }
    }
    ctx->pc = 0x14AED4u;
    // 0x14aed4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14aed8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aedc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14aedcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14aee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14aee4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aee8: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14aee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x14aeec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14AEECu;
    {
        const bool branch_taken_0x14aeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aeec) {
            ctx->pc = 0x14AF40u;
            return;
        }
    }
    ctx->pc = 0x14AEF4u;
}
