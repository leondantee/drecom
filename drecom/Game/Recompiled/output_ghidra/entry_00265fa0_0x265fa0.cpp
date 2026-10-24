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

// Function: entry_00265fa0
// Address: 0x265fa0 - 0x265fb8
void entry_00265fa0_0x265fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265fa0_0x265fa0");
#endif

    switch (ctx->pc) {
        case 0x265fb0u: goto label_265fb0;
        default: break;
    }

    ctx->pc = 0x265fa0u;

    // 0x265fa0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265fa0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265fa4: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x265fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x265fa8: 0xc05be64  jal         func_16F990
    ctx->pc = 0x265FA8u;
    SET_GPR_U32(ctx, 31, 0x265FB0u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x265FA8u, 0x265FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FB0u;
label_265fb0:
    // 0x265fb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x265FB0u;
    {
        const bool branch_taken_0x265fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265fb0) {
            ctx->pc = 0x265FC8u;
            return;
        }
    }
    ctx->pc = 0x265FB8u;
}
