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

// Function: entry_0035bf64
// Address: 0x35bf64 - 0x35bf70
void entry_0035bf64_0x35bf64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035bf64_0x35bf64");
#endif

    switch (ctx->pc) {
        case 0x35bf6cu: goto label_35bf6c;
        default: break;
    }

    ctx->pc = 0x35bf64u;

    // 0x35bf64: 0xc0d70c4  jal         func_35C310
    ctx->pc = 0x35BF64u;
    SET_GPR_U32(ctx, 31, 0x35BF6Cu);
    ctx->pc = 0x35C310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C310u, 0x35BF64u, 0x35BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF6Cu;
label_35bf6c:
    // 0x35bf6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35bf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x35bf70u;
}
