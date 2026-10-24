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

// Function: _getpic
// Address: 0x10a628 - 0x10a798
void _getpic_0x10a628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getpic_0x10a628");
#endif

    switch (ctx->pc) {
        case 0x10a674u: goto label_10a674;
        case 0x10a688u: goto label_10a688;
        case 0x10a698u: goto label_10a698;
        case 0x10a6a0u: goto label_10a6a0;
        case 0x10a6e4u: goto label_10a6e4;
        case 0x10a70cu: goto label_10a70c;
        case 0x10a730u: goto label_10a730;
        case 0x10a754u: goto label_10a754;
        default: break;
    }

    ctx->pc = 0x10a628u;

    // 0x10a628: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10a628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10a62c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10a62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10a630: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10a630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10a634: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x10a634u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a638: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10a638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10a63c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10a63cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a640: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10a644: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10a644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a648: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10a648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10a64c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10a650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a654: 0x8e500040  lw          $s0, 0x40($s2)
    ctx->pc = 0x10a654u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x10a658: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x10a658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x10a65c: 0x30a2003f  andi        $v0, $a1, 0x3F
    ctx->pc = 0x10a65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x10a660: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A660u;
    {
        const bool branch_taken_0x10a660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A660u;
        // 0x10a664: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a660) {
            ctx->pc = 0x10A67Cu;
            goto label_10a67c;
        }
    }
    ctx->pc = 0x10A668u;
    // 0x10a668: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10a668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10a66c: 0xc042b2a  jal         func_10ACA8
    ctx->pc = 0x10A66Cu;
    SET_GPR_U32(ctx, 31, 0x10A674u);
    ctx->pc = 0x10A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A66Cu;
    // 0x10a670: 0x2484c8e8  addiu       $a0, $a0, -0x3718 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACA8u, 0x10A66Cu, 0x10A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A674u;
label_10a674:
    // 0x10a674: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x10A674u;
    {
        const bool branch_taken_0x10a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A674u;
        // 0x10a678: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a674) {
            ctx->pc = 0x10A774u;
            goto label_10a774;
        }
    }
    ctx->pc = 0x10A67Cu;
label_10a67c:
    // 0x10a67c: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x10a67cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x10a680: 0xaea04480  sw          $zero, 0x4480($s5)
    ctx->pc = 0x10a680u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x384480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x384480u, _value); } while (0);
    // 0x10a684: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a688:
    // 0x10a688: 0x1262000c  beq         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10A688u;
    {
        const bool branch_taken_0x10a688 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A688u;
        // 0x10a68c: 0x2e820005  sltiu       $v0, $s4, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a688) {
            ctx->pc = 0x10A6BCu;
            goto label_10a6bc;
        }
    }
    ctx->pc = 0x10A690u;
    // 0x10a690: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10a690u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10a694: 0x0  nop
    ctx->pc = 0x10a694u;
    // NOP
label_10a698:
    // 0x10a698: 0xc041d2e  jal         func_1074B8
    ctx->pc = 0x10A698u;
    SET_GPR_U32(ctx, 31, 0x10A6A0u);
    ctx->pc = 0x1074B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1074B8u, 0x10A698u, 0x10A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6A0u;
label_10a6a0:
    // 0x10a6a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10a6a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6a4: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A6A4u;
    {
        const bool branch_taken_0x10a6a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6A4u;
        // 0x10a6a8: 0x8e233dac  lw          $v1, 0x3DAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6a4) {
            ctx->pc = 0x10A6B8u;
            goto label_10a6b8;
        }
    }
    ctx->pc = 0x10A6ACu;
    // 0x10a6ac: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x10a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x10a6b0: 0x1462fff9  bne         $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10A6B0u;
    {
        const bool branch_taken_0x10a6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10a6b0) {
            ctx->pc = 0x10A698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a698;
        }
    }
    ctx->pc = 0x10A6B8u;
label_10a6b8:
    // 0x10a6b8: 0x2e820005  sltiu       $v0, $s4, 0x5
    ctx->pc = 0x10a6b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_10a6bc:
    // 0x10a6bc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x10A6BCu;
    {
        const bool branch_taken_0x10a6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6BCu;
        // 0x10a6c0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6bc) {
            ctx->pc = 0x10A764u;
            goto label_10a764;
        }
    }
    ctx->pc = 0x10A6C4u;
    // 0x10a6c4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x10a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x10a6c8: 0x2442c930  addiu       $v0, $v0, -0x36D0
    ctx->pc = 0x10a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
    // 0x10a6cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10a6d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10a6d4: 0x800008  jr          $a0
    ctx->pc = 0x10A6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A6DCu: goto label_10a6dc;
            case 0x10A6F0u: goto label_10a6f0;
            case 0x10A720u: goto label_10a720;
            case 0x10A744u: goto label_10a744;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A6D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10A6DCu;
label_10a6dc:
    // 0x10a6dc: 0xc042a9c  jal         func_10AA70
    ctx->pc = 0x10A6DCu;
    SET_GPR_U32(ctx, 31, 0x10A6E4u);
    ctx->pc = 0x10A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6DCu;
    // 0x10a6e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA70u, 0x10A6DCu, 0x10A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6E4u;
label_10a6e4:
    // 0x10a6e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a6e8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10A6E8u;
    {
        const bool branch_taken_0x10a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6E8u;
        // 0x10a6ec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6e8) {
            ctx->pc = 0x10A764u;
            goto label_10a764;
        }
    }
    ctx->pc = 0x10A6F0u;
label_10a6f0:
    // 0x10a6f0: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x10a6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x10a6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6f8: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x10a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x10a6fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10a6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a700: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x10a700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x10a704: 0xc042a30  jal         func_10A8C0
    ctx->pc = 0x10A704u;
    SET_GPR_U32(ctx, 31, 0x10A70Cu);
    ctx->pc = 0x10A708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A704u;
    // 0x10a708: 0x8e060094  lw          $a2, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A8C0u, 0x10A704u, 0x10A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A70Cu;
label_10a70c:
    // 0x10a70c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x10a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x10a710: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10a710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a714: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10a714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10a718: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10A718u;
    {
        const bool branch_taken_0x10a718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A718u;
        // 0x10a71c: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a718) {
            ctx->pc = 0x10A764u;
            goto label_10a764;
        }
    }
    ctx->pc = 0x10A720u;
label_10a720:
    // 0x10a720: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x10a720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x10a724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a728: 0xc042a30  jal         func_10A8C0
    ctx->pc = 0x10A728u;
    SET_GPR_U32(ctx, 31, 0x10A730u);
    ctx->pc = 0x10A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A728u;
    // 0x10a72c: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A8C0u, 0x10A728u, 0x10A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A730u;
label_10a730:
    // 0x10a730: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x10a730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x10a734: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10a734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a738: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10a738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10a73c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10A73Cu;
    {
        const bool branch_taken_0x10a73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A73Cu;
        // 0x10a740: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a73c) {
            ctx->pc = 0x10A764u;
            goto label_10a764;
        }
    }
    ctx->pc = 0x10A744u;
label_10a744:
    // 0x10a744: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x10a744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x10a748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a74c: 0xc042a30  jal         func_10A8C0
    ctx->pc = 0x10A74Cu;
    SET_GPR_U32(ctx, 31, 0x10A754u);
    ctx->pc = 0x10A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A74Cu;
    // 0x10a750: 0x8e06009c  lw          $a2, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A8C0u, 0x10A74Cu, 0x10A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A754u;
label_10a754:
    // 0x10a754: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x10a754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x10a758: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10a758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a75c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10a760: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x10a760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_10a764:
    // 0x10a764: 0x8ea24480  lw          $v0, 0x4480($s5)
    ctx->pc = 0x10a764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 17536)));
    // 0x10a768: 0x1040ffc7  beqz        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x10A768u;
    {
        const bool branch_taken_0x10a768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A768u;
        // 0x10a76c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a768) {
            ctx->pc = 0x10A688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a688;
        }
    }
    ctx->pc = 0x10A770u;
    // 0x10a770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a774:
    // 0x10a774: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10a774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a778: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10a778u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a77c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10a77cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a780: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10a780u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a784: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10a784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a788: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10a788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a78c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a790: 0x3e00008  jr          $ra
    ctx->pc = 0x10A790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A790u;
        // 0x10a794: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A798u;
}
