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

// Function: entry_002137c0
// Address: 0x2137c0 - 0x2137d8
void entry_002137c0_0x2137c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002137c0_0x2137c0");
#endif

    switch (ctx->pc) {
        case 0x2137c8u: goto label_2137c8;
        default: break;
    }

    ctx->pc = 0x2137c0u;

    // 0x2137c0: 0xc084a04  jal         func_212810
    ctx->pc = 0x2137C0u;
    SET_GPR_U32(ctx, 31, 0x2137C8u);
    ctx->pc = 0x212810u;
    {
        ctx->pc = 0x2137C8u;
        ps2_syscalls::iReleaseAlarm(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2137C8u) { return; }
    ctx->pc = 0x2137C8u;
label_2137c8:
    // 0x2137c8: 0xf  sync
    ctx->pc = 0x2137c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2137cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2137ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2137d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2137D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2137D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137D0u;
        // 0x2137d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2137D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2137D8u;
}
