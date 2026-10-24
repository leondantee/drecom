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

// Function: entry_0016f900
// Address: 0x16f900 - 0x16f914
void entry_0016f900_0x16f900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f900_0x16f900");
#endif

    ctx->pc = 0x16f900u;

    // 0x16f900: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x16f900u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x16f904: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x16f904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x16f908: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x16f908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x16f90c: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x16F90Cu;
    SET_GPR_U32(ctx, 31, 0x16F914u);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x16F90Cu, 0x16F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F914u;
}
