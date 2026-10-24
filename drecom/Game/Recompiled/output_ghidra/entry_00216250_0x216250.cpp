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

// Function: entry_00216250
// Address: 0x216250 - 0x216270
void entry_00216250_0x216250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216250_0x216250");
#endif

    switch (ctx->pc) {
        case 0x216258u: goto label_216258;
        case 0x216268u: goto label_216268;
        default: break;
    }

    ctx->pc = 0x216250u;

label_216250:
    // 0x216250: 0xc085800  jal         func_216000
    ctx->pc = 0x216250u;
    SET_GPR_U32(ctx, 31, 0x216258u);
    ctx->pc = 0x216254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216250u;
    // 0x216254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216000u, 0x216250u, 0x216258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216258u;
label_216258:
    // 0x216258: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x216258u;
    {
        const bool branch_taken_0x216258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216258u;
        // 0x21625c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216258) {
            ctx->pc = 0x216248u;
            return;
        }
    }
    ctx->pc = 0x216260u;
    // 0x216260: 0xc084a50  jal         func_212940
    ctx->pc = 0x216260u;
    SET_GPR_U32(ctx, 31, 0x216268u);
    ctx->pc = 0x212940u;
    {
        ctx->pc = 0x216268u;
        ps2_syscalls::SleepThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216268u) { return; }
    ctx->pc = 0x216268u;
label_216268:
    // 0x216268: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x216268u;
    {
        const bool branch_taken_0x216268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216268) {
            ctx->pc = 0x216250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216250;
        }
    }
    ctx->pc = 0x216270u;
}
