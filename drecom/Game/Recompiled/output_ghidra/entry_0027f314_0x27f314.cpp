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

// Function: entry_0027f314
// Address: 0x27f314 - 0x27f334
void entry_0027f314_0x27f314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f314_0x27f314");
#endif

    switch (ctx->pc) {
        case 0x27f31cu: goto label_27f31c;
        default: break;
    }

    ctx->pc = 0x27f314u;

    // 0x27f314: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27F314u;
    SET_GPR_U32(ctx, 31, 0x27F31Cu);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27F314u, 0x27F31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F31Cu;
label_27f31c:
    // 0x27f31c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x27f31cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f320: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f328: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27f328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27f32c: 0x3e00008  jr          $ra
    ctx->pc = 0x27F32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F334u;
}
