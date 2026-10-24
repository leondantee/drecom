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

// Function: entry_00213b90
// Address: 0x213b90 - 0x213ba4
void entry_00213b90_0x213b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213b90_0x213b90");
#endif

    switch (ctx->pc) {
        case 0x213b98u: goto label_213b98;
        default: break;
    }

    ctx->pc = 0x213b90u;

    // 0x213b90: 0xc084b94  jal         func_212E50
    ctx->pc = 0x213B90u;
    SET_GPR_U32(ctx, 31, 0x213B98u);
    ctx->pc = 0x213B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B90u;
    // 0x213b94: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E50u;
    {
        ctx->pc = 0x213B98u;
        ps2_syscalls::Deci2Call(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213B98u) { return; }
    ctx->pc = 0x213B98u;
label_213b98:
    // 0x213b98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x213b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x213B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B9Cu;
        // 0x213ba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213BA4u;
}
