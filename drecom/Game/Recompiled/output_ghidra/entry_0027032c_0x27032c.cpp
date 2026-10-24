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

// Function: entry_0027032c
// Address: 0x27032c - 0x270338
void entry_0027032c_0x27032c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027032c_0x27032c");
#endif

    switch (ctx->pc) {
        case 0x270334u: goto label_270334;
        default: break;
    }

    ctx->pc = 0x27032cu;

    // 0x27032c: 0xc0bc094  jal         func_2F0250
    ctx->pc = 0x27032Cu;
    SET_GPR_U32(ctx, 31, 0x270334u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x27032Cu, 0x270334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270334u;
label_270334:
    // 0x270334: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x270334u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x270338u;
}
