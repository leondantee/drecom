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

// Function: Sce_om_set
// Address: 0x2840f0 - 0x284118
void Sce_om_set_0x2840f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_om_set_0x2840f0");
#endif

    switch (ctx->pc) {
        case 0x284108u: goto label_284108;
        default: break;
    }

    ctx->pc = 0x2840f0u;

    // 0x2840f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2840f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2840f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2840f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2840f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2840f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2840fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2840fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x284100: 0xc099aa8  jal         func_266AA0
    ctx->pc = 0x284100u;
    SET_GPR_U32(ctx, 31, 0x284108u);
    ctx->pc = 0x266AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266AA0u, 0x284100u, 0x284108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284108u;
label_284108:
    // 0x284108: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x284108u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28410c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28410cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x284110: 0x3e00008  jr          $ra
    ctx->pc = 0x284110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284118u;
}
