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

// Function: entry_002d3f20
// Address: 0x2d3f20 - 0x2d3f2c
void entry_002d3f20_0x2d3f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d3f20_0x2d3f20");
#endif

    switch (ctx->pc) {
        case 0x2d3f28u: goto label_2d3f28;
        default: break;
    }

    ctx->pc = 0x2d3f20u;

    // 0x2d3f20: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D3F20u;
    SET_GPR_U32(ctx, 31, 0x2D3F28u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D3F20u, 0x2D3F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F28u;
label_2d3f28:
    // 0x2d3f28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x2d3f2cu;
}
