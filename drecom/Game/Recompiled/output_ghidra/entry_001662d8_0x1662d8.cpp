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

// Function: entry_001662d8
// Address: 0x1662d8 - 0x1662fc
void entry_001662d8_0x1662d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001662d8_0x1662d8");
#endif

    switch (ctx->pc) {
        case 0x1662e0u: goto label_1662e0;
        default: break;
    }

    ctx->pc = 0x1662d8u;

    // 0x1662d8: 0xc06b054  jal         func_1AC150
    ctx->pc = 0x1662D8u;
    SET_GPR_U32(ctx, 31, 0x1662E0u);
    ctx->pc = 0x1AC150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC150u, 0x1662D8u, 0x1662E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1662E0u;
label_1662e0:
    // 0x1662e0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1662e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1662e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1662e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1662e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1662e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1662ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1662ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1662f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1662f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1662f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1662F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1662F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1662FCu;
}
