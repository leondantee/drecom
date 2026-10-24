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

// Function: entry_00106c40
// Address: 0x106c40 - 0x106c68
void entry_00106c40_0x106c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106c40_0x106c40");
#endif

    switch (ctx->pc) {
        case 0x106c48u: goto label_106c48;
        case 0x106c60u: goto label_106c60;
        default: break;
    }

    ctx->pc = 0x106c40u;

    // 0x106c40: 0xc041b9c  jal         func_106E70
    ctx->pc = 0x106C40u;
    SET_GPR_U32(ctx, 31, 0x106C48u);
    ctx->pc = 0x106C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C40u;
    // 0x106c44: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E70u, 0x106C40u, 0x106C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C48u;
label_106c48:
    // 0x106c48: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x106C48u;
    {
        const bool branch_taken_0x106c48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C48u;
        // 0x106c4c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c48) {
            ctx->pc = 0x106C68u;
            return;
        }
    }
    ctx->pc = 0x106C50u;
    // 0x106c50: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x106C50u;
    {
        const bool branch_taken_0x106c50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C50u;
        // 0x106c54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c50) {
            ctx->pc = 0x106C6Cu;
            return;
        }
    }
    ctx->pc = 0x106C58u;
    // 0x106c58: 0xc041c9e  jal         func_107278
    ctx->pc = 0x106C58u;
    SET_GPR_U32(ctx, 31, 0x106C60u);
    ctx->pc = 0x106C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C58u;
    // 0x106c5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x106C58u, 0x106C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C60u;
label_106c60:
    // 0x106c60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106C60u;
    {
        const bool branch_taken_0x106c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C60u;
        // 0x106c64: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c60) {
            ctx->pc = 0x106C6Cu;
            return;
        }
    }
    ctx->pc = 0x106C68u;
}
