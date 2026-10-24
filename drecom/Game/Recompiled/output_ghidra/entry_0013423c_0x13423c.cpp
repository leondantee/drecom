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

// Function: entry_0013423c
// Address: 0x13423c - 0x134248
void entry_0013423c_0x13423c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013423c_0x13423c");
#endif

    switch (ctx->pc) {
        case 0x134244u: goto label_134244;
        default: break;
    }

    ctx->pc = 0x13423cu;

    // 0x13423c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x13423Cu;
    SET_GPR_U32(ctx, 31, 0x134244u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x13423Cu, 0x134244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134244u;
label_134244:
    // 0x134244: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x134244u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x134248u;
}
