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

// Function: entry_001a5044
// Address: 0x1a5044 - 0x1a5054
void entry_001a5044_0x1a5044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5044_0x1a5044");
#endif

    switch (ctx->pc) {
        case 0x1a504cu: goto label_1a504c;
        default: break;
    }

    ctx->pc = 0x1a5044u;

    // 0x1a5044: 0xc069420  jal         func_1A5080
    ctx->pc = 0x1A5044u;
    SET_GPR_U32(ctx, 31, 0x1A504Cu);
    ctx->pc = 0x1A5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5080u, 0x1A5044u, 0x1A504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A504Cu;
label_1a504c:
    // 0x1a504c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A504Cu;
    {
        const bool branch_taken_0x1a504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a504c) {
            ctx->pc = 0x1A505Cu;
            return;
        }
    }
    ctx->pc = 0x1A5054u;
}
