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

// Function: entry_001e21b8
// Address: 0x1e21b8 - 0x1e21e0
void entry_001e21b8_0x1e21b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e21b8_0x1e21b8");
#endif

    switch (ctx->pc) {
        case 0x1e21d8u: goto label_1e21d8;
        default: break;
    }

    ctx->pc = 0x1e21b8u;

    // 0x1e21b8: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e21b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e21bc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1e21bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e21c0: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x1e21c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e21c4: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x1e21c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e21c8: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1e21c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e21cc: 0x72604628  paddub      $t0, $s3, $zero
    ctx->pc = 0x1e21ccu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e21d0: 0xc077f60  jal         func_1DFD80
    ctx->pc = 0x1E21D0u;
    SET_GPR_U32(ctx, 31, 0x1E21D8u);
    ctx->pc = 0x1DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD80u, 0x1E21D0u, 0x1E21D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E21D8u;
label_1e21d8:
    // 0x1e21d8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x1e21d8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e21dc: 0x0  nop
    ctx->pc = 0x1e21dcu;
    // NOP
    ctx->pc = 0x1e21e0u;
}
