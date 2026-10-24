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

// Function: entry_001d6fbc
// Address: 0x1d6fbc - 0x1d6fe0
void entry_001d6fbc_0x1d6fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6fbc_0x1d6fbc");
#endif

    switch (ctx->pc) {
        case 0x1d6fccu: goto label_1d6fcc;
        default: break;
    }

    ctx->pc = 0x1d6fbcu;

    // 0x1d6fbc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d6fbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d6fc0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1d6fc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1d6fc4: 0xc075c38  jal         func_1D70E0
    ctx->pc = 0x1D6FC4u;
    SET_GPR_U32(ctx, 31, 0x1D6FCCu);
    ctx->pc = 0x1D70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70E0u, 0x1D6FC4u, 0x1D6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6FCCu;
label_1d6fcc:
    // 0x1d6fcc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d6fccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d6fd0: 0x2309823  subu        $s3, $s1, $s0
    ctx->pc = 0x1d6fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1d6fd4: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x1d6fd4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d6fd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6FD8u;
    {
        const bool branch_taken_0x1d6fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6fd8) {
            ctx->pc = 0x1D7000u;
            return;
        }
    }
    ctx->pc = 0x1D6FE0u;
}
