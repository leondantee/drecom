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

// Function: entry_0012a718
// Address: 0x12a718 - 0x12a72c
void entry_0012a718_0x12a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a718_0x12a718");
#endif

    switch (ctx->pc) {
        case 0x12a724u: goto label_12a724;
        default: break;
    }

    ctx->pc = 0x12a718u;

    // 0x12a718: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a71c: 0xc0495b8  jal         func_1256E0
    ctx->pc = 0x12A71Cu;
    SET_GPR_U32(ctx, 31, 0x12A724u);
    ctx->pc = 0x1256E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1256E0u, 0x12A71Cu, 0x12A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A724u;
label_12a724:
    // 0x12a724: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x12A724u;
    {
        const bool branch_taken_0x12a724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a724) {
            ctx->pc = 0x12A7ECu;
            return;
        }
    }
    ctx->pc = 0x12A72Cu;
}
