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

// Function: entry_00214f28
// Address: 0x214f28 - 0x214f34
void entry_00214f28_0x214f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214f28_0x214f28");
#endif

    ctx->pc = 0x214f28u;

    // 0x214f28: 0xac60aad8  sw          $zero, -0x5528($v1)
    ctx->pc = 0x214f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945496), GPR_U32(ctx, 0));
    // 0x214f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x214F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F2Cu;
        // 0x214f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214F34u;
}
