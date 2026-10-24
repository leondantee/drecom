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

// Function: entry_00117c48
// Address: 0x117c48 - 0x117c6c
void entry_00117c48_0x117c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117c48_0x117c48");
#endif

    ctx->pc = 0x117c48u;

    // 0x117c48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x117c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x117c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117c50: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x117c50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117c54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x117c54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117c58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117c58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117c5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117c64: 0x3e00008  jr          $ra
    ctx->pc = 0x117C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C64u;
        // 0x117c68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117C6Cu;
}
