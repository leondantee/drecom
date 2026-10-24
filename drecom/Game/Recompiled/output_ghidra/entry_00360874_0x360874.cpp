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

// Function: entry_00360874
// Address: 0x360874 - 0x360880
void entry_00360874_0x360874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360874_0x360874");
#endif

    switch (ctx->pc) {
        case 0x36087cu: goto label_36087c;
        default: break;
    }

    ctx->pc = 0x360874u;

    // 0x360874: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x360874u;
    SET_GPR_U32(ctx, 31, 0x36087Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x360874u, 0x36087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36087Cu;
label_36087c:
    // 0x36087c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36087cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x360880u;
}
