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

// Function: entry_001e1958
// Address: 0x1e1958 - 0x1e1988
void entry_001e1958_0x1e1958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1958_0x1e1958");
#endif

    switch (ctx->pc) {
        case 0x1e196cu: goto label_1e196c;
        default: break;
    }

    ctx->pc = 0x1e1958u;

    // 0x1e1958: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e1958u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e195c: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e195cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1960: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e1960u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e1964: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E1964u;
    SET_GPR_U32(ctx, 31, 0x1E196Cu);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E1964u, 0x1E196Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E196Cu;
label_1e196c:
    // 0x1e196c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e196cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e1970: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x1e1970u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e1974: 0x72e0a628  paddub      $s4, $s7, $zero
    ctx->pc = 0x1e1974u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1e1978: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1e1978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e197c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e197cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e1980: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1E1980u;
    {
        const bool branch_taken_0x1e1980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1980) {
            ctx->pc = 0x1E1A00u;
            return;
        }
    }
    ctx->pc = 0x1E1988u;
}
