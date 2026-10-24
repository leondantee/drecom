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

// Function: entry_002d5f6c
// Address: 0x2d5f6c - 0x2d5f88
void entry_002d5f6c_0x2d5f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d5f6c_0x2d5f6c");
#endif

    switch (ctx->pc) {
        case 0x2d5f78u: goto label_2d5f78;
        default: break;
    }

    ctx->pc = 0x2d5f6cu;

    // 0x2d5f6c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d5f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f70: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D5F70u;
    SET_GPR_U32(ctx, 31, 0x2D5F78u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D5F70u, 0x2D5F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5F78u;
label_2d5f78:
    // 0x2d5f78: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d5f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f7c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2d5f7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2d5f80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d5f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5f84: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2d5f84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2d5f88u;
}
