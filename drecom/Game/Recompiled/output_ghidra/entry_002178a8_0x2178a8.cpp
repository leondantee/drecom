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

// Function: entry_002178a8
// Address: 0x2178a8 - 0x2178bc
void entry_002178a8_0x2178a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002178a8_0x2178a8");
#endif

    switch (ctx->pc) {
        case 0x2178b0u: goto label_2178b0;
        default: break;
    }

    ctx->pc = 0x2178a8u;

    // 0x2178a8: 0xc085de6  jal         func_217798
    ctx->pc = 0x2178A8u;
    SET_GPR_U32(ctx, 31, 0x2178B0u);
    ctx->pc = 0x2178ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178A8u;
    // 0x2178ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217798u, 0x2178A8u, 0x2178B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178B0u;
label_2178b0:
    // 0x2178b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2178b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2178b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2178B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2178B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178B4u;
        // 0x2178b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2178B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2178BCu;
}
