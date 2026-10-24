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

// Function: entry_00232c18
// Address: 0x232c18 - 0x232c2c
void entry_00232c18_0x232c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232c18_0x232c18");
#endif

    switch (ctx->pc) {
        case 0x232c24u: goto label_232c24;
        default: break;
    }

    ctx->pc = 0x232c18u;

    // 0x232c18: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232c1c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x232C1Cu;
    SET_GPR_U32(ctx, 31, 0x232C24u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x232C1Cu, 0x232C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C24u;
label_232c24:
    // 0x232c24: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x232C24u;
    {
        const bool branch_taken_0x232c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232c24) {
            ctx->pc = 0x232E98u;
            return;
        }
    }
    ctx->pc = 0x232C2Cu;
}
