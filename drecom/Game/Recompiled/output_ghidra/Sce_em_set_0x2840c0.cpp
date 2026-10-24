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

// Function: Sce_em_set
// Address: 0x2840c0 - 0x2840e8
void Sce_em_set_0x2840c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_em_set_0x2840c0");
#endif

    switch (ctx->pc) {
        case 0x2840d8u: goto label_2840d8;
        default: break;
    }

    ctx->pc = 0x2840c0u;

    // 0x2840c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2840c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2840c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2840c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2840c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2840c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2840cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2840ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2840d0: 0xc05babc  jal         func_16EAF0
    ctx->pc = 0x2840D0u;
    SET_GPR_U32(ctx, 31, 0x2840D8u);
    ctx->pc = 0x16EAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EAF0u, 0x2840D0u, 0x2840D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2840D8u;
label_2840d8:
    // 0x2840d8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2840d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2840dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2840dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2840e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2840E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2840E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2840E8u;
}
