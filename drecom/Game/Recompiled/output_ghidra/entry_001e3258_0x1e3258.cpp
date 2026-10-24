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

// Function: entry_001e3258
// Address: 0x1e3258 - 0x1e3278
void entry_001e3258_0x1e3258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3258_0x1e3258");
#endif

    ctx->pc = 0x1e3258u;

    // 0x1e3258: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e3258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e325c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1e325cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3260: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x1e3260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3264: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x1e3264u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e3268: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1e3268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e326c: 0x72604628  paddub      $t0, $s3, $zero
    ctx->pc = 0x1e326cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e3270: 0xc077f60  jal         func_1DFD80
    ctx->pc = 0x1E3270u;
    SET_GPR_U32(ctx, 31, 0x1E3278u);
    ctx->pc = 0x1DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD80u, 0x1E3270u, 0x1E3278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3278u;
}
