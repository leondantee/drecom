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

// Function: entry_0032e630
// Address: 0x32e630 - 0x32e644
void entry_0032e630_0x32e630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e630_0x32e630");
#endif

    switch (ctx->pc) {
        case 0x32e63cu: goto label_32e63c;
        default: break;
    }

    ctx->pc = 0x32e630u;

    // 0x32e630: 0xa2006608  sb          $zero, 0x6608($s0)
    ctx->pc = 0x32e630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 0));
    // 0x32e634: 0xc0cb9b0  jal         func_32E6C0
    ctx->pc = 0x32E634u;
    SET_GPR_U32(ctx, 31, 0x32E63Cu);
    ctx->pc = 0x32E6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E6C0u, 0x32E634u, 0x32E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E63Cu;
label_32e63c:
    // 0x32e63c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x32E63Cu;
    {
        const bool branch_taken_0x32e63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e63c) {
            ctx->pc = 0x32E690u;
            return;
        }
    }
    ctx->pc = 0x32E644u;
}
