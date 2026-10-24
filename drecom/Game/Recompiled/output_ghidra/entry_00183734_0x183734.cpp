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

// Function: entry_00183734
// Address: 0x183734 - 0x183760
void entry_00183734_0x183734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183734_0x183734");
#endif

    switch (ctx->pc) {
        case 0x183740u: goto label_183740;
        default: break;
    }

    ctx->pc = 0x183734u;

    // 0x183734: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x183734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183738: 0xc060dd8  jal         func_183760
    ctx->pc = 0x183738u;
    SET_GPR_U32(ctx, 31, 0x183740u);
    ctx->pc = 0x183760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183760u, 0x183738u, 0x183740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183740u;
label_183740:
    // 0x183740: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x183740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x183744: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x183744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183748: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x183748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x18374c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x18374cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183754: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x183754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183758: 0x3e00008  jr          $ra
    ctx->pc = 0x183758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183760u;
}
