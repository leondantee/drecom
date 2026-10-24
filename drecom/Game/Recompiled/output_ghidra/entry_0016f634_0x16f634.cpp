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

// Function: entry_0016f634
// Address: 0x16f634 - 0x16f648
void entry_0016f634_0x16f634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f634_0x16f634");
#endif

    switch (ctx->pc) {
        case 0x16f640u: goto label_16f640;
        default: break;
    }

    ctx->pc = 0x16f634u;

    // 0x16f634: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f634u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f638: 0xc06bf40  jal         func_1AFD00
    ctx->pc = 0x16F638u;
    SET_GPR_U32(ctx, 31, 0x16F640u);
    ctx->pc = 0x1AFD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFD00u, 0x16F638u, 0x16F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F640u;
label_16f640:
    // 0x16f640: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x16f640u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16f644: 0x0  nop
    ctx->pc = 0x16f644u;
    // NOP
    ctx->pc = 0x16f648u;
}
