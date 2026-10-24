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

// Function: entry_002fce8c
// Address: 0x2fce8c - 0x2fceb4
void entry_002fce8c_0x2fce8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fce8c_0x2fce8c");
#endif

    switch (ctx->pc) {
        case 0x2fceb0u: goto label_2fceb0;
        default: break;
    }

    ctx->pc = 0x2fce8cu;

    // 0x2fce8c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2fce8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fce90: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x2fce90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fce94: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fce94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fce98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fce98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fce9c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2fce9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fcea0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2fcea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcea4: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x2fcea4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fcea8: 0xc065580  jal         func_195600
    ctx->pc = 0x2FCEA8u;
    SET_GPR_U32(ctx, 31, 0x2FCEB0u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FCEA8u, 0x2FCEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCEB0u;
label_2fceb0:
    // 0x2fceb0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2fceb0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2fceb4u;
}
