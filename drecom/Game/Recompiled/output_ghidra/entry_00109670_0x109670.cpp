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

// Function: entry_00109670
// Address: 0x109670 - 0x10968c
void entry_00109670_0x109670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109670_0x109670");
#endif

    switch (ctx->pc) {
        case 0x109680u: goto label_109680;
        default: break;
    }

    ctx->pc = 0x109670u;

    // 0x109670: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x109670u;
    {
        const bool branch_taken_0x109670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109670u;
        // 0x109674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109670) {
            ctx->pc = 0x10968Cu;
            return;
        }
    }
    ctx->pc = 0x109678u;
    // 0x109678: 0xc0423dc  jal         func_108F70
    ctx->pc = 0x109678u;
    SET_GPR_U32(ctx, 31, 0x109680u);
    ctx->pc = 0x10967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109678u;
    // 0x10967c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F70u, 0x109678u, 0x109680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109680u;
label_109680:
    // 0x109680: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x109680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x109684: 0x1043ff89  beq         $v0, $v1, . + 4 + (-0x77 << 2)
    ctx->pc = 0x109684u;
    {
        const bool branch_taken_0x109684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x109688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109684u;
        // 0x109688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109684) {
            ctx->pc = 0x1094ACu;
            return;
        }
    }
    ctx->pc = 0x10968Cu;
}
