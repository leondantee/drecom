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

// Function: entry_0012a7a4
// Address: 0x12a7a4 - 0x12a7b8
void entry_0012a7a4_0x12a7a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a7a4_0x12a7a4");
#endif

    switch (ctx->pc) {
        case 0x12a7b0u: goto label_12a7b0;
        default: break;
    }

    ctx->pc = 0x12a7a4u;

    // 0x12a7a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a7a8: 0xc04a0fc  jal         func_1283F0
    ctx->pc = 0x12A7A8u;
    SET_GPR_U32(ctx, 31, 0x12A7B0u);
    ctx->pc = 0x1283F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1283F0u, 0x12A7A8u, 0x12A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7B0u;
label_12a7b0:
    // 0x12a7b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12A7B0u;
    {
        const bool branch_taken_0x12a7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a7b0) {
            ctx->pc = 0x12A7ECu;
            return;
        }
    }
    ctx->pc = 0x12A7B8u;
}
