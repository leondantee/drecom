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

// Function: entry_0012a740
// Address: 0x12a740 - 0x12a754
void entry_0012a740_0x12a740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a740_0x12a740");
#endif

    switch (ctx->pc) {
        case 0x12a74cu: goto label_12a74c;
        default: break;
    }

    ctx->pc = 0x12a740u;

    // 0x12a740: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a744: 0xc04a35c  jal         func_128D70
    ctx->pc = 0x12A744u;
    SET_GPR_U32(ctx, 31, 0x12A74Cu);
    ctx->pc = 0x128D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128D70u, 0x12A744u, 0x12A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A74Cu;
label_12a74c:
    // 0x12a74c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x12A74Cu;
    {
        const bool branch_taken_0x12a74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a74c) {
            ctx->pc = 0x12A7ECu;
            return;
        }
    }
    ctx->pc = 0x12A754u;
}
