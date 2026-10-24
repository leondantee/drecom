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

// Function: __unpack_d
// Address: 0x11e820 - 0x11e8bc
void ps2___unpack_d_0x11e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_d_0x11e820");
#endif

    ctx->pc = 0x11e820u;

    // 0x11e820: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x11e820u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e824: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11e824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e828: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x11e828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x11e82c: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x11e82cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x11e830: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x11e830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11e834: 0x2153e  dsrl32      $v0, $v0, 20
    ctx->pc = 0x11e834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x11e838: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x11e838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x11e83c: 0x304407ff  andi        $a0, $v0, 0x7FF
    ctx->pc = 0x11e83cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x11e840: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E840u;
    {
        const bool branch_taken_0x11e840 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E840u;
        // 0x11e844: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e840) {
            ctx->pc = 0x11E858u;
            goto label_11e858;
        }
    }
    ctx->pc = 0x11E848u;
    // 0x11e848: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11e84c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E84Cu;
        // 0x11e850: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E854u;
    // 0x11e854: 0x0  nop
    ctx->pc = 0x11e854u;
    // NOP
label_11e858:
    // 0x11e858: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11E858u;
    {
        const bool branch_taken_0x11e858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e858) {
            ctx->pc = 0x11E85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E858u;
            // 0x11e85c: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E898u;
            goto label_11e898;
        }
    }
    ctx->pc = 0x11E860u;
    // 0x11e860: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E860u;
    {
        const bool branch_taken_0x11e860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E860u;
        // 0x11e864: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e860) {
            ctx->pc = 0x11E870u;
            goto label_11e870;
        }
    }
    ctx->pc = 0x11E868u;
    // 0x11e868: 0x3e00008  jr          $ra
    ctx->pc = 0x11E868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E868u;
        // 0x11e86c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E870u;
label_11e870:
    // 0x11e870: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x11e870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11e874: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x11e874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x11e878: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11e878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11e87c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E87Cu;
    {
        const bool branch_taken_0x11e87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E87Cu;
        // 0x11e880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e87c) {
            ctx->pc = 0x11E88Cu;
            goto label_11e88c;
        }
    }
    ctx->pc = 0x11E884u;
    // 0x11e884: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11E884u;
    {
        const bool branch_taken_0x11e884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E884u;
        // 0x11e888: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e884) {
            ctx->pc = 0x11E890u;
            goto label_11e890;
        }
    }
    ctx->pc = 0x11E88Cu;
label_11e88c:
    // 0x11e88c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x11e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_11e890:
    // 0x11e890: 0x3e00008  jr          $ra
    ctx->pc = 0x11E890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E890u;
        // 0x11e894: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E898u;
label_11e898:
    // 0x11e898: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x11e898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11e89c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x11e89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x11e8a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11e8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11e8a4: 0x2484fc01  addiu       $a0, $a0, -0x3FF
    ctx->pc = 0x11e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966273));
    // 0x11e8a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11e8ac: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x11e8acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x11e8b0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x11e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x11e8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x11E8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8B4u;
        // 0x11e8b8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E8BCu;
}
