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

// Function: entry_0010acc0
// Address: 0x10acc0 - 0x10acd4
void entry_0010acc0_0x10acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010acc0_0x10acc0");
#endif

    switch (ctx->pc) {
        case 0x10acc8u: goto label_10acc8;
        default: break;
    }

    ctx->pc = 0x10acc0u;

    // 0x10acc0: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x10ACC0u;
    SET_GPR_U32(ctx, 31, 0x10ACC8u);
    ctx->pc = 0x10ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACC0u;
    // 0x10acc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x10ACC0u, 0x10ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACC8u;
label_10acc8:
    // 0x10acc8: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x10acc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10accc: 0x3e00008  jr          $ra
    ctx->pc = 0x10ACCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACCCu;
        // 0x10acd0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ACCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ACD4u;
}
