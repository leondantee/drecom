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

// Function: CdGetEETransSize
// Address: 0x1d94c0 - 0x1d9500
void CdGetEETransSize_0x1d94c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CdGetEETransSize_0x1d94c0");
#endif

    switch (ctx->pc) {
        case 0x1d94e4u: goto label_1d94e4;
        default: break;
    }

    ctx->pc = 0x1d94c0u;

    // 0x1d94c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d94c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d94c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1d94c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d94c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d94c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d94cc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1d94ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d94d0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d94d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d94d4: 0x2445c520  addiu       $a1, $v0, -0x3AE0
    ctx->pc = 0x1d94d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x1d94d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d94d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d94dc: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x1D94DCu;
    SET_GPR_U32(ctx, 31, 0x1D94E4u);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x1D94DCu, 0x1D94E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94E4u;
label_1d94e4:
    // 0x1d94e4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1d94e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d94e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d94e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d94ec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1d94ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d94f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d94f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d94f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d94f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9500u;
}
