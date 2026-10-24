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

// Function: entry_0011fbc0
// Address: 0x11fbc0 - 0x11fbd8
void entry_0011fbc0_0x11fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fbc0_0x11fbc0");
#endif

    switch (ctx->pc) {
        case 0x11fbc8u: goto label_11fbc8;
        default: break;
    }

    ctx->pc = 0x11fbc0u;

    // 0x11fbc0: 0xc047cfa  jal         func_11F3E8
    ctx->pc = 0x11FBC0u;
    SET_GPR_U32(ctx, 31, 0x11FBC8u);
    ctx->pc = 0x11F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F3E8u, 0x11FBC0u, 0x11FBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FBC8u;
label_11fbc8:
    // 0x11fbc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11fbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fbcc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11fbccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x11FBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBD0u;
        // 0x11fbd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FBD8u;
}
