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

// Function: entry_0033c054
// Address: 0x33c054 - 0x33c068
void entry_0033c054_0x33c054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c054_0x33c054");
#endif

    switch (ctx->pc) {
        case 0x33c064u: goto label_33c064;
        default: break;
    }

    ctx->pc = 0x33c054u;

    // 0x33c054: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33C054u;
    {
        const bool branch_taken_0x33c054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c054) {
            ctx->pc = 0x33C068u;
            return;
        }
    }
    ctx->pc = 0x33C05Cu;
    // 0x33c05c: 0xc0cf69c  jal         func_33DA70
    ctx->pc = 0x33C05Cu;
    SET_GPR_U32(ctx, 31, 0x33C064u);
    ctx->pc = 0x33DA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DA70u, 0x33C05Cu, 0x33C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C064u;
label_33c064:
    // 0x33c064: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33c064u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x33c068u;
}
