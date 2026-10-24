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

// Function: default
// Address: 0x1414b8 - 0x1414d4
void ps2_default_0x1414b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1414b8");
#endif

    switch (ctx->pc) {
        case 0x1414c8u: goto label_1414c8;
        default: break;
    }

    ctx->pc = 0x1414b8u;

    // 0x1414b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1414b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1414bc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1414bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1414c0: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1414C0u;
    SET_GPR_U32(ctx, 31, 0x1414C8u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1414C0u, 0x1414C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1414C8u;
label_1414c8:
    // 0x1414c8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1414c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1414cc: 0x1000fea6  b           . + 4 + (-0x15A << 2)
    ctx->pc = 0x1414CCu;
    {
        const bool branch_taken_0x1414cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1414cc) {
            ctx->pc = 0x140F68u;
            return;
        }
    }
    ctx->pc = 0x1414D4u;
}
