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

// Function: entry_0019f980
// Address: 0x19f980 - 0x19f98c
void entry_0019f980_0x19f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f980_0x19f980");
#endif

    switch (ctx->pc) {
        case 0x19f988u: goto label_19f988;
        default: break;
    }

    ctx->pc = 0x19f980u;

    // 0x19f980: 0xc0ce718  jal         func_339C60
    ctx->pc = 0x19F980u;
    SET_GPR_U32(ctx, 31, 0x19F988u);
    ctx->pc = 0x339C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339C60u, 0x19F980u, 0x19F988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F988u;
label_19f988:
    // 0x19f988: 0x97a40018  lhu         $a0, 0x18($sp)
    ctx->pc = 0x19f988u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x19f98cu;
}
