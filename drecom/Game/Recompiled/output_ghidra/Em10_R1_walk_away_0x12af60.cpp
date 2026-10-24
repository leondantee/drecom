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

// Function: Em10_R1_walk_away
// Address: 0x12af60 - 0x12b26c
void Em10_R1_walk_away_0x12af60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_walk_away_0x12af60");
#endif

    switch (ctx->pc) {
        case 0x12b004u: goto label_12b004;
        case 0x12b02cu: goto label_12b02c;
        case 0x12b054u: goto label_12b054;
        case 0x12b07cu: goto label_12b07c;
        case 0x12b0d4u: goto label_12b0d4;
        case 0x12b0ecu: goto label_12b0ec;
        case 0x12b118u: goto label_12b118;
        case 0x12b134u: goto label_12b134;
        case 0x12b14cu: goto label_12b14c;
        case 0x12b158u: goto label_12b158;
        case 0x12b168u: goto label_12b168;
        case 0x12b174u: goto label_12b174;
        case 0x12b1b0u: goto label_12b1b0;
        default: break;
    }

    ctx->pc = 0x12af60u;

    // 0x12af60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12af60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12af64: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x12af64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x12af68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12af68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12af6c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x12af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x12af70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12af70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12af74: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x12af74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x12af78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12af78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12af7c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12af7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12af80: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12af80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12af84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12af84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12af88: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x12AF88u;
    {
        const bool branch_taken_0x12af88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12af88) {
            ctx->pc = 0x12B0A0u;
            goto label_12b0a0;
        }
    }
    ctx->pc = 0x12AF90u;
    // 0x12af90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AF90u;
    {
        const bool branch_taken_0x12af90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12af90) {
            ctx->pc = 0x12AFA0u;
            goto label_12afa0;
        }
    }
    ctx->pc = 0x12AF98u;
    // 0x12af98: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x12AF98u;
    {
        const bool branch_taken_0x12af98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12af98) {
            ctx->pc = 0x12B258u;
            goto label_12b258;
        }
    }
    ctx->pc = 0x12AFA0u;
label_12afa0:
    // 0x12afa0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12afa4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12afa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12afa8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12afa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12afac: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x12afacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x12afb0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12afb4: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x12AFB4u;
    {
        const bool branch_taken_0x12afb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12afb4) {
            ctx->pc = 0x12B05Cu;
            goto label_12b05c;
        }
    }
    ctx->pc = 0x12AFBCu;
    // 0x12afbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12afc0: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12AFC0u;
    {
        const bool branch_taken_0x12afc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12afc0) {
            ctx->pc = 0x12B034u;
            goto label_12b034;
        }
    }
    ctx->pc = 0x12AFC8u;
    // 0x12afc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12afcc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12AFCCu;
    {
        const bool branch_taken_0x12afcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12afcc) {
            ctx->pc = 0x12B00Cu;
            goto label_12b00c;
        }
    }
    ctx->pc = 0x12AFD4u;
    // 0x12afd4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AFD4u;
    {
        const bool branch_taken_0x12afd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12afd4) {
            ctx->pc = 0x12AFE4u;
            goto label_12afe4;
        }
    }
    ctx->pc = 0x12AFDCu;
    // 0x12afdc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12AFDCu;
    {
        const bool branch_taken_0x12afdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12afdc) {
            ctx->pc = 0x12AFE4u;
            goto label_12afe4;
        }
    }
    ctx->pc = 0x12AFE4u;
label_12afe4:
    // 0x12afe4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12afe8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12afec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12afecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12aff0: 0x24063c00  addiu       $a2, $zero, 0x3C00
    ctx->pc = 0x12aff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15360));
    // 0x12aff4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12aff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aff8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12aff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12affc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AFFCu;
    SET_GPR_U32(ctx, 31, 0x12B004u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AFFCu, 0x12B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B004u;
label_12b004:
    // 0x12b004: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x12B004u;
    {
        const bool branch_taken_0x12b004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b004) {
            ctx->pc = 0x12B07Cu;
            goto label_12b07c;
        }
    }
    ctx->pc = 0x12B00Cu;
label_12b00c:
    // 0x12b00c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b010: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b014: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12b014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12b018: 0x24063c01  addiu       $a2, $zero, 0x3C01
    ctx->pc = 0x12b018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15361));
    // 0x12b01c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b020: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12b020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12b024: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12B024u;
    SET_GPR_U32(ctx, 31, 0x12B02Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12B024u, 0x12B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B02Cu;
label_12b02c:
    // 0x12b02c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12B02Cu;
    {
        const bool branch_taken_0x12b02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b02c) {
            ctx->pc = 0x12B07Cu;
            goto label_12b07c;
        }
    }
    ctx->pc = 0x12B034u;
label_12b034:
    // 0x12b034: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b038: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b03c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12b03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12b040: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x12b040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
    // 0x12b044: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b048: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12b048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12b04c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12B04Cu;
    SET_GPR_U32(ctx, 31, 0x12B054u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12B04Cu, 0x12B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B054u;
label_12b054:
    // 0x12b054: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12B054u;
    {
        const bool branch_taken_0x12b054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b054) {
            ctx->pc = 0x12B07Cu;
            goto label_12b07c;
        }
    }
    ctx->pc = 0x12B05Cu;
label_12b05c:
    // 0x12b05c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b060: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b064: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12b064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12b068: 0x24063c45  addiu       $a2, $zero, 0x3C45
    ctx->pc = 0x12b068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15429));
    // 0x12b06c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b070: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12b070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12b074: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12B074u;
    SET_GPR_U32(ctx, 31, 0x12B07Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12B074u, 0x12B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B07Cu;
label_12b07c:
    // 0x12b07c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b080: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12b080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12b084: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12b084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12b088: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12b088u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12b08c: 0xa602008c  sh          $v0, 0x8C($s0)
    ctx->pc = 0x12b08cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 2));
    // 0x12b090: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b094: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12b094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12b098: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b09c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12b09cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12b0a0:
    // 0x12b0a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b0a4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12b0a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12b0a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12b0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b0ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12b0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12b0b0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x12B0B0u;
    {
        const bool branch_taken_0x12b0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b0b0) {
            ctx->pc = 0x12B13Cu;
            goto label_12b13c;
        }
    }
    ctx->pc = 0x12B0B8u;
    // 0x12b0b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b0bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b0c0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12b0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12b0c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12b0c8: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x12b0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12b0cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12B0CCu;
    SET_GPR_U32(ctx, 31, 0x12B0D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12B0CCu, 0x12B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0D4u;
label_12b0d4:
    // 0x12b0d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b0d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b0dc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12b0e0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12b0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b0e4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x12B0E4u;
    SET_GPR_U32(ctx, 31, 0x12B0ECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x12B0E4u, 0x12B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0ECu;
label_12b0ec:
    // 0x12b0ec: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x12b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x12b0f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12b0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12b0f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x12b0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x12b0f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b0fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b100: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b104: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x12b104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x12b108: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x12b108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12b10c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x12b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x12b110: 0xc05c848  jal         func_172120
    ctx->pc = 0x12B110u;
    SET_GPR_U32(ctx, 31, 0x12B118u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x12B110u, 0x12B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B118u;
label_12b118:
    // 0x12b118: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x12b118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x12b11c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b120: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12b120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b124: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x12b124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b128: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x12b128u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12b12c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12B12Cu;
    SET_GPR_U32(ctx, 31, 0x12B134u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12B12Cu, 0x12B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B134u;
label_12b134:
    // 0x12b134: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b138: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12b138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_12b13c:
    // 0x12b13c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b140: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12b144: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12B144u;
    SET_GPR_U32(ctx, 31, 0x12B14Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12B144u, 0x12B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B14Cu;
label_12b14c:
    // 0x12b14c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b150: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12B150u;
    SET_GPR_U32(ctx, 31, 0x12B158u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12B150u, 0x12B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B158u;
label_12b158:
    // 0x12b158: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b15c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b15cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12b160: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12B160u;
    SET_GPR_U32(ctx, 31, 0x12B168u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12B160u, 0x12B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B168u;
label_12b168:
    // 0x12b168: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b16c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12B16Cu;
    SET_GPR_U32(ctx, 31, 0x12B174u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12B16Cu, 0x12B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B174u;
label_12b174:
    // 0x12b174: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b178: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12b178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12b17c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x12B17Cu;
    {
        const bool branch_taken_0x12b17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b17c) {
            ctx->pc = 0x12B258u;
            goto label_12b258;
        }
    }
    ctx->pc = 0x12B184u;
    // 0x12b184: 0x8602008c  lh          $v0, 0x8C($s0)
    ctx->pc = 0x12b184u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x12b188: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B188u;
    {
        const bool branch_taken_0x12b188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b188) {
            ctx->pc = 0x12B19Cu;
            goto label_12b19c;
        }
    }
    ctx->pc = 0x12B190u;
    // 0x12b190: 0x8602008c  lh          $v0, 0x8C($s0)
    ctx->pc = 0x12b190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x12b194: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12b198: 0xa602008c  sh          $v0, 0x8C($s0)
    ctx->pc = 0x12b198u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 2));
label_12b19c:
    // 0x12b19c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x12b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x12b1a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12b1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12b1a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1a8: 0xc05d2f0  jal         func_174BC0
    ctx->pc = 0x12B1A8u;
    SET_GPR_U32(ctx, 31, 0x12B1B0u);
    ctx->pc = 0x174BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174BC0u, 0x12B1A8u, 0x12B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1B0u;
label_12b1b0:
    // 0x12b1b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12B1B0u;
    {
        const bool branch_taken_0x12b1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b1b0) {
            ctx->pc = 0x12B1E8u;
            goto label_12b1e8;
        }
    }
    ctx->pc = 0x12B1B8u;
    // 0x12b1b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b1bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12b1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b1c4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x12b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12b1c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1cc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12b1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b1d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1d4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12b1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b1d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1dc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12b1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b1e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1e4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12b1e8:
    // 0x12b1e8: 0x8603008c  lh          $v1, 0x8C($s0)
    ctx->pc = 0x12b1e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x12b1ec: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x12B1ECu;
    {
        const bool branch_taken_0x12b1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b1ec) {
            ctx->pc = 0x12B21Cu;
            goto label_12b21c;
        }
    }
    ctx->pc = 0x12B1F4u;
    // 0x12b1f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1f8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12b1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b1fc: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x12b1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x12b200: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x12b200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x12b204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12b204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b208: 0x0  nop
    ctx->pc = 0x12b208u;
    // NOP
    // 0x12b20c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12b20cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b210: 0x0  nop
    ctx->pc = 0x12b210u;
    // NOP
    // 0x12b214: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x12B214u;
    {
        const bool branch_taken_0x12b214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b214) {
            ctx->pc = 0x12B258u;
            goto label_12b258;
        }
    }
    ctx->pc = 0x12B21Cu;
label_12b21c:
    // 0x12b21c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b220: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b224: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12b224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b228: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12b228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12b22c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b230: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12b230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b234: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b238: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12b238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b23c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b240: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12b240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b244: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b248: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12b248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12b24c: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12b24cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12b250: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12B250u;
    {
        const bool branch_taken_0x12b250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b250) {
            ctx->pc = 0x12B258u;
            goto label_12b258;
        }
    }
    ctx->pc = 0x12B258u;
label_12b258:
    // 0x12b258: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x12b258u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b25c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b260: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x12b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12b264: 0x3e00008  jr          $ra
    ctx->pc = 0x12B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B26Cu;
}
