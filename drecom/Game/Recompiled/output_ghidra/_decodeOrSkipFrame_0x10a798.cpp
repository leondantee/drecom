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

// Function: _decodeOrSkipFrame
// Address: 0x10a798 - 0x10a8bc
void _decodeOrSkipFrame_0x10a798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decodeOrSkipFrame_0x10a798");
#endif

    switch (ctx->pc) {
        case 0x10a7f0u: goto label_10a7f0;
        case 0x10a808u: goto label_10a808;
        case 0x10a824u: goto label_10a824;
        case 0x10a834u: goto label_10a834;
        case 0x10a840u: goto label_10a840;
        default: break;
    }

    ctx->pc = 0x10a798u;

    // 0x10a798: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10a798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10a79c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a7a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10a7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10a7a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10a7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10a7a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10a7a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7ac: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10a7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10a7b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10a7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7b4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10a7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10a7b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10a7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a7c0: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A7C0u;
    {
        const bool branch_taken_0x10a7c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7C0u;
        // 0x10a7c4: 0x8e300040  lw          $s0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7c0) {
            ctx->pc = 0x10A7D4u;
            goto label_10a7d4;
        }
    }
    ctx->pc = 0x10A7C8u;
    // 0x10a7c8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x10a7c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10a7cc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10A7CCu;
    {
        const bool branch_taken_0x10a7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7CCu;
        // 0x10a7d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7cc) {
            ctx->pc = 0x10A81Cu;
            goto label_10a81c;
        }
    }
    ctx->pc = 0x10A7D4u;
label_10a7d4:
    // 0x10a7d4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10a7d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A7D8u;
    {
        const bool branch_taken_0x10a7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7D8u;
        // 0x10a7dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7d8) {
            ctx->pc = 0x10A7E8u;
            goto label_10a7e8;
        }
    }
    ctx->pc = 0x10A7E0u;
    // 0x10a7e0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x10a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x10a7e4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10a7e8:
    // 0x10a7e8: 0xc041fde  jal         func_107F78
    ctx->pc = 0x10A7E8u;
    SET_GPR_U32(ctx, 31, 0x10A7F0u);
    ctx->pc = 0x10A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7E8u;
    // 0x10a7ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107F78u, 0x10A7E8u, 0x10A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7F0u;
label_10a7f0:
    // 0x10a7f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A7F0u;
    {
        const bool branch_taken_0x10a7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7F0u;
        // 0x10a7f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7f0) {
            ctx->pc = 0x10A810u;
            goto label_10a810;
        }
    }
    ctx->pc = 0x10A7F8u;
    // 0x10a7f8: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x10a7f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x10a7fc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a800: 0xc041f78  jal         func_107DE0
    ctx->pc = 0x10A800u;
    SET_GPR_U32(ctx, 31, 0x10A808u);
    ctx->pc = 0x10A804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A800u;
    // 0x10a804: 0x8e643d04  lw          $a0, 0x3D04($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107DE0u, 0x10A800u, 0x10A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A808u;
label_10a808:
    // 0x10a808: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10A808u;
    {
        const bool branch_taken_0x10a808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A808u;
        // 0x10a80c: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a808) {
            ctx->pc = 0x10A814u;
            goto label_10a814;
        }
    }
    ctx->pc = 0x10A810u;
label_10a810:
    // 0x10a810: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x10a810u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
label_10a814:
    // 0x10a814: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10A814u;
    {
        const bool branch_taken_0x10a814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A814u;
        // 0x10a818: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a814) {
            ctx->pc = 0x10A834u;
            goto label_10a834;
        }
    }
    ctx->pc = 0x10A81Cu;
label_10a81c:
    // 0x10a81c: 0xc041fde  jal         func_107F78
    ctx->pc = 0x10A81Cu;
    SET_GPR_U32(ctx, 31, 0x10A824u);
    ctx->pc = 0x10A820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A81Cu;
    // 0x10a820: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107F78u, 0x10A81Cu, 0x10A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A824u;
label_10a824:
    // 0x10a824: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x10a824u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x10a828: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10a828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a82c: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x10A82Cu;
    SET_GPR_U32(ctx, 31, 0x10A834u);
    ctx->pc = 0x10A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A82Cu;
    // 0x10a830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x10A82Cu, 0x10A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A834u;
label_10a834:
    // 0x10a834: 0x8e643d04  lw          $a0, 0x3D04($s3)
    ctx->pc = 0x10a834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15620)));
    // 0x10a838: 0xc041fb0  jal         func_107EC0
    ctx->pc = 0x10A838u;
    SET_GPR_U32(ctx, 31, 0x10A840u);
    ctx->pc = 0x10A83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A838u;
    // 0x10a83c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107EC0u, 0x10A838u, 0x10A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A840u;
label_10a840:
    // 0x10a840: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10a840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10a844: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10a844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a848: 0x8c433dac  lw          $v1, 0x3DAC($v0)
    ctx->pc = 0x10a848u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DACu));
    // 0x10a84c: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A84Cu;
    {
        const bool branch_taken_0x10a84c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x10A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A84Cu;
        // 0x10a850: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a84c) {
            ctx->pc = 0x10A86Cu;
            goto label_10a86c;
        }
    }
    ctx->pc = 0x10A854u;
    // 0x10a854: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A854u;
    {
        const bool branch_taken_0x10a854 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A854u;
        // 0x10a858: 0x8e643d04  lw          $a0, 0x3D04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a854) {
            ctx->pc = 0x10A870u;
            goto label_10a870;
        }
    }
    ctx->pc = 0x10A85Cu;
    // 0x10a85c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10a860: 0x8c623d1c  lw          $v0, 0x3D1C($v1)
    ctx->pc = 0x10a860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383D1Cu));
    // 0x10a864: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10a864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10a868: 0xac623d1c  sw          $v0, 0x3D1C($v1)
    ctx->pc = 0x10a868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15644), GPR_U32(ctx, 2));
label_10a86c:
    // 0x10a86c: 0x8e643d04  lw          $a0, 0x3D04($s3)
    ctx->pc = 0x10a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15620)));
label_10a870:
    // 0x10a870: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x10a870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x10a874: 0x8c633d1c  lw          $v1, 0x3D1C($v1)
    ctx->pc = 0x10a874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15644)));
    // 0x10a878: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x10a878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10a87c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A87Cu;
    {
        const bool branch_taken_0x10a87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A87Cu;
        // 0x10a880: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a87c) {
            ctx->pc = 0x10A898u;
            goto label_10a898;
        }
    }
    ctx->pc = 0x10A884u;
    // 0x10a884: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a888: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x10a888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10a88c: 0xae633d04  sw          $v1, 0x3D04($s3)
    ctx->pc = 0x10a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 15620), GPR_U32(ctx, 3));
    // 0x10a890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10a894: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x10a894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_10a898:
    // 0x10a898: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x10a898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a89c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10a89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a8a0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10a8a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a8a4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10a8a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a8a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10a8a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a8ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10a8acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a8b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8B4u;
        // 0x10a8b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A8BCu;
}
