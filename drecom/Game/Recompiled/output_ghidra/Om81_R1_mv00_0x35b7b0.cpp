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

// Function: Om81_R1_mv00
// Address: 0x35b7b0 - 0x35b7d8
void Om81_R1_mv00_0x35b7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om81_R1_mv00_0x35b7b0");
#endif

    switch (ctx->pc) {
        case 0x35b7c8u: goto label_35b7c8;
        default: break;
    }

    ctx->pc = 0x35b7b0u;

    // 0x35b7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b7b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35b7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x35b7b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35b7bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35b7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b7c0: 0xc0d6f38  jal         func_35BCE0
    ctx->pc = 0x35B7C0u;
    SET_GPR_U32(ctx, 31, 0x35B7C8u);
    ctx->pc = 0x35BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BCE0u, 0x35B7C0u, 0x35B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B7C8u;
label_35b7c8:
    // 0x35b7c8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35b7c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b7cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35b7ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35b7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x35B7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B7D8u;
}
