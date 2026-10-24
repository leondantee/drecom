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

// Function: _pack_header
// Address: 0x1097d8 - 0x109928
void _pack_header_0x1097d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pack_header_0x1097d8");
#endif

    switch (ctx->pc) {
        case 0x109810u: goto label_109810;
        case 0x10981cu: goto label_10981c;
        case 0x109828u: goto label_109828;
        case 0x109834u: goto label_109834;
        case 0x109840u: goto label_109840;
        case 0x10984cu: goto label_10984c;
        case 0x109858u: goto label_109858;
        case 0x109864u: goto label_109864;
        case 0x109874u: goto label_109874;
        case 0x109880u: goto label_109880;
        case 0x1098b0u: goto label_1098b0;
        case 0x1098b8u: goto label_1098b8;
        case 0x1098d4u: goto label_1098d4;
        case 0x1098f4u: goto label_1098f4;
        default: break;
    }

    ctx->pc = 0x1097d8u;

    // 0x1097d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1097d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1097dc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1097dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1097e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1097e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1097e4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1097e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1097e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1097e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1097ec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1097ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1097f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1097f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1097f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1097f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1097f8: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1097f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1097fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1097fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x109800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109804: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x109804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x109808: 0xc04240a  jal         func_109028
    ctx->pc = 0x109808u;
    SET_GPR_U32(ctx, 31, 0x109810u);
    ctx->pc = 0x10980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109808u;
    // 0x10980c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109808u, 0x109810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109810u;
label_109810:
    // 0x109810: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109814: 0xc04240a  jal         func_109028
    ctx->pc = 0x109814u;
    SET_GPR_U32(ctx, 31, 0x10981Cu);
    ctx->pc = 0x109818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109814u;
    // 0x109818: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109814u, 0x10981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10981Cu;
label_10981c:
    // 0x10981c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10981cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109820: 0xc04241e  jal         func_109078
    ctx->pc = 0x109820u;
    SET_GPR_U32(ctx, 31, 0x109828u);
    ctx->pc = 0x109824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109820u;
    // 0x109824: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109078u, 0x109820u, 0x109828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109828u;
label_109828:
    // 0x109828: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10982c: 0xc04240a  jal         func_109028
    ctx->pc = 0x10982Cu;
    SET_GPR_U32(ctx, 31, 0x109834u);
    ctx->pc = 0x109830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10982Cu;
    // 0x109830: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x10982Cu, 0x109834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109834u;
label_109834:
    // 0x109834: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109838: 0xc04241e  jal         func_109078
    ctx->pc = 0x109838u;
    SET_GPR_U32(ctx, 31, 0x109840u);
    ctx->pc = 0x10983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109838u;
    // 0x10983c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109078u, 0x109838u, 0x109840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109840u;
label_109840:
    // 0x109840: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109844: 0xc04240a  jal         func_109028
    ctx->pc = 0x109844u;
    SET_GPR_U32(ctx, 31, 0x10984Cu);
    ctx->pc = 0x109848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109844u;
    // 0x109848: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109844u, 0x10984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10984Cu;
label_10984c:
    // 0x10984c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10984cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109850: 0xc04241e  jal         func_109078
    ctx->pc = 0x109850u;
    SET_GPR_U32(ctx, 31, 0x109858u);
    ctx->pc = 0x109854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109850u;
    // 0x109854: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109078u, 0x109850u, 0x109858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109858u;
label_109858:
    // 0x109858: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10985c: 0xc04240a  jal         func_109028
    ctx->pc = 0x10985Cu;
    SET_GPR_U32(ctx, 31, 0x109864u);
    ctx->pc = 0x109860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10985Cu;
    // 0x109860: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x10985Cu, 0x109864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109864u;
label_109864:
    // 0x109864: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x109864u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x109868: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10986c: 0xc04240a  jal         func_109028
    ctx->pc = 0x10986Cu;
    SET_GPR_U32(ctx, 31, 0x109874u);
    ctx->pc = 0x109870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10986Cu;
    // 0x109870: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x10986Cu, 0x109874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109874u;
label_109874:
    // 0x109874: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109878: 0xc04240a  jal         func_109028
    ctx->pc = 0x109878u;
    SET_GPR_U32(ctx, 31, 0x109880u);
    ctx->pc = 0x10987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109878u;
    // 0x10987c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109878u, 0x109880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109880u;
label_109880:
    // 0x109880: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x109880u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109884: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x109884u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x109888: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x109888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x10988c: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x10988cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x109890: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x109890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x109894: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x109894u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x109898: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x109898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x10989c: 0xaed00008  sw          $s0, 0x8($s6)
    ctx->pc = 0x10989cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
    // 0x1098a0: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1098A0u;
    {
        const bool branch_taken_0x1098a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1098A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098A0u;
        // 0x1098a4: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098a0) {
            ctx->pc = 0x1098C8u;
            goto label_1098c8;
        }
    }
    ctx->pc = 0x1098A8u;
    // 0x1098a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1098a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098ac: 0x0  nop
    ctx->pc = 0x1098acu;
    // NOP
label_1098b0:
    // 0x1098b0: 0xc04240a  jal         func_109028
    ctx->pc = 0x1098B0u;
    SET_GPR_U32(ctx, 31, 0x1098B8u);
    ctx->pc = 0x1098B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098B0u;
    // 0x1098b4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x1098B0u, 0x1098B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098B8u;
label_1098b8:
    // 0x1098b8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1098b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1098bc: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x1098bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1098c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1098C0u;
    {
        const bool branch_taken_0x1098c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1098C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098C0u;
        // 0x1098c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098c0) {
            ctx->pc = 0x1098B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1098b0;
        }
    }
    ctx->pc = 0x1098C8u;
label_1098c8:
    // 0x1098c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1098c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098cc: 0xc0423dc  jal         func_108F70
    ctx->pc = 0x1098CCu;
    SET_GPR_U32(ctx, 31, 0x1098D4u);
    ctx->pc = 0x1098D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098CCu;
    // 0x1098d0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F70u, 0x1098CCu, 0x1098D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098D4u;
label_1098d4:
    // 0x1098d4: 0x240301bb  addiu       $v1, $zero, 0x1BB
    ctx->pc = 0x1098d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x1098d8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1098D8u;
    {
        const bool branch_taken_0x1098d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1098d8) {
            ctx->pc = 0x1098DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1098D8u;
            // 0x1098dc: 0xaec0000c  sw          $zero, 0xC($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1098FCu;
            goto label_1098fc;
        }
    }
    ctx->pc = 0x1098E0u;
    // 0x1098e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1098e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1098e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1098e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098e8: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x1098e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x1098ec: 0xc04264a  jal         func_109928
    ctx->pc = 0x1098ECu;
    SET_GPR_U32(ctx, 31, 0x1098F4u);
    ctx->pc = 0x1098F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098ECu;
    // 0x1098f0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109928u, 0x1098ECu, 0x1098F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098F4u;
label_1098f4:
    // 0x1098f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1098F4u;
    {
        const bool branch_taken_0x1098f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1098F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098F4u;
        // 0x1098f8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098f4) {
            ctx->pc = 0x109900u;
            goto label_109900;
        }
    }
    ctx->pc = 0x1098FCu;
label_1098fc:
    // 0x1098fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1098fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_109900:
    // 0x109900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109904: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x109904u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x109908: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x109908u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10990c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10990cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109910: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x109910u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109914: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109918: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10991c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10991cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109920: 0x3e00008  jr          $ra
    ctx->pc = 0x109920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109920u;
        // 0x109924: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109928u;
}
