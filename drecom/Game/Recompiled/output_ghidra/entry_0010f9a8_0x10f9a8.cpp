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

// Function: entry_0010f9a8
// Address: 0x10f9a8 - 0x10f9bc
void entry_0010f9a8_0x10f9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f9a8_0x10f9a8");
#endif

    switch (ctx->pc) {
        case 0x10f9b0u: goto label_10f9b0;
        default: break;
    }

    ctx->pc = 0x10f9a8u;

    // 0x10f9a8: 0xc043f3c  jal         func_10FCF0
    ctx->pc = 0x10F9A8u;
    SET_GPR_U32(ctx, 31, 0x10F9B0u);
    ctx->pc = 0x10F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F9A8u;
    // 0x10f9ac: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCF0u, 0x10F9A8u, 0x10F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F9B0u;
label_10f9b0:
    // 0x10f9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x10F9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9B4u;
        // 0x10f9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F9BCu;
}
