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

// Function: entry_0011f800
// Address: 0x11f800 - 0x11f818
void entry_0011f800_0x11f800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f800_0x11f800");
#endif

    switch (ctx->pc) {
        case 0x11f808u: goto label_11f808;
        default: break;
    }

    ctx->pc = 0x11f800u;

    // 0x11f800: 0xc047cfa  jal         func_11F3E8
    ctx->pc = 0x11F800u;
    SET_GPR_U32(ctx, 31, 0x11F808u);
    ctx->pc = 0x11F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F800u;
    // 0x11f804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F3E8u, 0x11F800u, 0x11F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F808u;
label_11f808:
    // 0x11f808: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11f808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f80c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11f80cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f810: 0x3e00008  jr          $ra
    ctx->pc = 0x11F810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F810u;
        // 0x11f814: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F818u;
}
