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

// Function: entry_00212f28
// Address: 0x212f28 - 0x212f40
void entry_00212f28_0x212f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212f28_0x212f28");
#endif

    ctx->pc = 0x212f28u;

    // 0x212f28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x212f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212f2c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x212f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x212f30: 0xac22f000  sw          $v0, -0x1000($at)
    ctx->pc = 0x212f30u;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 2));
    // 0x212f34: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x212f34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212f38: 0x3e00008  jr          $ra
    ctx->pc = 0x212F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F38u;
        // 0x212f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212F40u;
}
