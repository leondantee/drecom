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

// Function: _sequenceHeader
// Address: 0x10ae28 - 0x10af7c
void _sequenceHeader_0x10ae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sequenceHeader_0x10ae28");
#endif

    switch (ctx->pc) {
        case 0x10ae50u: goto label_10ae50;
        case 0x10aea0u: goto label_10aea0;
        case 0x10aeacu: goto label_10aeac;
        case 0x10aee0u: goto label_10aee0;
        case 0x10aef0u: goto label_10aef0;
        case 0x10aef8u: goto label_10aef8;
        case 0x10af00u: goto label_10af00;
        case 0x10af18u: goto label_10af18;
        case 0x10af24u: goto label_10af24;
        case 0x10af34u: goto label_10af34;
        case 0x10af3cu: goto label_10af3c;
        case 0x10af44u: goto label_10af44;
        case 0x10af5cu: goto label_10af5c;
        case 0x10af64u: goto label_10af64;
        default: break;
    }

    ctx->pc = 0x10ae28u;

    // 0x10ae28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ae28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ae2c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x10ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10ae30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ae30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ae34: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10ae34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10ae38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ae38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ae3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ae3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ae40: 0x8e223bf4  lw          $v0, 0x3BF4($s1)
    ctx->pc = 0x10ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383BF4u));
    // 0x10ae44: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x10ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x10ae48: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10AE48u;
    SET_GPR_U32(ctx, 31, 0x10AE50u);
    ctx->pc = 0x10AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE48u;
    // 0x10ae4c: 0xac6000d4  sw          $zero, 0xD4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10AE48u, 0x10AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE50u;
label_10ae50:
    // 0x10ae50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ae50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae54: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x10ae54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x10ae58: 0x30a4000f  andi        $a0, $a1, 0xF
    ctx->pc = 0x10ae58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x10ae5c: 0x51902  srl         $v1, $a1, 4
    ctx->pc = 0x10ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x10ae60: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x10ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x10ae64: 0x54502  srl         $t0, $a1, 20
    ctx->pc = 0x10ae64u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 20));
    // 0x10ae68: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10ae68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10ae6c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x10ae6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x10ae70: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10ae74: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x10ae74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x10ae78: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x10ae78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x10ae7c: 0xad243d34  sw          $a0, 0x3D34($t1)
    ctx->pc = 0x10ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 15668), GPR_U32(ctx, 4));
    // 0x10ae80: 0xaca33d30  sw          $v1, 0x3D30($a1)
    ctx->pc = 0x10ae80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x383D30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D30u, _value); } while (0);
    // 0x10ae84: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x10ae84u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x10ae88: 0xacc83d20  sw          $t0, 0x3D20($a2)
    ctx->pc = 0x10ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 15648), GPR_U32(ctx, 8));
    // 0x10ae8c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AE8Cu;
    {
        const bool branch_taken_0x10ae8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE8Cu;
        // 0x10ae90: 0xace23d24  sw          $v0, 0x3D24($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 15652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae8c) {
            ctx->pc = 0x10AEA0u;
            goto label_10aea0;
        }
    }
    ctx->pc = 0x10AE94u;
    // 0x10ae94: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10ae98: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x10AE98u;
    SET_GPR_U32(ctx, 31, 0x10AEA0u);
    ctx->pc = 0x10AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE98u;
    // 0x10ae9c: 0x2484c978  addiu       $a0, $a0, -0x3688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x10AE98u, 0x10AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEA0u;
label_10aea0:
    // 0x10aea0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x10aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x10aea4: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10AEA4u;
    SET_GPR_U32(ctx, 31, 0x10AEACu);
    ctx->pc = 0x10AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEA4u;
    // 0x10aea8: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10AEA4u, 0x10AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEACu;
label_10aeac:
    // 0x10aeac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10aeacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aeb0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10aeb4: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x10aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x10aeb8: 0x53b02  srl         $a3, $a1, 12
    ctx->pc = 0x10aeb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x10aebc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x10aebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x10aec0: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x10aec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x10aec4: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10aec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10aec8: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x10aec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x10aecc: 0xac833d40  sw          $v1, 0x3D40($a0)
    ctx->pc = 0x10aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15680), GPR_U32(ctx, 3));
    // 0x10aed0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aed4: 0xaca23d3c  sw          $v0, 0x3D3C($a1)
    ctx->pc = 0x10aed4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383D3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D3Cu, _value); } while (0);
    // 0x10aed8: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10AED8u;
    SET_GPR_U32(ctx, 31, 0x10AEE0u);
    ctx->pc = 0x10AEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AED8u;
    // 0x10aedc: 0xacc73d38  sw          $a3, 0x3D38($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 15672), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10AED8u, 0x10AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEE0u;
label_10aee0:
    // 0x10aee0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10AEE0u;
    {
        const bool branch_taken_0x10aee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEE0u;
        // 0x10aee4: 0xae0244a0  sw          $v0, 0x44A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 17568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aee0) {
            ctx->pc = 0x10AF08u;
            goto label_10af08;
        }
    }
    ctx->pc = 0x10AEE8u;
    // 0x10aee8: 0xc041b46  jal         func_106D18
    ctx->pc = 0x10AEE8u;
    SET_GPR_U32(ctx, 31, 0x10AEF0u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x10AEE8u, 0x10AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEF0u;
label_10aef0:
    // 0x10aef0: 0xc041b3a  jal         func_106CE8
    ctx->pc = 0x10AEF0u;
    SET_GPR_U32(ctx, 31, 0x10AEF8u);
    ctx->pc = 0x10AEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEF0u;
    // 0x10aef4: 0x3c045000  lui         $a0, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE8u, 0x10AEF0u, 0x10AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEF8u;
label_10aef8:
    // 0x10aef8: 0xc041b46  jal         func_106D18
    ctx->pc = 0x10AEF8u;
    SET_GPR_U32(ctx, 31, 0x10AF00u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x10AEF8u, 0x10AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF00u;
label_10af00:
    // 0x10af00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10AF00u;
    {
        const bool branch_taken_0x10af00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF00u;
        // 0x10af04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af00) {
            ctx->pc = 0x10AF1Cu;
            goto label_10af1c;
        }
    }
    ctx->pc = 0x10AF08u;
label_10af08:
    // 0x10af08: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10af08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10af0c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x10af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x10af10: 0xc042cec  jal         func_10B3B0
    ctx->pc = 0x10AF10u;
    SET_GPR_U32(ctx, 31, 0x10AF18u);
    ctx->pc = 0x10AF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF10u;
    // 0x10af14: 0x24a53c80  addiu       $a1, $a1, 0x3C80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B3B0u, 0x10AF10u, 0x10AF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF18u;
label_10af18:
    // 0x10af18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10af18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10af1c:
    // 0x10af1c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10AF1Cu;
    SET_GPR_U32(ctx, 31, 0x10AF24u);
    ctx->pc = 0x10AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF1Cu;
    // 0x10af20: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10AF1Cu, 0x10AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF24u;
label_10af24:
    // 0x10af24: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10AF24u;
    {
        const bool branch_taken_0x10af24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF24u;
        // 0x10af28: 0xae0244a4  sw          $v0, 0x44A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 17572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af24) {
            ctx->pc = 0x10AF4Cu;
            goto label_10af4c;
        }
    }
    ctx->pc = 0x10AF2Cu;
    // 0x10af2c: 0xc041b46  jal         func_106D18
    ctx->pc = 0x10AF2Cu;
    SET_GPR_U32(ctx, 31, 0x10AF34u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x10AF2Cu, 0x10AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF34u;
label_10af34:
    // 0x10af34: 0xc041b3a  jal         func_106CE8
    ctx->pc = 0x10AF34u;
    SET_GPR_U32(ctx, 31, 0x10AF3Cu);
    ctx->pc = 0x10AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF34u;
    // 0x10af38: 0x3c045800  lui         $a0, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE8u, 0x10AF34u, 0x10AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF3Cu;
label_10af3c:
    // 0x10af3c: 0xc041b46  jal         func_106D18
    ctx->pc = 0x10AF3Cu;
    SET_GPR_U32(ctx, 31, 0x10AF44u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x10AF3Cu, 0x10AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF44u;
label_10af44:
    // 0x10af44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10AF44u;
    {
        const bool branch_taken_0x10af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10af44) {
            ctx->pc = 0x10AF5Cu;
            goto label_10af5c;
        }
    }
    ctx->pc = 0x10AF4Cu;
label_10af4c:
    // 0x10af4c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10af50: 0x3c045800  lui         $a0, 0x5800
    ctx->pc = 0x10af50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22528 << 16));
    // 0x10af54: 0xc042cec  jal         func_10B3B0
    ctx->pc = 0x10AF54u;
    SET_GPR_U32(ctx, 31, 0x10AF5Cu);
    ctx->pc = 0x10AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF54u;
    // 0x10af58: 0x24a53cc0  addiu       $a1, $a1, 0x3CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B3B0u, 0x10AF54u, 0x10AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF5Cu;
label_10af5c:
    // 0x10af5c: 0xc041dac  jal         func_1076B0
    ctx->pc = 0x10AF5Cu;
    SET_GPR_U32(ctx, 31, 0x10AF64u);
    ctx->pc = 0x1076B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076B0u, 0x10AF5Cu, 0x10AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF64u;
label_10af64:
    // 0x10af64: 0x8e243bf4  lw          $a0, 0x3BF4($s1)
    ctx->pc = 0x10af64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15348)));
    // 0x10af68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10af68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10af6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10af6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10af70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10af70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10af74: 0x8042be0  j           func_10AF80
    ctx->pc = 0x10AF74u;
    ctx->pc = 0x10AF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF74u;
    // 0x10af78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AF80u;
    _initSeq_0x10af80(rdram, ctx, runtime); return;
    ctx->pc = 0x10AF7Cu;
}
