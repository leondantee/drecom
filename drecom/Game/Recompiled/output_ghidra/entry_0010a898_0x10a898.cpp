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

// Function: entry_0010a898
// Address: 0x10a898 - 0x10a8bc
void entry_0010a898_0x10a898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a898_0x10a898");
#endif

    ctx->pc = 0x10a898u;

    // 0x10a898: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x10a898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a89c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10a89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a8a0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10a8a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a8a4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10a8a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a8a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10a8a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a8ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10a8acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a8b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8B4u;
        // 0x10a8b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A8BCu;
}
