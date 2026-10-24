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

// Function: entry_0010fc90
// Address: 0x10fc90 - 0x10fca4
void entry_0010fc90_0x10fc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fc90_0x10fc90");
#endif

    switch (ctx->pc) {
        case 0x10fc98u: goto label_10fc98;
        default: break;
    }

    ctx->pc = 0x10fc90u;

    // 0x10fc90: 0xc043f3c  jal         func_10FCF0
    ctx->pc = 0x10FC90u;
    SET_GPR_U32(ctx, 31, 0x10FC98u);
    ctx->pc = 0x10FC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC90u;
    // 0x10fc94: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCF0u, 0x10FC90u, 0x10FC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC98u;
label_10fc98:
    // 0x10fc98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x10FC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC9Cu;
        // 0x10fca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FCA4u;
}
