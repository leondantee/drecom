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

// Function: entry_0036e658
// Address: 0x36e658 - 0x36e664
void entry_0036e658_0x36e658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e658_0x36e658");
#endif

    switch (ctx->pc) {
        case 0x36e660u: goto label_36e660;
        default: break;
    }

    ctx->pc = 0x36e658u;

    // 0x36e658: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E658u;
    SET_GPR_U32(ctx, 31, 0x36E660u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E658u, 0x36E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E660u;
label_36e660:
    // 0x36e660: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x36e664u;
}
