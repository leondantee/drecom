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

// Function: entry_0010c64c
// Address: 0x10c64c - 0x10c6b8
void entry_0010c64c_0x10c64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c64c_0x10c64c");
#endif

    switch (ctx->pc) {
        case 0x10c674u: goto label_10c674;
        default: break;
    }

    ctx->pc = 0x10c64cu;

    // 0x10c64c: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    // 0x10c650: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10c650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10c654: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10c654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c658: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10c658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c65c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c660: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10c660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10c664: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x10C664u;
    {
        const bool branch_taken_0x10c664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C664u;
        // 0x10c668: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c664) {
            ctx->pc = 0x10C730u;
            return;
        }
    }
    ctx->pc = 0x10C66Cu;
    // 0x10c66c: 0xc0430d6  jal         func_10C358
    ctx->pc = 0x10C66Cu;
    SET_GPR_U32(ctx, 31, 0x10C674u);
    ctx->pc = 0x10C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C66Cu;
    // 0x10c670: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C358u, 0x10C66Cu, 0x10C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C674u;
label_10c674:
    // 0x10c674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10c674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c678: 0x90850072  lbu         $a1, 0x72($a0)
    ctx->pc = 0x10c678u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
    // 0x10c67c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c680: 0x14a2002c  bne         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x10C680u;
    {
        const bool branch_taken_0x10c680 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C680u;
        // 0x10c684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c680) {
            ctx->pc = 0x10C734u;
            return;
        }
    }
    ctx->pc = 0x10C688u;
    // 0x10c688: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x10c688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x10c68c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x10c68cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x10c690: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x10C690u;
    {
        const bool branch_taken_0x10c690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C690u;
        // 0x10c694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c690) {
            ctx->pc = 0x10C734u;
            return;
        }
    }
    ctx->pc = 0x10C698u;
    // 0x10c698: 0x9083006a  lbu         $v1, 0x6A($a0)
    ctx->pc = 0x10c698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x10c69c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x10c69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10c6a0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10C6A0u;
    {
        const bool branch_taken_0x10c6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6A0u;
        // 0x10c6a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6a0) {
            ctx->pc = 0x10C730u;
            return;
        }
    }
    ctx->pc = 0x10C6A8u;
    // 0x10c6a8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C6A8u;
    {
        const bool branch_taken_0x10c6a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6A8u;
        // 0x10c6ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6a8) {
            ctx->pc = 0x10C6B8u;
            return;
        }
    }
    ctx->pc = 0x10C6B0u;
    // 0x10c6b0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x10C6B0u;
    {
        const bool branch_taken_0x10c6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6B0u;
        // 0x10c6b4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6b0) {
            ctx->pc = 0x10C734u;
            return;
        }
    }
    ctx->pc = 0x10C6B8u;
}
