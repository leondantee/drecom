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

// Function: entry_00213780
// Address: 0x213780 - 0x213798
void entry_00213780_0x213780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213780_0x213780");
#endif

    switch (ctx->pc) {
        case 0x213788u: goto label_213788;
        default: break;
    }

    ctx->pc = 0x213780u;

    // 0x213780: 0xc0849fc  jal         func_2127F0
    ctx->pc = 0x213780u;
    SET_GPR_U32(ctx, 31, 0x213788u);
    ctx->pc = 0x2127F0u;
    {
        ctx->pc = 0x213788u;
        ps2_syscalls::iDisableDmac(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213788u) { return; }
    ctx->pc = 0x213788u;
label_213788:
    // 0x213788: 0xf  sync
    ctx->pc = 0x213788u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21378c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21378cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213790: 0x3e00008  jr          $ra
    ctx->pc = 0x213790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213790u;
        // 0x213794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213798u;
}
