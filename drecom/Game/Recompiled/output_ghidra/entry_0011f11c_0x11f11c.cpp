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

// Function: entry_0011f11c
// Address: 0x11f11c - 0x11f134
void entry_0011f11c_0x11f11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f11c_0x11f11c");
#endif

    switch (ctx->pc) {
        case 0x11f124u: goto label_11f124;
        default: break;
    }

    ctx->pc = 0x11f11cu;

    // 0x11f11c: 0xc047bf4  jal         func_11EFD0
    ctx->pc = 0x11F11Cu;
    SET_GPR_U32(ctx, 31, 0x11F124u);
    ctx->pc = 0x11F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F11Cu;
    // 0x11f120: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFD0u, 0x11F11Cu, 0x11F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F124u;
label_11f124:
    // 0x11f124: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11f124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f128: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x11f128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f12c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F12Cu;
        // 0x11f130: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F134u;
}
