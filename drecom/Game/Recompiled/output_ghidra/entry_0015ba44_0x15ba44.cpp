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

// Function: entry_0015ba44
// Address: 0x15ba44 - 0x15ba58
void entry_0015ba44_0x15ba44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ba44_0x15ba44");
#endif

    switch (ctx->pc) {
        case 0x15ba50u: goto label_15ba50;
        default: break;
    }

    ctx->pc = 0x15ba44u;

    // 0x15ba44: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15ba44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15ba48: 0xc057124  jal         func_15C490
    ctx->pc = 0x15BA48u;
    SET_GPR_U32(ctx, 31, 0x15BA50u);
    ctx->pc = 0x15C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C490u, 0x15BA48u, 0x15BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA50u;
label_15ba50:
    // 0x15ba50: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x15BA50u;
    {
        const bool branch_taken_0x15ba50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba50) {
            ctx->pc = 0x15BC5Cu;
            return;
        }
    }
    ctx->pc = 0x15BA58u;
}
