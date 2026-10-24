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

// Function: Em10_R1_evt_walk
// Address: 0x12ad70 - 0x12af40
void Em10_R1_evt_walk_0x12ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_evt_walk_0x12ad70");
#endif

    switch (ctx->pc) {
        case 0x12ae08u: goto label_12ae08;
        case 0x12ae30u: goto label_12ae30;
        case 0x12ae58u: goto label_12ae58;
        case 0x12ae80u: goto label_12ae80;
        case 0x12aed4u: goto label_12aed4;
        case 0x12aef0u: goto label_12aef0;
        case 0x12af08u: goto label_12af08;
        case 0x12af14u: goto label_12af14;
        case 0x12af24u: goto label_12af24;
        case 0x12af30u: goto label_12af30;
        default: break;
    }

    ctx->pc = 0x12ad70u;

    // 0x12ad70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ad74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x12ad74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x12ad78: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x12ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x12ad7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ad80: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12ad80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12ad84: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12ad84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12ad88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ad8c: 0x10830040  beq         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x12AD8Cu;
    {
        const bool branch_taken_0x12ad8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12ad8c) {
            ctx->pc = 0x12AE90u;
            goto label_12ae90;
        }
    }
    ctx->pc = 0x12AD94u;
    // 0x12ad94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AD94u;
    {
        const bool branch_taken_0x12ad94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ad94) {
            ctx->pc = 0x12ADA4u;
            goto label_12ada4;
        }
    }
    ctx->pc = 0x12AD9Cu;
    // 0x12ad9c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x12AD9Cu;
    {
        const bool branch_taken_0x12ad9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ad9c) {
            ctx->pc = 0x12AF30u;
            goto label_12af30;
        }
    }
    ctx->pc = 0x12ADA4u;
label_12ada4:
    // 0x12ada4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ada8: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12ada8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12adac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12adacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12adb0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x12adb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x12adb4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12adb8: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x12ADB8u;
    {
        const bool branch_taken_0x12adb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12adb8) {
            ctx->pc = 0x12AE60u;
            goto label_12ae60;
        }
    }
    ctx->pc = 0x12ADC0u;
    // 0x12adc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12adc4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12ADC4u;
    {
        const bool branch_taken_0x12adc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12adc4) {
            ctx->pc = 0x12AE38u;
            goto label_12ae38;
        }
    }
    ctx->pc = 0x12ADCCu;
    // 0x12adcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12adccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12add0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12ADD0u;
    {
        const bool branch_taken_0x12add0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12add0) {
            ctx->pc = 0x12AE10u;
            goto label_12ae10;
        }
    }
    ctx->pc = 0x12ADD8u;
    // 0x12add8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ADD8u;
    {
        const bool branch_taken_0x12add8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12add8) {
            ctx->pc = 0x12ADE8u;
            goto label_12ade8;
        }
    }
    ctx->pc = 0x12ADE0u;
    // 0x12ade0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12ADE0u;
    {
        const bool branch_taken_0x12ade0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ade0) {
            ctx->pc = 0x12ADE8u;
            goto label_12ade8;
        }
    }
    ctx->pc = 0x12ADE8u;
label_12ade8:
    // 0x12ade8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12adec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12adecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12adf0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12adf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12adf4: 0x24063c00  addiu       $a2, $zero, 0x3C00
    ctx->pc = 0x12adf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15360));
    // 0x12adf8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12adf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12adfc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12adfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12ae00: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AE00u;
    SET_GPR_U32(ctx, 31, 0x12AE08u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AE00u, 0x12AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE08u;
label_12ae08:
    // 0x12ae08: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x12AE08u;
    {
        const bool branch_taken_0x12ae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ae08) {
            ctx->pc = 0x12AE80u;
            goto label_12ae80;
        }
    }
    ctx->pc = 0x12AE10u;
label_12ae10:
    // 0x12ae10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae14: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae18: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12ae1c: 0x24063c01  addiu       $a2, $zero, 0x3C01
    ctx->pc = 0x12ae1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15361));
    // 0x12ae20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12ae20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ae24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12ae24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12ae28: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AE28u;
    SET_GPR_U32(ctx, 31, 0x12AE30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AE28u, 0x12AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE30u;
label_12ae30:
    // 0x12ae30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12AE30u;
    {
        const bool branch_taken_0x12ae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ae30) {
            ctx->pc = 0x12AE80u;
            goto label_12ae80;
        }
    }
    ctx->pc = 0x12AE38u;
label_12ae38:
    // 0x12ae38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12ae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae40: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12ae40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12ae44: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x12ae44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
    // 0x12ae48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12ae48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ae4c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12ae4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12ae50: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AE50u;
    SET_GPR_U32(ctx, 31, 0x12AE58u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AE50u, 0x12AE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE58u;
label_12ae58:
    // 0x12ae58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12AE58u;
    {
        const bool branch_taken_0x12ae58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ae58) {
            ctx->pc = 0x12AE80u;
            goto label_12ae80;
        }
    }
    ctx->pc = 0x12AE60u;
label_12ae60:
    // 0x12ae60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae64: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae68: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12ae68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12ae6c: 0x24063c45  addiu       $a2, $zero, 0x3C45
    ctx->pc = 0x12ae6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15429));
    // 0x12ae70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12ae70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ae74: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12ae74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12ae78: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AE78u;
    SET_GPR_U32(ctx, 31, 0x12AE80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AE78u, 0x12AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE80u;
label_12ae80:
    // 0x12ae80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae84: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12ae84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12ae88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ae8c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12ae8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12ae90:
    // 0x12ae90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae94: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12ae94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12ae98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ae98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ae9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12ae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12aea0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12AEA0u;
    {
        const bool branch_taken_0x12aea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aea0) {
            ctx->pc = 0x12AEF8u;
            goto label_12aef8;
        }
    }
    ctx->pc = 0x12AEA8u;
    // 0x12aea8: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x12aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x12aeac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12aeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12aeb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x12aeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x12aeb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12aeb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12aebc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12aec0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x12aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x12aec4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x12aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12aec8: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x12aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x12aecc: 0xc05c848  jal         func_172120
    ctx->pc = 0x12AECCu;
    SET_GPR_U32(ctx, 31, 0x12AED4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x12AECCu, 0x12AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AED4u;
label_12aed4:
    // 0x12aed4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x12aed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x12aed8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12aedc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12aedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12aee0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x12aee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12aee4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x12aee4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12aee8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12AEE8u;
    SET_GPR_U32(ctx, 31, 0x12AEF0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12AEE8u, 0x12AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AEF0u;
label_12aef0:
    // 0x12aef0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12aef4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12aef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_12aef8:
    // 0x12aef8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12aefc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12aefcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12af00: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12AF00u;
    SET_GPR_U32(ctx, 31, 0x12AF08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12AF00u, 0x12AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF08u;
label_12af08:
    // 0x12af08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12af08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12af0c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12AF0Cu;
    SET_GPR_U32(ctx, 31, 0x12AF14u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12AF0Cu, 0x12AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF14u;
label_12af14:
    // 0x12af14: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12af14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12af18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12af18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12af1c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12AF1Cu;
    SET_GPR_U32(ctx, 31, 0x12AF24u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12AF1Cu, 0x12AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF24u;
label_12af24:
    // 0x12af24: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12af24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12af28: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12AF28u;
    SET_GPR_U32(ctx, 31, 0x12AF30u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12AF28u, 0x12AF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF30u;
label_12af30:
    // 0x12af30: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x12af30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12af34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12af34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12af38: 0x3e00008  jr          $ra
    ctx->pc = 0x12AF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AF40u;
}
