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

// Function: entry_00105e98
// Address: 0x105e98 - 0x105ec4
void entry_00105e98_0x105e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105e98_0x105e98");
#endif

    switch (ctx->pc) {
        case 0x105ea0u: goto label_105ea0;
        default: break;
    }

    ctx->pc = 0x105e98u;

    // 0x105e98: 0xc041b9c  jal         func_106E70
    ctx->pc = 0x105E98u;
    SET_GPR_U32(ctx, 31, 0x105EA0u);
    ctx->pc = 0x105E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105E98u;
    // 0x105e9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E70u, 0x105E98u, 0x105EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EA0u;
label_105ea0:
    // 0x105ea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x105ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ea4: 0x121e0016  beq         $s0, $fp, . + 4 + (0x16 << 2)
    ctx->pc = 0x105EA4u;
    {
        const bool branch_taken_0x105ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 30));
        ctx->pc = 0x105EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EA4u;
        // 0x105ea8: 0x2e020023  sltiu       $v0, $s0, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ea4) {
            ctx->pc = 0x105F00u;
            return;
        }
    }
    ctx->pc = 0x105EACu;
    // 0x105eac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x105EACu;
    {
        const bool branch_taken_0x105eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105eac) {
            ctx->pc = 0x105EC4u;
            return;
        }
    }
    ctx->pc = 0x105EB4u;
    // 0x105eb4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105EB4u;
    {
        const bool branch_taken_0x105eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x105eb4) {
            ctx->pc = 0x105ED8u;
            return;
        }
    }
    ctx->pc = 0x105EBCu;
    // 0x105ebc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x105EBCu;
    {
        const bool branch_taken_0x105ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EBCu;
        // 0x105ec0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ebc) {
            ctx->pc = 0x105F1Cu;
            return;
        }
    }
    ctx->pc = 0x105EC4u;
}
