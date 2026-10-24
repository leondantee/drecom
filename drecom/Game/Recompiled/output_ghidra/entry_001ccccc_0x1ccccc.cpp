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

// Function: entry_001ccccc
// Address: 0x1ccccc - 0x1ccce0
void entry_001ccccc_0x1ccccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccccc_0x1ccccc");
#endif

    switch (ctx->pc) {
        case 0x1cccd4u: goto label_1cccd4;
        default: break;
    }

    ctx->pc = 0x1cccccu;

    // 0x1ccccc: 0xc058478  jal         func_1611E0
    ctx->pc = 0x1CCCCCu;
    SET_GPR_U32(ctx, 31, 0x1CCCD4u);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x1CCCCCu, 0x1CCCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCD4u;
label_1cccd4:
    // 0x1cccd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cccd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cccd8: 0x148003a5  bnez        $a0, . + 4 + (0x3A5 << 2)
    ctx->pc = 0x1CCCD8u;
    {
        const bool branch_taken_0x1cccd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cccd8) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CCCE0u;
}
