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

// Function: oni_Calc_make_matrix
// Address: 0x25e970 - 0x25e998
void oni_Calc_make_matrix_0x25e970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("oni_Calc_make_matrix_0x25e970");
#endif

    switch (ctx->pc) {
        case 0x25e988u: goto label_25e988;
        default: break;
    }

    ctx->pc = 0x25e970u;

    // 0x25e970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25e970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25e974: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x25e974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x25e978: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x25e978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x25e97c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25e980: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x25E980u;
    SET_GPR_U32(ctx, 31, 0x25E988u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x25E980u, 0x25E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E988u;
label_25e988:
    // 0x25e988: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x25e988u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e98c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25e98cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25e990: 0x3e00008  jr          $ra
    ctx->pc = 0x25E990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E998u;
}
