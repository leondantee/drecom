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

// Function: entry_001d6fe0
// Address: 0x1d6fe0 - 0x1d7000
void entry_001d6fe0_0x1d6fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6fe0_0x1d6fe0");
#endif

    switch (ctx->pc) {
        case 0x1d6ff0u: goto label_1d6ff0;
        default: break;
    }

    ctx->pc = 0x1d6fe0u;

    // 0x1d6fe0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d6fe0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d6fe4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1d6fe4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1d6fe8: 0xc075cf0  jal         func_1D73C0
    ctx->pc = 0x1D6FE8u;
    SET_GPR_U32(ctx, 31, 0x1D6FF0u);
    ctx->pc = 0x1D73C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D73C0u, 0x1D6FE8u, 0x1D6FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6FF0u;
label_1d6ff0:
    // 0x1d6ff0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d6ff0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d6ff4: 0x2309823  subu        $s3, $s1, $s0
    ctx->pc = 0x1d6ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1d6ff8: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x1d6ff8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d6ffc: 0x0  nop
    ctx->pc = 0x1d6ffcu;
    // NOP
    ctx->pc = 0x1d7000u;
}
