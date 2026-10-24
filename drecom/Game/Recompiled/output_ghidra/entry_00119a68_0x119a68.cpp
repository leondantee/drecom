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

// Function: entry_00119a68
// Address: 0x119a68 - 0x119a8c
void entry_00119a68_0x119a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119a68_0x119a68");
#endif

    ctx->pc = 0x119a68u;

    // 0x119a68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x119a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a6c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x119a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119a70: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x119a70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119a74: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x119a74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119a78: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x119a78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119a7c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x119a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119a80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x119a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119a84: 0x3e00008  jr          $ra
    ctx->pc = 0x119A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A84u;
        // 0x119a88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119A8Cu;
}
