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

// Function: entry_0011ffb4
// Address: 0x11ffb4 - 0x11ffc8
void entry_0011ffb4_0x11ffb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ffb4_0x11ffb4");
#endif

    switch (ctx->pc) {
        case 0x11ffbcu: goto label_11ffbc;
        default: break;
    }

    ctx->pc = 0x11ffb4u;

    // 0x11ffb4: 0xc047cd8  jal         func_11F360
    ctx->pc = 0x11FFB4u;
    SET_GPR_U32(ctx, 31, 0x11FFBCu);
    ctx->pc = 0x11FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFB4u;
    // 0x11ffb8: 0x738ba  dsrl        $a3, $a3, 2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F360u, 0x11FFB4u, 0x11FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFBCu;
label_11ffbc:
    // 0x11ffbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11ffbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ffc0: 0x3e00008  jr          $ra
    ctx->pc = 0x11FFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFC0u;
        // 0x11ffc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FFC8u;
}
