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

// Function: entry_0021ddf8
// Address: 0x21ddf8 - 0x21de04
void entry_0021ddf8_0x21ddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ddf8_0x21ddf8");
#endif

    switch (ctx->pc) {
        case 0x21de00u: goto label_21de00;
        default: break;
    }

    ctx->pc = 0x21ddf8u;

    // 0x21ddf8: 0xc0c9918  jal         func_326460
    ctx->pc = 0x21DDF8u;
    SET_GPR_U32(ctx, 31, 0x21DE00u);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x21DDF8u, 0x21DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE00u;
label_21de00:
    // 0x21de00: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x21de00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x21de04u;
}
