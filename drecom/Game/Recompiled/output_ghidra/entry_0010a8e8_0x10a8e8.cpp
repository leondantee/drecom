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

// Function: entry_0010a8e8
// Address: 0x10a8e8 - 0x10a8f4
void entry_0010a8e8_0x10a8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a8e8_0x10a8e8");
#endif

    switch (ctx->pc) {
        case 0x10a8f0u: goto label_10a8f0;
        default: break;
    }

    ctx->pc = 0x10a8e8u;

    // 0x10a8e8: 0xc0429e6  jal         func_10A798
    ctx->pc = 0x10A8E8u;
    SET_GPR_U32(ctx, 31, 0x10A8F0u);
    ctx->pc = 0x10A798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A798u, 0x10A8E8u, 0x10A8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8F0u;
label_10a8f0:
    // 0x10a8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x10a8f4u;
}
