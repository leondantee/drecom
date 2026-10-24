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

// Function: entry_0036e708
// Address: 0x36e708 - 0x36e714
void entry_0036e708_0x36e708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e708_0x36e708");
#endif

    switch (ctx->pc) {
        case 0x36e710u: goto label_36e710;
        default: break;
    }

    ctx->pc = 0x36e708u;

    // 0x36e708: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E708u;
    SET_GPR_U32(ctx, 31, 0x36E710u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E708u, 0x36E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E710u;
label_36e710:
    // 0x36e710: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x36e714u;
}
