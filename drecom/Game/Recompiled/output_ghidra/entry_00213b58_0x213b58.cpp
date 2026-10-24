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

// Function: entry_00213b58
// Address: 0x213b58 - 0x213b6c
void entry_00213b58_0x213b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213b58_0x213b58");
#endif

    switch (ctx->pc) {
        case 0x213b60u: goto label_213b60;
        default: break;
    }

    ctx->pc = 0x213b58u;

    // 0x213b58: 0xc084b94  jal         func_212E50
    ctx->pc = 0x213B58u;
    SET_GPR_U32(ctx, 31, 0x213B60u);
    ctx->pc = 0x213B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B58u;
    // 0x213b5c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E50u;
    {
        ctx->pc = 0x213B60u;
        ps2_syscalls::Deci2Call(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213B60u) { return; }
    ctx->pc = 0x213B60u;
label_213b60:
    // 0x213b60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x213b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213b64: 0x3e00008  jr          $ra
    ctx->pc = 0x213B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B64u;
        // 0x213b68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213B6Cu;
}
