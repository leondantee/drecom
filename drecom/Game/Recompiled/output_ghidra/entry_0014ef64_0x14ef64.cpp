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

// Function: entry_0014ef64
// Address: 0x14ef64 - 0x14ef78
void entry_0014ef64_0x14ef64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ef64_0x14ef64");
#endif

    switch (ctx->pc) {
        case 0x14ef70u: goto label_14ef70;
        default: break;
    }

    ctx->pc = 0x14ef64u;

    // 0x14ef64: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14ef68: 0xc0c5360  jal         func_314D80
    ctx->pc = 0x14EF68u;
    SET_GPR_U32(ctx, 31, 0x14EF70u);
    ctx->pc = 0x314D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314D80u, 0x14EF68u, 0x14EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF70u;
label_14ef70:
    // 0x14ef70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14EF70u;
    {
        const bool branch_taken_0x14ef70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef70) {
            ctx->pc = 0x14EF98u;
            return;
        }
    }
    ctx->pc = 0x14EF78u;
}
