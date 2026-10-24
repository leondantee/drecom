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

// Function: Eff_vram_set
// Address: 0x18ad80 - 0x18b0b0
void Eff_vram_set_0x18ad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_vram_set_0x18ad80");
#endif

    switch (ctx->pc) {
        case 0x18ae00u: goto label_18ae00;
        case 0x18ae68u: goto label_18ae68;
        case 0x18ae74u: goto label_18ae74;
        case 0x18aea0u: goto label_18aea0;
        case 0x18aeb0u: goto label_18aeb0;
        case 0x18af78u: goto label_18af78;
        case 0x18af88u: goto label_18af88;
        case 0x18afe8u: goto label_18afe8;
        case 0x18aff8u: goto label_18aff8;
        case 0x18b050u: goto label_18b050;
        case 0x18b05cu: goto label_18b05c;
        default: break;
    }

    ctx->pc = 0x18ad80u;

    // 0x18ad80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18ad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18ad84: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x18ad84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x18ad88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ad8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ad8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ad90: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18ad90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x18ad94: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x18ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x18ad98: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18ad9c: 0x2470a630  addiu       $s0, $v1, -0x59D0
    ctx->pc = 0x18ad9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944304));
    // 0x18ada0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x18ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18ada4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x18ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18ada8: 0x108300a2  beq         $a0, $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x18ADA8u;
    {
        const bool branch_taken_0x18ada8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ada8) {
            ctx->pc = 0x18B034u;
            goto label_18b034;
        }
    }
    ctx->pc = 0x18ADB0u;
    // 0x18adb0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x18adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18adb4: 0x10830083  beq         $a0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x18ADB4u;
    {
        const bool branch_taken_0x18adb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18adb4) {
            ctx->pc = 0x18AFC4u;
            goto label_18afc4;
        }
    }
    ctx->pc = 0x18ADBCu;
    // 0x18adbc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18adc0: 0x10830080  beq         $a0, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x18ADC0u;
    {
        const bool branch_taken_0x18adc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18adc0) {
            ctx->pc = 0x18AFC4u;
            goto label_18afc4;
        }
    }
    ctx->pc = 0x18ADC8u;
    // 0x18adc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18adcc: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x18ADCCu;
    {
        const bool branch_taken_0x18adcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18adcc) {
            ctx->pc = 0x18AF54u;
            goto label_18af54;
        }
    }
    ctx->pc = 0x18ADD4u;
    // 0x18add4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18add4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18add8: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x18ADD8u;
    {
        const bool branch_taken_0x18add8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18add8) {
            ctx->pc = 0x18AE7Cu;
            goto label_18ae7c;
        }
    }
    ctx->pc = 0x18ADE0u;
    // 0x18ade0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18ade4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18ADE4u;
    {
        const bool branch_taken_0x18ade4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ade4) {
            ctx->pc = 0x18ADF4u;
            goto label_18adf4;
        }
    }
    ctx->pc = 0x18ADECu;
    // 0x18adec: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x18ADECu;
    {
        const bool branch_taken_0x18adec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18adec) {
            ctx->pc = 0x18B05Cu;
            goto label_18b05c;
        }
    }
    ctx->pc = 0x18ADF4u;
label_18adf4:
    // 0x18adf4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x18adf4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18adf8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18ADF8u;
    {
        const bool branch_taken_0x18adf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18adf8) {
            ctx->pc = 0x18AE30u;
            goto label_18ae30;
        }
    }
    ctx->pc = 0x18AE00u;
label_18ae00:
    // 0x18ae00: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x18ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x18ae04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18ae08: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18ae0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18ae10: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18ae14: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18ae18: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18ae1c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ae20: 0x90620097  lbu         $v0, 0x97($v1)
    ctx->pc = 0x18ae20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 151)));
    // 0x18ae24: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x18ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x18ae28: 0xa0620097  sb          $v0, 0x97($v1)
    ctx->pc = 0x18ae28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ae2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ae2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18ae30:
    // 0x18ae30: 0x2e2200a8  sltiu       $v0, $s1, 0xA8
    ctx->pc = 0x18ae30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)168) ? 1 : 0);
    // 0x18ae34: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x18AE34u;
    {
        const bool branch_taken_0x18ae34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ae34) {
            ctx->pc = 0x18AE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ae00;
        }
    }
    ctx->pc = 0x18AE3Cu;
    // 0x18ae3c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x18ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x18ae40: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x18ae40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ae44: 0x24020087  addiu       $v0, $zero, 0x87
    ctx->pc = 0x18ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x18ae48: 0xa2020019  sb          $v0, 0x19($s0)
    ctx->pc = 0x18ae48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ae4c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18ae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ae50: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x18ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x18ae54: 0x24062500  addiu       $a2, $zero, 0x2500
    ctx->pc = 0x18ae54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9472));
    // 0x18ae58: 0x24070087  addiu       $a3, $zero, 0x87
    ctx->pc = 0x18ae58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x18ae5c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x18ae5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ae60: 0xc05e858  jal         func_17A160
    ctx->pc = 0x18AE60u;
    SET_GPR_U32(ctx, 31, 0x18AE68u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x18AE60u, 0x18AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE68u;
label_18ae68:
    // 0x18ae68: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x18ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x18ae6c: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18AE6Cu;
    SET_GPR_U32(ctx, 31, 0x18AE74u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18AE6Cu, 0x18AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE74u;
label_18ae74:
    // 0x18ae74: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x18AE74u;
    {
        const bool branch_taken_0x18ae74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ae74) {
            ctx->pc = 0x18B05Cu;
            goto label_18b05c;
        }
    }
    ctx->pc = 0x18AE7Cu;
label_18ae7c:
    // 0x18ae7c: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18ae7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18ae80: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18ae80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ae84: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ae88: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x18ae88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x18ae8c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x18ae8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ae90: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x18ae90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18ae94: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x18ae94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ae98: 0xc05e858  jal         func_17A160
    ctx->pc = 0x18AE98u;
    SET_GPR_U32(ctx, 31, 0x18AEA0u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x18AE98u, 0x18AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AEA0u;
label_18aea0:
    // 0x18aea0: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18aea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18aea4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18aea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18aea8: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18AEA8u;
    SET_GPR_U32(ctx, 31, 0x18AEB0u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18AEA8u, 0x18AEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AEB0u;
label_18aeb0:
    // 0x18aeb0: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x18aeb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18aeb4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18aeb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18aeb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18aebc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18aec0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18aec4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18aec8: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x18aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x18aecc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18aeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18aed0: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x18aed0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x18aed4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x18aed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18aed8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x18aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18aedc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18aee0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x18aee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x18aee4: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x18aee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18aee8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18aee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18aeec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18aef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18aef4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18aef8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18aefc: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x18aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x18af00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18af00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18af04: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x18af04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18af08: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18af08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18af0c: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x18af0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x18af10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18af10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18af14: 0xa203002a  sb          $v1, 0x2A($s0)
    ctx->pc = 0x18af14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x18af18: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x18af18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18af1c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18af1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18af20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18af20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18af24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18af24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18af28: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18af28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18af2c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18af30: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x18af30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x18af34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18af34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18af38: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x18af38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x18af3c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x18af3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18af40: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x18af40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x18af44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18af44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18af48: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x18af48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x18af4c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x18AF4Cu;
    {
        const bool branch_taken_0x18af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18af4c) {
            ctx->pc = 0x18B05Cu;
            goto label_18b05c;
        }
    }
    ctx->pc = 0x18AF54u;
label_18af54:
    // 0x18af54: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18af54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18af58: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18af58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18af5c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18af5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18af60: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x18af60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x18af64: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x18af64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18af68: 0x24062400  addiu       $a2, $zero, 0x2400
    ctx->pc = 0x18af68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
    // 0x18af6c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x18af6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18af70: 0xc05e858  jal         func_17A160
    ctx->pc = 0x18AF70u;
    SET_GPR_U32(ctx, 31, 0x18AF78u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x18AF70u, 0x18AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF78u;
label_18af78:
    // 0x18af78: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18af78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18af7c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18af7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18af80: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18AF80u;
    SET_GPR_U32(ctx, 31, 0x18AF88u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18AF80u, 0x18AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF88u;
label_18af88:
    // 0x18af88: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x18af88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18af8c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18af8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18af90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18af90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18af94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18af94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18af98: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18af98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18af9c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18afa0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x18afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x18afa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18afa8: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x18afa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18afac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18afacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18afb0: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x18afb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x18afb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18afb8: 0xa203002a  sb          $v1, 0x2A($s0)
    ctx->pc = 0x18afb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x18afbc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x18AFBCu;
    {
        const bool branch_taken_0x18afbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18afbc) {
            ctx->pc = 0x18B05Cu;
            goto label_18b05c;
        }
    }
    ctx->pc = 0x18AFC4u;
label_18afc4:
    // 0x18afc4: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18afc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18afc8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18afc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18afcc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18afccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18afd0: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x18afd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x18afd4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x18afd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18afd8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x18afd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18afdc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x18afdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18afe0: 0xc05e858  jal         func_17A160
    ctx->pc = 0x18AFE0u;
    SET_GPR_U32(ctx, 31, 0x18AFE8u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x18AFE0u, 0x18AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFE8u;
label_18afe8:
    // 0x18afe8: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18afe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18afec: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18afecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18aff0: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18AFF0u;
    SET_GPR_U32(ctx, 31, 0x18AFF8u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18AFF0u, 0x18AFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFF8u;
label_18aff8:
    // 0x18aff8: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x18aff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18affc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18affcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18b000: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18b000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18b004: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b008: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18b008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18b00c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18b010: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x18b010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x18b014: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b018: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x18b018u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x18b01c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x18b01cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18b020: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x18b020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18b024: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b028: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x18b028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x18b02c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18B02Cu;
    {
        const bool branch_taken_0x18b02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b02c) {
            ctx->pc = 0x18B05Cu;
            goto label_18b05c;
        }
    }
    ctx->pc = 0x18B034u;
label_18b034:
    // 0x18b034: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18b034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b038: 0x240400bb  addiu       $a0, $zero, 0xBB
    ctx->pc = 0x18b038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x18b03c: 0x24061b00  addiu       $a2, $zero, 0x1B00
    ctx->pc = 0x18b03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    // 0x18b040: 0x2407006e  addiu       $a3, $zero, 0x6E
    ctx->pc = 0x18b040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x18b044: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x18b044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b048: 0xc05e858  jal         func_17A160
    ctx->pc = 0x18B048u;
    SET_GPR_U32(ctx, 31, 0x18B050u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x18B048u, 0x18B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B050u;
label_18b050:
    // 0x18b050: 0x240400bb  addiu       $a0, $zero, 0xBB
    ctx->pc = 0x18b050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x18b054: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18B054u;
    SET_GPR_U32(ctx, 31, 0x18B05Cu);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18B054u, 0x18B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B05Cu;
label_18b05c:
    // 0x18b05c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x18b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18b060: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x18b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18b064: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18B064u;
    {
        const bool branch_taken_0x18b064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b064) {
            ctx->pc = 0x18B090u;
            goto label_18b090;
        }
    }
    ctx->pc = 0x18B06Cu;
    // 0x18b06c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18b070: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B070u;
    {
        const bool branch_taken_0x18b070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b070) {
            ctx->pc = 0x18B080u;
            goto label_18b080;
        }
    }
    ctx->pc = 0x18B078u;
    // 0x18b078: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B078u;
    {
        const bool branch_taken_0x18b078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b078) {
            ctx->pc = 0x18B098u;
            goto label_18b098;
        }
    }
    ctx->pc = 0x18B080u;
label_18b080:
    // 0x18b080: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x18b080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18b084: 0xa2030030  sb          $v1, 0x30($s0)
    ctx->pc = 0x18b084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b088: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18B088u;
    {
        const bool branch_taken_0x18b088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b088) {
            ctx->pc = 0x18B098u;
            goto label_18b098;
        }
    }
    ctx->pc = 0x18B090u;
label_18b090:
    // 0x18b090: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x18b090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18b094: 0xa2030031  sb          $v1, 0x31($s0)
    ctx->pc = 0x18b094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 3));
label_18b098:
    // 0x18b098: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x18b098u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b09c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b09cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b0a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b0a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b0a4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18b0a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18b0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x18B0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B0B0u;
}
