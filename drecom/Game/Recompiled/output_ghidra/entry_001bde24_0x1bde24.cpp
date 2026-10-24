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

// Function: entry_001bde24
// Address: 0x1bde24 - 0x1bde38
void entry_001bde24_0x1bde24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bde24_0x1bde24");
#endif

    switch (ctx->pc) {
        case 0x1bde2cu: goto label_1bde2c;
        default: break;
    }

    ctx->pc = 0x1bde24u;

    // 0x1bde24: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BDE24u;
    SET_GPR_U32(ctx, 31, 0x1BDE2Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BDE24u, 0x1BDE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE2Cu;
label_1bde2c:
    // 0x1bde2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bde2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bde30: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x1BDE30u;
    {
        const bool branch_taken_0x1bde30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde30) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BDE38u;
}
