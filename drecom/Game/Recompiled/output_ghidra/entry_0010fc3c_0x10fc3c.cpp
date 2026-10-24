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

// Function: entry_0010fc3c
// Address: 0x10fc3c - 0x10fc50
void entry_0010fc3c_0x10fc3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fc3c_0x10fc3c");
#endif

    switch (ctx->pc) {
        case 0x10fc44u: goto label_10fc44;
        default: break;
    }

    ctx->pc = 0x10fc3cu;

    // 0x10fc3c: 0xc043f3c  jal         func_10FCF0
    ctx->pc = 0x10FC3Cu;
    SET_GPR_U32(ctx, 31, 0x10FC44u);
    ctx->pc = 0x10FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC3Cu;
    // 0x10fc40: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCF0u, 0x10FC3Cu, 0x10FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC44u;
label_10fc44:
    // 0x10fc44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fc48: 0x3e00008  jr          $ra
    ctx->pc = 0x10FC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC48u;
        // 0x10fc4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FC50u;
}
