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

// Function: entry_0011efb8
// Address: 0x11efb8 - 0x11efd0
void entry_0011efb8_0x11efb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011efb8_0x11efb8");
#endif

    switch (ctx->pc) {
        case 0x11efc0u: goto label_11efc0;
        default: break;
    }

    ctx->pc = 0x11efb8u;

    // 0x11efb8: 0xc0479bc  jal         func_11E6F0
    ctx->pc = 0x11EFB8u;
    SET_GPR_U32(ctx, 31, 0x11EFC0u);
    ctx->pc = 0x11E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E6F0u, 0x11EFB8u, 0x11EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EFC0u;
label_11efc0:
    // 0x11efc0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11efc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11efc4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x11efc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11efc8: 0x3e00008  jr          $ra
    ctx->pc = 0x11EFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFC8u;
        // 0x11efcc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EFD0u;
}
