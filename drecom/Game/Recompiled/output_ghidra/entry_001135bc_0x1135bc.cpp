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

// Function: entry_001135bc
// Address: 0x1135bc - 0x1135e8
void entry_001135bc_0x1135bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001135bc_0x1135bc");
#endif

    ctx->pc = 0x1135bcu;

    // 0x1135bc: 0xdfbe02f0  ld          $fp, 0x2F0($sp)
    ctx->pc = 0x1135bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1135c0: 0xdfb702e0  ld          $s7, 0x2E0($sp)
    ctx->pc = 0x1135c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1135c4: 0xdfb602d0  ld          $s6, 0x2D0($sp)
    ctx->pc = 0x1135c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1135c8: 0xdfb502c0  ld          $s5, 0x2C0($sp)
    ctx->pc = 0x1135c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1135cc: 0xdfb402b0  ld          $s4, 0x2B0($sp)
    ctx->pc = 0x1135ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1135d0: 0xdfb302a0  ld          $s3, 0x2A0($sp)
    ctx->pc = 0x1135d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1135d4: 0xdfb20290  ld          $s2, 0x290($sp)
    ctx->pc = 0x1135d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1135d8: 0xdfb10280  ld          $s1, 0x280($sp)
    ctx->pc = 0x1135d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1135dc: 0xdfb00270  ld          $s0, 0x270($sp)
    ctx->pc = 0x1135dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1135e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1135E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1135E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135E0u;
        // 0x1135e4: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1135E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1135E8u;
}
