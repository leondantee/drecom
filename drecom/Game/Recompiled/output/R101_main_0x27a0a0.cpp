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

// Function: R101_main
// Address: 0x27a0a0 - 0x27a0d0
void R101_main_0x27a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R101_main_0x27a0a0");
#endif

    switch (ctx->pc) {
        case 0x27a0b4u: goto label_27a0b4;
        case 0x27a0c0u: goto label_27a0c0;
        default: break;
    }

    ctx->pc = 0x27a0a0u;

    // 0x27a0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27a0a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x27a0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x27a0a8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27a0a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a0ac: 0xc09e834  jal         func_27A0D0
    ctx->pc = 0x27A0ACu;
    SET_GPR_U32(ctx, 31, 0x27A0B4u);
    ctx->pc = 0x27A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A0D0u, 0x27A0ACu, 0x27A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A0B4u;
label_27a0b4:
    // 0x27a0b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a0b8: 0xc09e834  jal         func_27A0D0
    ctx->pc = 0x27A0B8u;
    SET_GPR_U32(ctx, 31, 0x27A0C0u);
    ctx->pc = 0x27A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A0D0u, 0x27A0B8u, 0x27A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A0C0u;
label_27a0c0:
    // 0x27a0c0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x27a0c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a0c4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27a0c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27a0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x27A0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A0D0u;
}
