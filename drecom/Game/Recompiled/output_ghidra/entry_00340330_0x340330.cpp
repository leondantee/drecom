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

// Function: entry_00340330
// Address: 0x340330 - 0x34034c
void entry_00340330_0x340330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340330_0x340330");
#endif

    switch (ctx->pc) {
        case 0x340338u: goto label_340338;
        default: break;
    }

    ctx->pc = 0x340330u;

    // 0x340330: 0xc067c24  jal         func_19F090
    ctx->pc = 0x340330u;
    SET_GPR_U32(ctx, 31, 0x340338u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x340330u, 0x340338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340338u;
label_340338:
    // 0x340338: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x340338u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34033c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34033cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340340: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x340340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x340344: 0x3e00008  jr          $ra
    ctx->pc = 0x340344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34034Cu;
}
