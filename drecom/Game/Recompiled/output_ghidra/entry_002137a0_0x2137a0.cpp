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

// Function: entry_002137a0
// Address: 0x2137a0 - 0x2137b8
void entry_002137a0_0x2137a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002137a0_0x2137a0");
#endif

    switch (ctx->pc) {
        case 0x2137a8u: goto label_2137a8;
        default: break;
    }

    ctx->pc = 0x2137a0u;

    // 0x2137a0: 0xc084a00  jal         func_212800
    ctx->pc = 0x2137A0u;
    SET_GPR_U32(ctx, 31, 0x2137A8u);
    ctx->pc = 0x2137A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2137A0u;
    // 0x2137a4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212800u;
    {
        ctx->pc = 0x2137A8u;
        ps2_syscalls::iSetAlarm(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2137A8u) { return; }
    ctx->pc = 0x2137A8u;
label_2137a8:
    // 0x2137a8: 0xf  sync
    ctx->pc = 0x2137a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2137ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2137acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2137b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2137B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2137B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137B0u;
        // 0x2137b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2137B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2137B8u;
}
