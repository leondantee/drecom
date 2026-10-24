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

// Function: entry_00225d54
// Address: 0x225d54 - 0x225d78
void entry_00225d54_0x225d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225d54_0x225d54");
#endif

    switch (ctx->pc) {
        case 0x225d5cu: goto label_225d5c;
        default: break;
    }

    ctx->pc = 0x225d54u;

    // 0x225d54: 0xc067694  jal         func_19DA50
    ctx->pc = 0x225D54u;
    SET_GPR_U32(ctx, 31, 0x225D5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x225D54u, 0x225D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D5Cu;
label_225d5c:
    // 0x225d5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x225d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225d60: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x225d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x225d64: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x225d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x225d68: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x225d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x225d6c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x225d6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x225d70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225d74: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x225d74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x225d78u;
}
