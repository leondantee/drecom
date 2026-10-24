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

// Function: entry_00213760
// Address: 0x213760 - 0x213778
void entry_00213760_0x213760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213760_0x213760");
#endif

    switch (ctx->pc) {
        case 0x213768u: goto label_213768;
        default: break;
    }

    ctx->pc = 0x213760u;

    // 0x213760: 0xc0849f8  jal         func_2127E0
    ctx->pc = 0x213760u;
    SET_GPR_U32(ctx, 31, 0x213768u);
    ctx->pc = 0x2127E0u;
    {
        ctx->pc = 0x213768u;
        ps2_syscalls::iEnableDmac(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213768u) { return; }
    ctx->pc = 0x213768u;
label_213768:
    // 0x213768: 0xf  sync
    ctx->pc = 0x213768u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21376c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21376cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213770: 0x3e00008  jr          $ra
    ctx->pc = 0x213770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213770u;
        // 0x213774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213778u;
}
