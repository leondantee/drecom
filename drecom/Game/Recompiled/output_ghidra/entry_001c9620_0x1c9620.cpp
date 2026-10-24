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

// Function: entry_001c9620
// Address: 0x1c9620 - 0x1c962c
void entry_001c9620_0x1c9620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9620_0x1c9620");
#endif

    switch (ctx->pc) {
        case 0x1c9628u: goto label_1c9628;
        default: break;
    }

    ctx->pc = 0x1c9620u;

    // 0x1c9620: 0xc05774c  jal         func_15DD30
    ctx->pc = 0x1C9620u;
    SET_GPR_U32(ctx, 31, 0x1C9628u);
    ctx->pc = 0x15DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DD30u, 0x1C9620u, 0x1C9628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9628u;
label_1c9628:
    // 0x1c9628: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c9628u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1c962cu;
}
