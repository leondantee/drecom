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

// Function: entry_001b690c
// Address: 0x1b690c - 0x1b6920
void entry_001b690c_0x1b690c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b690c_0x1b690c");
#endif

    switch (ctx->pc) {
        case 0x1b6914u: goto label_1b6914;
        default: break;
    }

    ctx->pc = 0x1b690cu;

    // 0x1b690c: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1B690Cu;
    SET_GPR_U32(ctx, 31, 0x1B6914u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B690Cu, 0x1B6914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6914u;
label_1b6914:
    // 0x1b6914: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b6914u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6918: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x1B6918u;
    {
        const bool branch_taken_0x1b6918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6918) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6920u;
}
