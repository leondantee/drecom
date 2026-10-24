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

// Function: entry_0010a4f4
// Address: 0x10a4f4 - 0x10a504
void entry_0010a4f4_0x10a4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a4f4_0x10a4f4");
#endif

    ctx->pc = 0x10a4f4u;

    // 0x10a4f4: 0x8c433bf4  lw          $v1, 0x3BF4($v0)
    ctx->pc = 0x10a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15348)));
    // 0x10a4f8: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x10a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x10a4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x10A4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4FCu;
        // 0x10a500: 0xaca400d8  sw          $a0, 0xD8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 216), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A504u;
}
