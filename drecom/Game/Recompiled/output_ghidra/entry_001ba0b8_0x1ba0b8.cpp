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

// Function: entry_001ba0b8
// Address: 0x1ba0b8 - 0x1ba0cc
void entry_001ba0b8_0x1ba0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba0b8_0x1ba0b8");
#endif

    switch (ctx->pc) {
        case 0x1ba0c0u: goto label_1ba0c0;
        default: break;
    }

    ctx->pc = 0x1ba0b8u;

    // 0x1ba0b8: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BA0B8u;
    SET_GPR_U32(ctx, 31, 0x1BA0C0u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BA0B8u, 0x1BA0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0C0u;
label_1ba0c0:
    // 0x1ba0c0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1ba0c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba0c4: 0x100002e3  b           . + 4 + (0x2E3 << 2)
    ctx->pc = 0x1BA0C4u;
    {
        const bool branch_taken_0x1ba0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0c4) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA0CCu;
}
