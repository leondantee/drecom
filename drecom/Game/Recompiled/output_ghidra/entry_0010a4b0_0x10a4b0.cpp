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

// Function: entry_0010a4b0
// Address: 0x10a4b0 - 0x10a4c4
void entry_0010a4b0_0x10a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a4b0_0x10a4b0");
#endif

    switch (ctx->pc) {
        case 0x10a4b8u: goto label_10a4b8;
        default: break;
    }

    ctx->pc = 0x10a4b0u;

    // 0x10a4b0: 0xc042914  jal         func_10A450
    ctx->pc = 0x10A4B0u;
    SET_GPR_U32(ctx, 31, 0x10A4B8u);
    ctx->pc = 0x10A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A4B0u;
    // 0x10a4b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x10A4B0u, 0x10A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A4B8u;
label_10a4b8:
    // 0x10a4b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10a4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x10A4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4BCu;
        // 0x10a4c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A4C4u;
}
