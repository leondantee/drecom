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

// Function: entry_0035b274
// Address: 0x35b274 - 0x35b280
void entry_0035b274_0x35b274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035b274_0x35b274");
#endif

    switch (ctx->pc) {
        case 0x35b27cu: goto label_35b27c;
        default: break;
    }

    ctx->pc = 0x35b274u;

    // 0x35b274: 0xc0d6d4c  jal         func_35B530
    ctx->pc = 0x35B274u;
    SET_GPR_U32(ctx, 31, 0x35B27Cu);
    ctx->pc = 0x35B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B530u, 0x35B274u, 0x35B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B27Cu;
label_35b27c:
    // 0x35b27c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x35b280u;
}
