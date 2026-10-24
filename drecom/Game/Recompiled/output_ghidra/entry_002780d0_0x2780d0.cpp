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

// Function: entry_002780d0
// Address: 0x2780d0 - 0x2780e4
void entry_002780d0_0x2780d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002780d0_0x2780d0");
#endif

    switch (ctx->pc) {
        case 0x2780dcu: goto label_2780dc;
        default: break;
    }

    ctx->pc = 0x2780d0u;

    // 0x2780d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2780d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2780d4: 0xc084964  jal         func_212590
    ctx->pc = 0x2780D4u;
    SET_GPR_U32(ctx, 31, 0x2780DCu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x2780D4u, 0x2780DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2780DCu;
label_2780dc:
    // 0x2780dc: 0x1000fee2  b           . + 4 + (-0x11E << 2)
    ctx->pc = 0x2780DCu;
    {
        const bool branch_taken_0x2780dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2780dc) {
            ctx->pc = 0x277C68u;
            return;
        }
    }
    ctx->pc = 0x2780E4u;
}
