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

// Function: entry_00213ad8
// Address: 0x213ad8 - 0x213aec
void entry_00213ad8_0x213ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213ad8_0x213ad8");
#endif

    switch (ctx->pc) {
        case 0x213ae0u: goto label_213ae0;
        default: break;
    }

    ctx->pc = 0x213ad8u;

    // 0x213ad8: 0xc084b94  jal         func_212E50
    ctx->pc = 0x213AD8u;
    SET_GPR_U32(ctx, 31, 0x213AE0u);
    ctx->pc = 0x213ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213AD8u;
    // 0x213adc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E50u;
    {
        ctx->pc = 0x213AE0u;
        ps2_syscalls::Deci2Call(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213AE0u) { return; }
    ctx->pc = 0x213AE0u;
label_213ae0:
    // 0x213ae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x213ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x213AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213AE4u;
        // 0x213ae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213AECu;
}
