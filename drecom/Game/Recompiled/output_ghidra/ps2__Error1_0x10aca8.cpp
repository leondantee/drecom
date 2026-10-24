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

// Function: _Error1
// Address: 0x10aca8 - 0x10acd4
void ps2__Error1_0x10aca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Error1_0x10aca8");
#endif

    switch (ctx->pc) {
        case 0x10acc0u: goto label_10acc0;
        case 0x10acc8u: goto label_10acc8;
        default: break;
    }

    ctx->pc = 0x10aca8u;

    // 0x10aca8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10aca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10acac: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x10acacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x10acb0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10acb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10acb4: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x10acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x10acb8: 0xc046a48  jal         func_11A920
    ctx->pc = 0x10ACB8u;
    SET_GPR_U32(ctx, 31, 0x10ACC0u);
    ctx->pc = 0x10ACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACB8u;
    // 0x10acbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A920u;
    {
        ctx->pc = 0x10ACC0u;
        ps2_stubs::sprintf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10ACC0u) { return; }
    ctx->pc = 0x10ACC0u;
label_10acc0:
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
