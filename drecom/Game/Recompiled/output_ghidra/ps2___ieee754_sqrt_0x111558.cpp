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

// Function: __ieee754_sqrt
// Address: 0x111558 - 0x11185c
void ps2___ieee754_sqrt_0x111558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_sqrt_0x111558");
#endif

    switch (ctx->pc) {
        case 0x1115a4u: goto label_1115a4;
        case 0x1115b0u: goto label_1115b0;
        case 0x1115e8u: goto label_1115e8;
        case 0x1115f4u: goto label_1115f4;
        case 0x111610u: goto label_111610;
        case 0x111640u: goto label_111640;
        case 0x1116e0u: goto label_1116e0;
        case 0x111718u: goto label_111718;
        case 0x1117acu: goto label_1117ac;
        case 0x1117d8u: goto label_1117d8;
        default: break;
    }

    ctx->pc = 0x111558u;

    // 0x111558: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x111558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11155c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x111560: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x111560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x111564: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x111564u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x111568: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x111568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11156c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11156cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111570: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x111570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x111574: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x111574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x111578: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x111578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11157c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11157cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111580: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x111580u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x111584: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x111584u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x111588: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x111588u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x11158c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x11158cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x111590: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x111590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x111594: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x111594u;
    {
        const bool branch_taken_0x111594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x111598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111594u;
        // 0x111598: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111594) {
            ctx->pc = 0x1115B8u;
            goto label_1115b8;
        }
    }
    ctx->pc = 0x11159Cu;
    // 0x11159c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11159Cu;
    SET_GPR_U32(ctx, 31, 0x1115A4u);
    ctx->pc = 0x1115A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11159Cu;
    // 0x1115a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11159Cu, 0x1115A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115A4u;
label_1115a4:
    // 0x1115a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1115a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115a8: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1115A8u;
    SET_GPR_U32(ctx, 31, 0x1115B0u);
    ctx->pc = 0x1115ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115A8u;
    // 0x1115ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1115A8u, 0x1115B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115B0u;
label_1115b0:
    // 0x1115b0: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1115B0u;
    {
        const bool branch_taken_0x1115b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115B0u;
        // 0x1115b4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115b0) {
            ctx->pc = 0x11183Cu;
            goto label_11183c;
        }
    }
    ctx->pc = 0x1115B8u;
label_1115b8:
    // 0x1115b8: 0x1cc00010  bgtz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1115B8u;
    {
        const bool branch_taken_0x1115b8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1115BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115B8u;
        // 0x1115bc: 0x62d03  sra         $a1, $a2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115b8) {
            ctx->pc = 0x1115FCu;
            goto label_1115fc;
        }
    }
    ctx->pc = 0x1115C0u;
    // 0x1115c0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1115c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1115c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1115c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1115c8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1115c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1115cc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1115ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1115d0: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1115D0u;
    {
        const bool branch_taken_0x1115d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115D0u;
        // 0x1115d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115d0) {
            ctx->pc = 0x111838u;
            goto label_111838;
        }
    }
    ctx->pc = 0x1115D8u;
    // 0x1115d8: 0x4c10008  bgez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1115D8u;
    {
        const bool branch_taken_0x1115d8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1115DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115D8u;
        // 0x1115dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115d8) {
            ctx->pc = 0x1115FCu;
            goto label_1115fc;
        }
    }
    ctx->pc = 0x1115E0u;
    // 0x1115e0: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1115E0u;
    SET_GPR_U32(ctx, 31, 0x1115E8u);
    ctx->pc = 0x1115E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115E0u;
    // 0x1115e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1115E0u, 0x1115E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115E8u;
label_1115e8:
    // 0x1115e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1115e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115ec: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1115ECu;
    SET_GPR_U32(ctx, 31, 0x1115F4u);
    ctx->pc = 0x1115F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115ECu;
    // 0x1115f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1115ECu, 0x1115F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115F4u;
label_1115f4:
    // 0x1115f4: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1115F4u;
    {
        const bool branch_taken_0x1115f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115F4u;
        // 0x1115f8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115f4) {
            ctx->pc = 0x11183Cu;
            goto label_11183c;
        }
    }
    ctx->pc = 0x1115FCu;
label_1115fc:
    // 0x1115fc: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1115FCu;
    {
        const bool branch_taken_0x1115fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x111600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115FCu;
        // 0x111600: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115fc) {
            ctx->pc = 0x111680u;
            goto label_111680;
        }
    }
    ctx->pc = 0x111604u;
    // 0x111604: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x111604u;
    {
        const bool branch_taken_0x111604 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x111608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111604u;
        // 0x111608: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111604) {
            ctx->pc = 0x111630u;
            goto label_111630;
        }
    }
    ctx->pc = 0x11160Cu;
    // 0x11160c: 0x0  nop
    ctx->pc = 0x11160cu;
    // NOP
label_111610:
    // 0x111610: 0x712c2  srl         $v0, $a3, 11
    ctx->pc = 0x111610u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x111614: 0x24a5ffeb  addiu       $a1, $a1, -0x15
    ctx->pc = 0x111614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967275));
    // 0x111618: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x111618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x11161c: 0x73d40  sll         $a3, $a3, 21
    ctx->pc = 0x11161cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
    // 0x111620: 0x0  nop
    ctx->pc = 0x111620u;
    // NOP
    // 0x111624: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x111624u;
    {
        const bool branch_taken_0x111624 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x111624) {
            ctx->pc = 0x111610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111610;
        }
    }
    ctx->pc = 0x11162Cu;
    // 0x11162c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_111630:
    // 0x111630: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x111630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x111634: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x111634u;
    {
        const bool branch_taken_0x111634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111634u;
        // 0x111638: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111634) {
            ctx->pc = 0x111664u;
            goto label_111664;
        }
    }
    ctx->pc = 0x11163Cu;
    // 0x11163c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x11163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_111640:
    // 0x111640: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x111640u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x111644: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x111644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x111648: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x111648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11164c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x111650: 0x0  nop
    ctx->pc = 0x111650u;
    // NOP
    // 0x111654: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x111654u;
    {
        const bool branch_taken_0x111654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111654) {
            ctx->pc = 0x111640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111640;
        }
    }
    ctx->pc = 0x11165Cu;
    // 0x11165c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11165Cu;
    {
        const bool branch_taken_0x11165c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11165Cu;
        // 0x111660: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11165c) {
            ctx->pc = 0x11166Cu;
            goto label_11166c;
        }
    }
    ctx->pc = 0x111664u;
label_111664:
    // 0x111664: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x111664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x111668: 0x41023  negu        $v0, $a0
    ctx->pc = 0x111668u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_11166c:
    // 0x11166c: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x11166cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x111670: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x111670u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x111674: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x111674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x111678: 0x873804  sllv        $a3, $a3, $a0
    ctx->pc = 0x111678u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x11167c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x11167cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_111680:
    // 0x111680: 0x24a5fc01  addiu       $a1, $a1, -0x3FF
    ctx->pc = 0x111680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966273));
    // 0x111684: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x111684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x111688: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x111688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x11168c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11168cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x111690: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x111690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x111694: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111694u;
    {
        const bool branch_taken_0x111694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111694u;
        // 0x111698: 0x443025  or          $a2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111694) {
            ctx->pc = 0x1116B0u;
            goto label_1116b0;
        }
    }
    ctx->pc = 0x11169Cu;
    // 0x11169c: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x11169cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x1116a0: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1116a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1116a4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1116a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1116a8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1116a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1116ac: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1116acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1116b0:
    // 0x1116b0: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x1116b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x1116b4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x1116b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1116b8: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1116b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1116bc: 0x5ad00  sll         $s5, $a1, 20
    ctx->pc = 0x1116bcu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 5), 20));
    // 0x1116c0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1116c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1116c4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1116c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1116c8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1116c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1116cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1116ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1116d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1116d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1116d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116dc: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x1116dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
label_1116e0:
    // 0x1116e0: 0x1492021  addu        $a0, $t2, $t1
    ctx->pc = 0x1116e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1116e4: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x1116e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1116e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1116E8u;
    {
        const bool branch_taken_0x1116e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1116ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116E8u;
        // 0x1116ec: 0xf31024  and         $v0, $a3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116e8) {
            ctx->pc = 0x1116FCu;
            goto label_1116fc;
        }
    }
    ctx->pc = 0x1116F0u;
    // 0x1116f0: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x1116f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1116f4: 0x895021  addu        $t2, $a0, $t1
    ctx->pc = 0x1116f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1116f8: 0x2499021  addu        $s2, $s2, $t1
    ctx->pc = 0x1116f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_1116fc:
    // 0x1116fc: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x1116fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x111700: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x111700u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x111704: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x111704u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x111708: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x111708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11170c: 0x1520fff4  bnez        $t1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11170Cu;
    {
        const bool branch_taken_0x11170c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x111710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11170Cu;
        // 0x111710: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11170c) {
            ctx->pc = 0x1116E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1116e0;
        }
    }
    ctx->pc = 0x111714u;
    // 0x111714: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x111714u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_111718:
    // 0x111718: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x111718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11171c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x11171cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x111720: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111720u;
    {
        const bool branch_taken_0x111720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111720u;
        // 0x111724: 0x1692821  addu        $a1, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111720) {
            ctx->pc = 0x111744u;
            goto label_111744;
        }
    }
    ctx->pc = 0x111728u;
    // 0x111728: 0x14860012  bne         $a0, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x111728u;
    {
        const bool branch_taken_0x111728 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x11172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111728u;
        // 0x11172c: 0xf31024  and         $v0, $a3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111728) {
            ctx->pc = 0x111774u;
            goto label_111774;
        }
    }
    ctx->pc = 0x111730u;
    // 0x111730: 0xe5402b  sltu        $t0, $a3, $a1
    ctx->pc = 0x111730u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x111734: 0x55000010  bnel        $t0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x111734u;
    {
        const bool branch_taken_0x111734 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x111734) {
            ctx->pc = 0x111738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111734u;
            // 0x111738: 0x94842  srl         $t1, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111778u;
            goto label_111778;
        }
    }
    ctx->pc = 0x11173Cu;
    // 0x11173c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11173Cu;
    {
        const bool branch_taken_0x11173c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11173Cu;
        // 0x111740: 0xa95821  addu        $t3, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11173c) {
            ctx->pc = 0x11174Cu;
            goto label_11174c;
        }
    }
    ctx->pc = 0x111744u;
label_111744:
    // 0x111744: 0xe5402b  sltu        $t0, $a3, $a1
    ctx->pc = 0x111744u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x111748: 0xa95821  addu        $t3, $a1, $t1
    ctx->pc = 0x111748u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_11174c:
    // 0x11174c: 0xb31024  and         $v0, $a1, $s3
    ctx->pc = 0x11174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 19));
    // 0x111750: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x111750u;
    {
        const bool branch_taken_0x111750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x111754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111750u;
        // 0x111754: 0xc43023  subu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111750) {
            ctx->pc = 0x111764u;
            goto label_111764;
        }
    }
    ctx->pc = 0x111758u;
    // 0x111758: 0x1731824  and         $v1, $t3, $s3
    ctx->pc = 0x111758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 19));
    // 0x11175c: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x11175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x111760: 0x43500a  movz        $t2, $v0, $v1
    ctx->pc = 0x111760u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
label_111764:
    // 0x111764: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x111764u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x111768: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x111768u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x11176c: 0x2298821  addu        $s1, $s1, $t1
    ctx->pc = 0x11176cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x111770: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x111770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
label_111774:
    // 0x111774: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x111774u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_111778:
    // 0x111778: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x111778u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x11177c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x11177cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x111780: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x111780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x111784: 0x1520ffe4  bnez        $t1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x111784u;
    {
        const bool branch_taken_0x111784 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x111788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111784u;
        // 0x111788: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111784) {
            ctx->pc = 0x111718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111718;
        }
    }
    ctx->pc = 0x11178Cu;
    // 0x11178c: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x11178cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x111790: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x111790u;
    {
        const bool branch_taken_0x111790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111790u;
        // 0x111794: 0x113842  srl         $a3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111790) {
            ctx->pc = 0x111804u;
            goto label_111804;
        }
    }
    ctx->pc = 0x111798u;
    // 0x111798: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x111798u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x11179c: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x11179cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x1117a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1117a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1117a4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1117A4u;
    SET_GPR_U32(ctx, 31, 0x1117ACu);
    ctx->pc = 0x1117A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1117A4u;
    // 0x1117a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1117A4u, 0x1117ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1117ACu;
label_1117ac:
    // 0x1117ac: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1117ACu;
    {
        const bool branch_taken_0x1117ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1117B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117ACu;
        // 0x1117b0: 0x113842  srl         $a3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117ac) {
            ctx->pc = 0x111804u;
            goto label_111804;
        }
    }
    ctx->pc = 0x1117B4u;
    // 0x1117b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1117b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1117b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1117b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1117bc: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1117BCu;
    {
        const bool branch_taken_0x1117bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1117C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117BCu;
        // 0x1117c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117bc) {
            ctx->pc = 0x1117D0u;
            goto label_1117d0;
        }
    }
    ctx->pc = 0x1117C4u;
    // 0x1117c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1117c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1117c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1117C8u;
    {
        const bool branch_taken_0x1117c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117C8u;
        // 0x1117cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117c8) {
            ctx->pc = 0x111800u;
            goto label_111800;
        }
    }
    ctx->pc = 0x1117D0u;
label_1117d0:
    // 0x1117d0: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1117D0u;
    SET_GPR_U32(ctx, 31, 0x1117D8u);
    ctx->pc = 0x1117D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1117D0u;
    // 0x1117d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1117D0u, 0x1117D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1117D8u;
label_1117d8:
    // 0x1117d8: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1117D8u;
    {
        const bool branch_taken_0x1117d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1117DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117D8u;
        // 0x1117dc: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117d8) {
            ctx->pc = 0x1117F8u;
            goto label_1117f8;
        }
    }
    ctx->pc = 0x1117E0u;
    // 0x1117e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1117e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1117e4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1117e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1117e8: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x1117e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x1117ec: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x1117ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x1117f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1117F0u;
    {
        const bool branch_taken_0x1117f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117F0u;
        // 0x1117f4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117f0) {
            ctx->pc = 0x111800u;
            goto label_111800;
        }
    }
    ctx->pc = 0x1117F8u;
label_1117f8:
    // 0x1117f8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1117f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1117fc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1117fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_111800:
    // 0x111800: 0x113842  srl         $a3, $s1, 1
    ctx->pc = 0x111800u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_111804:
    // 0x111804: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x111804u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x111808: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x111808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x11180c: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x11180cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x111810: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x111810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111814: 0xf32025  or          $a0, $a3, $s3
    ctx->pc = 0x111814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x111818: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x111818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x11181c: 0x85380b  movn        $a3, $a0, $a1
    ctx->pc = 0x11181cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x111820: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x111820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x111824: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x111824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x111828: 0x6a03c  dsll32      $s4, $a2, 0
    ctx->pc = 0x111828u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11182c: 0x2828025  or          $s0, $s4, $v0
    ctx->pc = 0x11182cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x111830: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x111830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111834: 0x0  nop
    ctx->pc = 0x111834u;
    // NOP
label_111838:
    // 0x111838: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x111838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_11183c:
    // 0x11183c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11183cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x111840: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x111840u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111844: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x111844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111848: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x111848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11184c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11184cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111850: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x111850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111854: 0x3e00008  jr          $ra
    ctx->pc = 0x111854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111854u;
        // 0x111858: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11185Cu;
}
