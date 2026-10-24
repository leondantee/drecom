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

// Function: entry_0024ba14
// Address: 0x24ba14 - 0x24ba24
void entry_0024ba14_0x24ba14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024ba14_0x24ba14");
#endif

    switch (ctx->pc) {
        case 0x24ba1cu: goto label_24ba1c;
        default: break;
    }

    ctx->pc = 0x24ba14u;

    // 0x24ba14: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24BA14u;
    SET_GPR_U32(ctx, 31, 0x24BA1Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24BA14u, 0x24BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA1Cu;
label_24ba1c:
    // 0x24ba1c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24ba20: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x24ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
    ctx->pc = 0x24ba24u;
}
