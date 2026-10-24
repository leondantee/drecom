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

// Function: entry_0011fd18
// Address: 0x11fd18 - 0x11fd24
void entry_0011fd18_0x11fd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fd18_0x11fd18");
#endif

    switch (ctx->pc) {
        case 0x11fd20u: goto label_11fd20;
        default: break;
    }

    ctx->pc = 0x11fd18u;

    // 0x11fd18: 0xc047d3e  jal         func_11F4F8
    ctx->pc = 0x11FD18u;
    SET_GPR_U32(ctx, 31, 0x11FD20u);
    ctx->pc = 0x11FD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FD18u;
    // 0x11fd1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F4F8u, 0x11FD18u, 0x11FD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD20u;
label_11fd20:
    // 0x11fd20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11fd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11fd24u;
}
