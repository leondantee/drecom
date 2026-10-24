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

// Function: entry_00213720
// Address: 0x213720 - 0x213738
void entry_00213720_0x213720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213720_0x213720");
#endif

    switch (ctx->pc) {
        case 0x213728u: goto label_213728;
        default: break;
    }

    ctx->pc = 0x213720u;

    // 0x213720: 0xc0849f0  jal         func_2127C0
    ctx->pc = 0x213720u;
    SET_GPR_U32(ctx, 31, 0x213728u);
    ctx->pc = 0x2127C0u;
    {
        ctx->pc = 0x213728u;
        ps2_syscalls::iEnableIntc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213728u) { return; }
    ctx->pc = 0x213728u;
label_213728:
    // 0x213728: 0xf  sync
    ctx->pc = 0x213728u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21372c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21372cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213730: 0x3e00008  jr          $ra
    ctx->pc = 0x213730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213730u;
        // 0x213734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213738u;
}
