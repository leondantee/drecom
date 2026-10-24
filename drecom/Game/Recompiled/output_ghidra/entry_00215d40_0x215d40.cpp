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

// Function: entry_00215d40
// Address: 0x215d40 - 0x215d50
void entry_00215d40_0x215d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215d40_0x215d40");
#endif

    switch (ctx->pc) {
        case 0x215d48u: goto label_215d48;
        default: break;
    }

    ctx->pc = 0x215d40u;

    // 0x215d40: 0xc085576  jal         func_2155D8
    ctx->pc = 0x215D40u;
    SET_GPR_U32(ctx, 31, 0x215D48u);
    ctx->pc = 0x215D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D40u;
    // 0x215d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155D8u, 0x215D40u, 0x215D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D48u;
label_215d48:
    // 0x215d48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x215D48u;
    {
        const bool branch_taken_0x215d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D48u;
        // 0x215d4c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d48) {
            ctx->pc = 0x215D64u;
            return;
        }
    }
    ctx->pc = 0x215D50u;
}
