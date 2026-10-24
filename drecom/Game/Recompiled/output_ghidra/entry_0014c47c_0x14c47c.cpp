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

// Function: entry_0014c47c
// Address: 0x14c47c - 0x14c488
void entry_0014c47c_0x14c47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c47c_0x14c47c");
#endif

    switch (ctx->pc) {
        case 0x14c484u: goto label_14c484;
        default: break;
    }

    ctx->pc = 0x14c47cu;

    // 0x14c47c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14C47Cu;
    SET_GPR_U32(ctx, 31, 0x14C484u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14C47Cu, 0x14C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C484u;
label_14c484:
    // 0x14c484: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14c484u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14c488u;
}
