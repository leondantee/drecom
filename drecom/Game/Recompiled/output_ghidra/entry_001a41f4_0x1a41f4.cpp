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

// Function: entry_001a41f4
// Address: 0x1a41f4 - 0x1a4208
void entry_001a41f4_0x1a41f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a41f4_0x1a41f4");
#endif

    switch (ctx->pc) {
        case 0x1a4200u: goto label_1a4200;
        default: break;
    }

    ctx->pc = 0x1a41f4u;

    // 0x1a41f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a41f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a41f8: 0xc06908c  jal         func_1A4230
    ctx->pc = 0x1A41F8u;
    SET_GPR_U32(ctx, 31, 0x1A4200u);
    ctx->pc = 0x1A4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4230u, 0x1A41F8u, 0x1A4200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4200u;
label_1a4200:
    // 0x1a4200: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4200u;
    {
        const bool branch_taken_0x1a4200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4200) {
            ctx->pc = 0x1A4214u;
            return;
        }
    }
    ctx->pc = 0x1A4208u;
}
