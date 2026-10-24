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

// Function: entry_0027a490
// Address: 0x27a490 - 0x27a4a0
void entry_0027a490_0x27a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a490_0x27a490");
#endif

    ctx->pc = 0x27a490u;

    // 0x27a490: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27a490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27a494: 0x244407c8  addiu       $a0, $v0, 0x7C8
    ctx->pc = 0x27a494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1992));
    // 0x27a498: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27A498u;
    SET_GPR_U32(ctx, 31, 0x27A4A0u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27A498u, 0x27A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4A0u;
}
