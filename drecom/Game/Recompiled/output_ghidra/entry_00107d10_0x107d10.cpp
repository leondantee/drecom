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

// Function: entry_00107d10
// Address: 0x107d10 - 0x107d30
void entry_00107d10_0x107d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107d10_0x107d10");
#endif

    ctx->pc = 0x107d10u;

    // 0x107d10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x107d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107d14: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x107d14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107d18: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x107d18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107d1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107d1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107d20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107d28: 0x3e00008  jr          $ra
    ctx->pc = 0x107D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D28u;
        // 0x107d2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107D30u;
}
