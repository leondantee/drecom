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

// Function: entry_0011fa5c
// Address: 0x11fa5c - 0x11fa74
void entry_0011fa5c_0x11fa5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fa5c_0x11fa5c");
#endif

    switch (ctx->pc) {
        case 0x11fa64u: goto label_11fa64;
        default: break;
    }

    ctx->pc = 0x11fa5cu;

    // 0x11fa5c: 0xc047cfa  jal         func_11F3E8
    ctx->pc = 0x11FA5Cu;
    SET_GPR_U32(ctx, 31, 0x11FA64u);
    ctx->pc = 0x11F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F3E8u, 0x11FA5Cu, 0x11FA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FA64u;
label_11fa64:
    // 0x11fa64: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11fa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11fa68: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11fa68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fa6c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA6Cu;
        // 0x11fa70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FA74u;
}
