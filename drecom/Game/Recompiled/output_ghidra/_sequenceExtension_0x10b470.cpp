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

// Function: _sequenceExtension
// Address: 0x10b470 - 0x10b5d4
void _sequenceExtension_0x10b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sequenceExtension_0x10b470");
#endif

    switch (ctx->pc) {
        case 0x10b4a0u: goto label_10b4a0;
        case 0x10b4a8u: goto label_10b4a8;
        case 0x10b4e4u: goto label_10b4e4;
        case 0x10b508u: goto label_10b508;
        case 0x10b55cu: goto label_10b55c;
        default: break;
    }

    ctx->pc = 0x10b470u;

    // 0x10b470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10b470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10b474: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10b474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10b478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b47c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10b47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b480: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10b480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b484: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10b488: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10b488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10b48c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10b48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10b490: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10b490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b494: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10b498: 0xc04169e  jal         func_105A78
    ctx->pc = 0x10B498u;
    SET_GPR_U32(ctx, 31, 0x10B4A0u);
    ctx->pc = 0x10B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B498u;
    // 0x10b49c: 0xac5044b0  sw          $s0, 0x44B0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17584), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A78u, 0x10B498u, 0x10B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4A0u;
label_10b4a0:
    // 0x10b4a0: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10B4A0u;
    SET_GPR_U32(ctx, 31, 0x10B4A8u);
    ctx->pc = 0x10B4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4A0u;
    // 0x10b4a4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10B4A0u, 0x10B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4A8u;
label_10b4a8:
    // 0x10b4a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10b4a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4ac: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10b4acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10b4b0: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x10b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x10b4b4: 0x111442  srl         $v0, $s1, 17
    ctx->pc = 0x10b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 17));
    // 0x10b4b8: 0x30740fff  andi        $s4, $v1, 0xFFF
    ctx->pc = 0x10b4b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x10b4bc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x10b4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x10b4c0: 0x112342  srl         $a0, $s1, 13
    ctx->pc = 0x10b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 13));
    // 0x10b4c4: 0x111bc2  srl         $v1, $s1, 15
    ctx->pc = 0x10b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
    // 0x10b4c8: 0x30930003  andi        $s3, $a0, 0x3
    ctx->pc = 0x10b4c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x10b4cc: 0x30720003  andi        $s2, $v1, 0x3
    ctx->pc = 0x10b4ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x10b4d0: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B4D0u;
    {
        const bool branch_taken_0x10b4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x10B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4D0u;
        // 0x10b4d4: 0xaca23d4c  sw          $v0, 0x3D4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 15692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4d0) {
            ctx->pc = 0x10B4E4u;
            goto label_10b4e4;
        }
    }
    ctx->pc = 0x10B4D8u;
    // 0x10b4d8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10b4dc: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x10B4DCu;
    SET_GPR_U32(ctx, 31, 0x10B4E4u);
    ctx->pc = 0x10B4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4DCu;
    // 0x10b4e0: 0x2484c990  addiu       $a0, $a0, -0x3670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x10B4DCu, 0x10B4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4E4u;
label_10b4e4:
    // 0x10b4e4: 0x112502  srl         $a0, $s1, 20
    ctx->pc = 0x10b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 20));
    // 0x10b4e8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10b4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10b4ec: 0x1114c2  srl         $v0, $s1, 19
    ctx->pc = 0x10b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 19));
    // 0x10b4f0: 0xae043d44  sw          $a0, 0x3D44($s0)
    ctx->pc = 0x10b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15684), GPR_U32(ctx, 4));
    // 0x10b4f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10b4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10b4f8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10b4fc: 0xac623d48  sw          $v0, 0x3D48($v1)
    ctx->pc = 0x10b4fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383D48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D48u, _value); } while (0);
    // 0x10b500: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10B500u;
    SET_GPR_U32(ctx, 31, 0x10B508u);
    ctx->pc = 0x10B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B500u;
    // 0x10b504: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10B500u, 0x10B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B508u;
label_10b508:
    // 0x10b508: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10b508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b50c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x10b50cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x10b510: 0x3222001f  andi        $v0, $s1, 0x1F
    ctx->pc = 0x10b510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x10b514: 0x111942  srl         $v1, $s1, 5
    ctx->pc = 0x10b514u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x10b518: 0x1121c2  srl         $a0, $s1, 7
    ctx->pc = 0x10b518u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
    // 0x10b51c: 0x8e083d44  lw          $t0, 0x3D44($s0)
    ctx->pc = 0x10b51cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15684)));
    // 0x10b520: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x10b520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x10b524: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x10b524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x10b528: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10b528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10b52c: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x10b52cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x10b530: 0xacc23d58  sw          $v0, 0x3D58($a2)
    ctx->pc = 0x10b530u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 15704), GPR_U32(ctx, 2));
    // 0x10b534: 0x118202  srl         $s0, $s1, 8
    ctx->pc = 0x10b534u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x10b538: 0xaca33d54  sw          $v1, 0x3D54($a1)
    ctx->pc = 0x10b538u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 15700), GPR_U32(ctx, 3));
    // 0x10b53c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x10b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x10b540: 0x11020006  beq         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B540u;
    {
        const bool branch_taken_0x10b540 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B540u;
        // 0x10b544: 0xace43d50  sw          $a0, 0x3D50($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 15696), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b540) {
            ctx->pc = 0x10B55Cu;
            goto label_10b55c;
        }
    }
    ctx->pc = 0x10B548u;
    // 0x10b548: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x10b548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x10b54c: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B54Cu;
    {
        const bool branch_taken_0x10b54c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B54Cu;
        // 0x10b550: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b54c) {
            ctx->pc = 0x10B55Cu;
            goto label_10b55c;
        }
    }
    ctx->pc = 0x10B554u;
    // 0x10b554: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x10B554u;
    SET_GPR_U32(ctx, 31, 0x10B55Cu);
    ctx->pc = 0x10B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B554u;
    // 0x10b558: 0x2484c9b8  addiu       $a0, $a0, -0x3648 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x10B554u, 0x10B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B55Cu;
label_10b55c:
    // 0x10b55c: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x10b55cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x10b560: 0x3c0d0038  lui         $t5, 0x38
    ctx->pc = 0x10b560u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)56 << 16));
    // 0x10b564: 0x8d853d20  lw          $a1, 0x3D20($t4)
    ctx->pc = 0x10b564u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x383D20u));
    // 0x10b568: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x10b568u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x10b56c: 0x8da33d24  lw          $v1, 0x3D24($t5)
    ctx->pc = 0x10b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383D24u));
    // 0x10b570: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x10b570u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    // 0x10b574: 0x8d673d38  lw          $a3, 0x3D38($t3)
    ctx->pc = 0x10b574u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x383D38u));
    // 0x10b578: 0x144480  sll         $t0, $s4, 18
    ctx->pc = 0x10b578u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 18));
    // 0x10b57c: 0x8d463d3c  lw          $a2, 0x3D3C($t2)
    ctx->pc = 0x10b57cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 15676)));
    // 0x10b580: 0x104a80  sll         $t1, $s0, 10
    ctx->pc = 0x10b580u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 10));
    // 0x10b584: 0x122300  sll         $a0, $s2, 12
    ctx->pc = 0x10b584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 12));
    // 0x10b588: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x10b588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x10b58c: 0x131300  sll         $v0, $s3, 12
    ctx->pc = 0x10b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x10b590: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x10b590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x10b594: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x10b594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x10b598: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10b598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10b59c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x10b59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10b5a0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x10b5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x10b5a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10b5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b5a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10b5a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b5ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b5acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b5b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b5b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b5b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b5b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b5bc: 0xad843d20  sw          $a0, 0x3D20($t4)
    ctx->pc = 0x10b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 15648), GPR_U32(ctx, 4));
    // 0x10b5c0: 0xada23d24  sw          $v0, 0x3D24($t5)
    ctx->pc = 0x10b5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 15652), GPR_U32(ctx, 2));
    // 0x10b5c4: 0xad673d38  sw          $a3, 0x3D38($t3)
    ctx->pc = 0x10b5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 15672), GPR_U32(ctx, 7));
    // 0x10b5c8: 0xad463d3c  sw          $a2, 0x3D3C($t2)
    ctx->pc = 0x10b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 15676), GPR_U32(ctx, 6));
    // 0x10b5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x10B5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5CCu;
        // 0x10b5d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B5D4u;
}
