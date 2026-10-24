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

// Function: entry_0010c88c
// Address: 0x10c88c - 0x10c8f8
void entry_0010c88c_0x10c88c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c88c_0x10c88c");
#endif

    switch (ctx->pc) {
        case 0x10c8b4u: goto label_10c8b4;
        default: break;
    }

    ctx->pc = 0x10c88cu;

    // 0x10c88c: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    // 0x10c890: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10c890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10c894: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10c894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c898: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10c898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c89c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c8a0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10c8a4: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x10C8A4u;
    {
        const bool branch_taken_0x10c8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8A4u;
        // 0x10c8a8: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8a4) {
            ctx->pc = 0x10C988u;
            return;
        }
    }
    ctx->pc = 0x10C8ACu;
    // 0x10c8ac: 0xc0430d6  jal         func_10C358
    ctx->pc = 0x10C8ACu;
    SET_GPR_U32(ctx, 31, 0x10C8B4u);
    ctx->pc = 0x10C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C8ACu;
    // 0x10c8b0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C358u, 0x10C8ACu, 0x10C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C8B4u;
label_10c8b4:
    // 0x10c8b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10c8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c8b8: 0x90830072  lbu         $v1, 0x72($a0)
    ctx->pc = 0x10c8b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
    // 0x10c8bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c8c0: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x10C8C0u;
    {
        const bool branch_taken_0x10c8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8C0u;
        // 0x10c8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8c0) {
            ctx->pc = 0x10C98Cu;
            return;
        }
    }
    ctx->pc = 0x10C8C8u;
    // 0x10c8c8: 0x90820071  lbu         $v0, 0x71($a0)
    ctx->pc = 0x10c8c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
    // 0x10c8cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10c8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c8d0: 0x1045002e  beq         $v0, $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x10C8D0u;
    {
        const bool branch_taken_0x10c8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8D0u;
        // 0x10c8d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8d0) {
            ctx->pc = 0x10C98Cu;
            return;
        }
    }
    ctx->pc = 0x10C8D8u;
    // 0x10c8d8: 0x12050013  beq         $s0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x10C8D8u;
    {
        const bool branch_taken_0x10c8d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x10C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8D8u;
        // 0x10c8dc: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8d8) {
            ctx->pc = 0x10C928u;
            return;
        }
    }
    ctx->pc = 0x10C8E0u;
    // 0x10c8e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C8E0u;
    {
        const bool branch_taken_0x10c8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8E0u;
        // 0x10c8e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8e0) {
            ctx->pc = 0x10C8F8u;
            return;
        }
    }
    ctx->pc = 0x10C8E8u;
    // 0x10c8e8: 0x12030009  beq         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10C8E8u;
    {
        const bool branch_taken_0x10c8e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8E8u;
        // 0x10c8ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8e8) {
            ctx->pc = 0x10C910u;
            return;
        }
    }
    ctx->pc = 0x10C8F0u;
    // 0x10c8f0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x10C8F0u;
    {
        const bool branch_taken_0x10c8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8F0u;
        // 0x10c8f4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8f0) {
            ctx->pc = 0x10C990u;
            return;
        }
    }
    ctx->pc = 0x10C8F8u;
}
