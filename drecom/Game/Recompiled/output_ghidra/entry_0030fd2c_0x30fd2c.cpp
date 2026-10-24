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

// Function: entry_0030fd2c
// Address: 0x30fd2c - 0x30fd44
void entry_0030fd2c_0x30fd2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030fd2c_0x30fd2c");
#endif

    switch (ctx->pc) {
        case 0x30fd40u: goto label_30fd40;
        default: break;
    }

    ctx->pc = 0x30fd2cu;

    // 0x30fd2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30fd30: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x30fd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x30fd34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd38: 0xc05cd90  jal         func_173640
    ctx->pc = 0x30FD38u;
    SET_GPR_U32(ctx, 31, 0x30FD40u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x30FD38u, 0x30FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD40u;
label_30fd40:
    // 0x30fd40: 0x24500016  addiu       $s0, $v0, 0x16
    ctx->pc = 0x30fd40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
    ctx->pc = 0x30fd44u;
}
