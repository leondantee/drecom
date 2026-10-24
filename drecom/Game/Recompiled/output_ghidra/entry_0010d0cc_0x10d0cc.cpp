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

// Function: entry_0010d0cc
// Address: 0x10d0cc - 0x10d0e8
void entry_0010d0cc_0x10d0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d0cc_0x10d0cc");
#endif

    switch (ctx->pc) {
        case 0x10d0d4u: goto label_10d0d4;
        default: break;
    }

    ctx->pc = 0x10d0ccu;

    // 0x10d0cc: 0xc084a8c  jal         func_212A30
    ctx->pc = 0x10D0CCu;
    SET_GPR_U32(ctx, 31, 0x10D0D4u);
    ctx->pc = 0x10D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0CCu;
    // 0x10d0d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A30u;
    {
        ctx->pc = 0x10D0D4u;
        ps2_syscalls::DeleteSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D0D4u) { return; }
    ctx->pc = 0x10D0D4u;
label_10d0d4:
    // 0x10d0d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10d0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d0d8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10d0d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d0dc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10d0dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D0E0u;
        // 0x10d0e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D0E8u;
}
