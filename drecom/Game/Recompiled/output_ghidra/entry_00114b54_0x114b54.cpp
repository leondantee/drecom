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

// Function: entry_00114b54
// Address: 0x114b54 - 0x114b74
void entry_00114b54_0x114b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114b54_0x114b54");
#endif

    switch (ctx->pc) {
        case 0x114b68u: goto label_114b68;
        default: break;
    }

    ctx->pc = 0x114b54u;

    // 0x114b54: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x114b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x114b58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x114b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b5c: 0xdc50d8b0  ld          $s0, -0x2750($v0)
    ctx->pc = 0x114b5cu;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x3AD8B0u));
    // 0x114b60: 0xc045182  jal         func_114608
    ctx->pc = 0x114B60u;
    SET_GPR_U32(ctx, 31, 0x114B68u);
    ctx->pc = 0x114B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B60u;
    // 0x114b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114608u, 0x114B60u, 0x114B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B68u;
label_114b68:
    // 0x114b68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b6c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x114B6Cu;
    {
        const bool branch_taken_0x114b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B6Cu;
        // 0x114b70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b6c) {
            ctx->pc = 0x114BA8u;
            return;
        }
    }
    ctx->pc = 0x114B74u;
}
