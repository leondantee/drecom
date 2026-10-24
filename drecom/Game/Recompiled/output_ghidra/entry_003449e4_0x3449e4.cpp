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

// Function: entry_003449e4
// Address: 0x3449e4 - 0x3449fc
void entry_003449e4_0x3449e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003449e4_0x3449e4");
#endif

    switch (ctx->pc) {
        case 0x3449ecu: goto label_3449ec;
        default: break;
    }

    ctx->pc = 0x3449e4u;

    // 0x3449e4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x3449E4u;
    SET_GPR_U32(ctx, 31, 0x3449ECu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x3449E4u, 0x3449ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449ECu;
label_3449ec:
    // 0x3449ec: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3449ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3449f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3449f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3449f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3449F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3449F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3449FCu;
}
