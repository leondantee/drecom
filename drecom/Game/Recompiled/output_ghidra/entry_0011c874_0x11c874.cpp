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

// Function: entry_0011c874
// Address: 0x11c874 - 0x11c8a0
void entry_0011c874_0x11c874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c874_0x11c874");
#endif

    ctx->pc = 0x11c874u;

    // 0x11c874: 0xdfbe02b0  ld          $fp, 0x2B0($sp)
    ctx->pc = 0x11c874u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x11c878: 0xdfb702a0  ld          $s7, 0x2A0($sp)
    ctx->pc = 0x11c878u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x11c87c: 0xdfb60290  ld          $s6, 0x290($sp)
    ctx->pc = 0x11c87cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x11c880: 0xdfb50280  ld          $s5, 0x280($sp)
    ctx->pc = 0x11c880u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x11c884: 0xdfb40270  ld          $s4, 0x270($sp)
    ctx->pc = 0x11c884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x11c888: 0xdfb30260  ld          $s3, 0x260($sp)
    ctx->pc = 0x11c888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x11c88c: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x11c88cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11c890: 0xdfb10240  ld          $s1, 0x240($sp)
    ctx->pc = 0x11c890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11c894: 0xdfb00230  ld          $s0, 0x230($sp)
    ctx->pc = 0x11c894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x11c898: 0x3e00008  jr          $ra
    ctx->pc = 0x11C898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C898u;
        // 0x11c89c: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C8A0u;
}
