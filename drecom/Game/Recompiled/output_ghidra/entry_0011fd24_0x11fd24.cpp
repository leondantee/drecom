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

// Function: entry_0011fd24
// Address: 0x11fd24 - 0x11fd3c
void entry_0011fd24_0x11fd24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fd24_0x11fd24");
#endif

    switch (ctx->pc) {
        case 0x11fd2cu: goto label_11fd2c;
        default: break;
    }

    ctx->pc = 0x11fd24u;

    // 0x11fd24: 0xc047ef6  jal         func_11FBD8
    ctx->pc = 0x11FD24u;
    SET_GPR_U32(ctx, 31, 0x11FD2Cu);
    ctx->pc = 0x11FD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FD24u;
    // 0x11fd28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBD8u, 0x11FD24u, 0x11FD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD2Cu;
label_11fd2c:
    // 0x11fd2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11fd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fd30: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11fd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fd34: 0x3e00008  jr          $ra
    ctx->pc = 0x11FD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD34u;
        // 0x11fd38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FD3Cu;
}
