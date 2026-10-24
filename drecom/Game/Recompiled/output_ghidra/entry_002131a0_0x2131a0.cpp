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

// Function: entry_002131a0
// Address: 0x2131a0 - 0x2131c0
void entry_002131a0_0x2131a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002131a0_0x2131a0");
#endif

    switch (ctx->pc) {
        case 0x2131a8u: goto label_2131a8;
        default: break;
    }

    ctx->pc = 0x2131a0u;

    // 0x2131a0: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x2131A0u;
    SET_GPR_U32(ctx, 31, 0x2131A8u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x2131A0u, 0x2131A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2131A8u;
label_2131a8:
    // 0x2131a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2131a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2131ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2131acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2131b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2131b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2131b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2131b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2131b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2131B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2131BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131B8u;
        // 0x2131bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2131B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2131C0u;
}
