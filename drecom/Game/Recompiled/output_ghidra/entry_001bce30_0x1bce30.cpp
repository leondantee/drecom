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

// Function: entry_001bce30
// Address: 0x1bce30 - 0x1bce3c
void entry_001bce30_0x1bce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bce30_0x1bce30");
#endif

    switch (ctx->pc) {
        case 0x1bce38u: goto label_1bce38;
        default: break;
    }

    ctx->pc = 0x1bce30u;

    // 0x1bce30: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BCE30u;
    SET_GPR_U32(ctx, 31, 0x1BCE38u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BCE30u, 0x1BCE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE38u;
label_1bce38:
    // 0x1bce38: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1bce38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1bce3cu;
}
