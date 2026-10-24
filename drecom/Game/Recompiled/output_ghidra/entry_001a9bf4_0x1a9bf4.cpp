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

// Function: entry_001a9bf4
// Address: 0x1a9bf4 - 0x1a9c04
void entry_001a9bf4_0x1a9bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9bf4_0x1a9bf4");
#endif

    switch (ctx->pc) {
        case 0x1a9bfcu: goto label_1a9bfc;
        default: break;
    }

    ctx->pc = 0x1a9bf4u;

    // 0x1a9bf4: 0xc0c9918  jal         func_326460
    ctx->pc = 0x1A9BF4u;
    SET_GPR_U32(ctx, 31, 0x1A9BFCu);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x1A9BF4u, 0x1A9BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BFCu;
label_1a9bfc:
    // 0x1a9bfc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a9bfcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1a9c04u;
}
