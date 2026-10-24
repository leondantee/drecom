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

// Function: Eff_status_exit
// Address: 0x18ba30 - 0x18bbc0
void Eff_status_exit_0x18ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_status_exit_0x18ba30");
#endif

    switch (ctx->pc) {
        case 0x18ba64u: goto label_18ba64;
        case 0x18ba78u: goto label_18ba78;
        case 0x18baa4u: goto label_18baa4;
        case 0x18bad0u: goto label_18bad0;
        case 0x18badcu: goto label_18badc;
        case 0x18bb28u: goto label_18bb28;
        case 0x18bb64u: goto label_18bb64;
        default: break;
    }

    ctx->pc = 0x18ba30u;

    // 0x18ba30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18ba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18ba34: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x18ba34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x18ba38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18ba3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ba3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ba40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ba40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ba44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ba44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ba48: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18ba4c: 0x2453a630  addiu       $s3, $v0, -0x59D0
    ctx->pc = 0x18ba4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18ba50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18ba50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18ba54: 0x9022a663  lbu         $v0, -0x599D($at)
    ctx->pc = 0x18ba54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x53A663u));
    // 0x18ba58: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18ba58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ba5c: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18BA5Cu;
    SET_GPR_U32(ctx, 31, 0x18BA64u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18BA5Cu, 0x18BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BA64u;
label_18ba64:
    // 0x18ba64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18ba64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18ba68: 0x9022a662  lbu         $v0, -0x599E($at)
    ctx->pc = 0x18ba68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x53A662u));
    // 0x18ba6c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18ba6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ba70: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18BA70u;
    SET_GPR_U32(ctx, 31, 0x18BA78u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18BA70u, 0x18BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BA78u;
label_18ba78:
    // 0x18ba78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18ba78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18ba7c: 0x9023a660  lbu         $v1, -0x59A0($at)
    ctx->pc = 0x18ba7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x53A660u));
    // 0x18ba80: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18ba80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18ba84: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18ba88: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18BA88u;
    {
        const bool branch_taken_0x18ba88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ba88) {
            ctx->pc = 0x18BAA4u;
            goto label_18baa4;
        }
    }
    ctx->pc = 0x18BA90u;
    // 0x18ba90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18ba90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18ba94: 0x9022a660  lbu         $v0, -0x59A0($at)
    ctx->pc = 0x18ba94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x53A660u));
    // 0x18ba98: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18ba98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ba9c: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18BA9Cu;
    SET_GPR_U32(ctx, 31, 0x18BAA4u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18BA9Cu, 0x18BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BAA4u;
label_18baa4:
    // 0x18baa4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18baa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18baa8: 0x9023a661  lbu         $v1, -0x599F($at)
    ctx->pc = 0x18baa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x53A661u));
    // 0x18baac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18baacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18bab0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18bab4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18BAB4u;
    {
        const bool branch_taken_0x18bab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18bab4) {
            ctx->pc = 0x18BAD0u;
            goto label_18bad0;
        }
    }
    ctx->pc = 0x18BABCu;
    // 0x18babc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18babcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18bac0: 0x9022a661  lbu         $v0, -0x599F($at)
    ctx->pc = 0x18bac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x53A661u));
    // 0x18bac4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18bac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18bac8: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18BAC8u;
    SET_GPR_U32(ctx, 31, 0x18BAD0u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18BAC8u, 0x18BAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BAD0u;
label_18bad0:
    // 0x18bad0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x18bad0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18bad4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18BAD4u;
    {
        const bool branch_taken_0x18bad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bad4) {
            ctx->pc = 0x18BB10u;
            goto label_18bb10;
        }
    }
    ctx->pc = 0x18BADCu;
label_18badc:
    // 0x18badc: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x18badcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x18bae0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x18bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18bae4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18bae8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x18bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18baec: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18baecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18baf0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18baf4: 0x2463e890  addiu       $v1, $v1, -0x1770
    ctx->pc = 0x18baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961296));
    // 0x18baf8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18bafc: 0x90830097  lbu         $v1, 0x97($a0)
    ctx->pc = 0x18bafcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 151)));
    // 0x18bb00: 0x306300df  andi        $v1, $v1, 0xDF
    ctx->pc = 0x18bb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)223);
    // 0x18bb04: 0xa0830097  sb          $v1, 0x97($a0)
    ctx->pc = 0x18bb04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 151), (uint8_t)GPR_U32(ctx, 3));
    // 0x18bb08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18bb08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18bb0c: 0x0  nop
    ctx->pc = 0x18bb0cu;
    // NOP
label_18bb10:
    // 0x18bb10: 0x2e4300a8  sltiu       $v1, $s2, 0xA8
    ctx->pc = 0x18bb10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)168) ? 1 : 0);
    // 0x18bb14: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x18BB14u;
    {
        const bool branch_taken_0x18bb14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bb14) {
            ctx->pc = 0x18BADCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18badc;
        }
    }
    ctx->pc = 0x18BB1Cu;
    // 0x18bb1c: 0x8e710078  lw          $s1, 0x78($s3)
    ctx->pc = 0x18bb1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x18bb20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18BB20u;
    {
        const bool branch_taken_0x18bb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb20) {
            ctx->pc = 0x18BB50u;
            goto label_18bb50;
        }
    }
    ctx->pc = 0x18BB28u;
label_18bb28:
    // 0x18bb28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bb2c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x18bb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x18bb30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BB30u;
    {
        const bool branch_taken_0x18bb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb30) {
            ctx->pc = 0x18BB48u;
            goto label_18bb48;
        }
    }
    ctx->pc = 0x18BB38u;
    // 0x18bb38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bb3c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x18bb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x18bb40: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x18bb40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x18bb44: 0x0  nop
    ctx->pc = 0x18bb44u;
    // NOP
label_18bb48:
    // 0x18bb48: 0x8e3100e8  lw          $s1, 0xE8($s1)
    ctx->pc = 0x18bb48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x18bb4c: 0x0  nop
    ctx->pc = 0x18bb4cu;
    // NOP
label_18bb50:
    // 0x18bb50: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x18BB50u;
    {
        const bool branch_taken_0x18bb50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bb50) {
            ctx->pc = 0x18BB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bb28;
        }
    }
    ctx->pc = 0x18BB58u;
    // 0x18bb58: 0x8e700038  lw          $s0, 0x38($s3)
    ctx->pc = 0x18bb58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x18bb5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18BB5Cu;
    {
        const bool branch_taken_0x18bb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb5c) {
            ctx->pc = 0x18BB98u;
            goto label_18bb98;
        }
    }
    ctx->pc = 0x18BB64u;
label_18bb64:
    // 0x18bb64: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18bb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18bb68: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x18bb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x18bb6c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18BB6Cu;
    {
        const bool branch_taken_0x18bb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb6c) {
            ctx->pc = 0x18BB90u;
            goto label_18bb90;
        }
    }
    ctx->pc = 0x18BB74u;
    // 0x18bb74: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18bb78: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x18bb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x18bb7c: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x18bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x18bb80: 0x8e04020c  lw          $a0, 0x20C($s0)
    ctx->pc = 0x18bb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18bb84: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x18bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x18bb88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18bb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18bb8c: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x18bb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
label_18bb90:
    // 0x18bb90: 0x8e100218  lw          $s0, 0x218($s0)
    ctx->pc = 0x18bb90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x18bb94: 0x0  nop
    ctx->pc = 0x18bb94u;
    // NOP
label_18bb98:
    // 0x18bb98: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x18BB98u;
    {
        const bool branch_taken_0x18bb98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bb98) {
            ctx->pc = 0x18BB64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bb64;
        }
    }
    ctx->pc = 0x18BBA0u;
    // 0x18bba0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x18bba0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bba4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18bba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18bba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bbac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18bbacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bbb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18bbb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bbb4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x18bbb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18bbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x18BBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BBC0u;
}
