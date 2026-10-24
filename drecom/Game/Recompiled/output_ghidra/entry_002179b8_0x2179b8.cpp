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

// Function: entry_002179b8
// Address: 0x2179b8 - 0x2179d4
void entry_002179b8_0x2179b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002179b8_0x2179b8");
#endif

    ctx->pc = 0x2179b8u;

    // 0x2179b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2179b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2179bc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2179bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2179c0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2179c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2179c4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2179c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2179c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2179c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2179cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2179CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2179D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179CCu;
        // 0x2179d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2179CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2179D4u;
}
