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

// Function: entry_00117cd8
// Address: 0x117cd8 - 0x117cf4
void entry_00117cd8_0x117cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117cd8_0x117cd8");
#endif

    ctx->pc = 0x117cd8u;

    // 0x117cd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x117cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117cdc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x117cdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117ce0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117ce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117ce4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117cec: 0x3e00008  jr          $ra
    ctx->pc = 0x117CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CECu;
        // 0x117cf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117CF4u;
}
