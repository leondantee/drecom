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

// Function: entry_002166b8
// Address: 0x2166b8 - 0x2166d8
void entry_002166b8_0x2166b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002166b8_0x2166b8");
#endif

    ctx->pc = 0x2166b8u;

    // 0x2166b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2166b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2166bc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2166bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2166c0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2166c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2166c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2166c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2166c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2166c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2166cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2166ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2166d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2166D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2166D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166D0u;
        // 0x2166d4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2166D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2166D8u;
}
