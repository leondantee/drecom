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

// Function: entry_00379d00
// Address: 0x379d00 - 0x379d10
void entry_00379d00_0x379d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379d00_0x379d00");
#endif

    switch (ctx->pc) {
        case 0x379d08u: goto label_379d08;
        default: break;
    }

    ctx->pc = 0x379d00u;

    // 0x379d00: 0xc0de764  jal         func_379D90
    ctx->pc = 0x379D00u;
    SET_GPR_U32(ctx, 31, 0x379D08u);
    ctx->pc = 0x379D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379D90u, 0x379D00u, 0x379D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D08u;
label_379d08:
    // 0x379d08: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x379D08u;
    {
        const bool branch_taken_0x379d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379d08) {
            ctx->pc = 0x379D58u;
            return;
        }
    }
    ctx->pc = 0x379D10u;
}
