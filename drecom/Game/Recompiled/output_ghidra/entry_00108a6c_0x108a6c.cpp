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

// Function: entry_00108a6c
// Address: 0x108a6c - 0x108a90
void entry_00108a6c_0x108a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108a6c_0x108a6c");
#endif

    ctx->pc = 0x108a6cu;

    // 0x108a6c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x108a6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108a70: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x108a70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108a74: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x108a74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108a78: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x108a78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108a7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x108a7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108a80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108a80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108a88: 0x3e00008  jr          $ra
    ctx->pc = 0x108A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A88u;
        // 0x108a8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108A90u;
}
