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

// Function: entry_002df898
// Address: 0x2df898 - 0x2df8ac
void entry_002df898_0x2df898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df898_0x2df898");
#endif

    switch (ctx->pc) {
        case 0x2df8a4u: goto label_2df8a4;
        default: break;
    }

    ctx->pc = 0x2df898u;

    // 0x2df898: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df89c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DF89Cu;
    SET_GPR_U32(ctx, 31, 0x2DF8A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DF89Cu, 0x2DF8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF8A4u;
label_2df8a4:
    // 0x2df8a4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2DF8A4u;
    {
        const bool branch_taken_0x2df8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df8a4) {
            ctx->pc = 0x2DF9C8u;
            return;
        }
    }
    ctx->pc = 0x2DF8ACu;
}
