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

// Function: entry_00110a80
// Address: 0x110a80 - 0x110aa0
void entry_00110a80_0x110a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110a80_0x110a80");
#endif

    ctx->pc = 0x110a80u;

    // 0x110a80: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x110a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x110a84: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x110a84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x110a88: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x110a88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x110a8c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x110a8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110a90: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x110a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110a94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x110a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110a98: 0x3e00008  jr          $ra
    ctx->pc = 0x110A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A98u;
        // 0x110a9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110AA0u;
}
