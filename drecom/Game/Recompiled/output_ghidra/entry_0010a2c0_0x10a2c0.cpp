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

// Function: entry_0010a2c0
// Address: 0x10a2c0 - 0x10a2d4
void entry_0010a2c0_0x10a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a2c0_0x10a2c0");
#endif

    switch (ctx->pc) {
        case 0x10a2c8u: goto label_10a2c8;
        default: break;
    }

    ctx->pc = 0x10a2c0u;

    // 0x10a2c0: 0xc04298a  jal         func_10A628
    ctx->pc = 0x10A2C0u;
    SET_GPR_U32(ctx, 31, 0x10A2C8u);
    ctx->pc = 0x10A2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A2C0u;
    // 0x10a2c4: 0xace000e0  sw          $zero, 0xE0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 224), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A628u, 0x10A2C0u, 0x10A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A2C8u;
label_10a2c8:
    // 0x10a2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x10A2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2CCu;
        // 0x10a2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A2D4u;
}
