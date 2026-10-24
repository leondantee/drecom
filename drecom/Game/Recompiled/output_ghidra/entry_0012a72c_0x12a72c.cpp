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

// Function: entry_0012a72c
// Address: 0x12a72c - 0x12a740
void entry_0012a72c_0x12a72c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a72c_0x12a72c");
#endif

    switch (ctx->pc) {
        case 0x12a738u: goto label_12a738;
        default: break;
    }

    ctx->pc = 0x12a72cu;

    // 0x12a72c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a730: 0xc049ea0  jal         func_127A80
    ctx->pc = 0x12A730u;
    SET_GPR_U32(ctx, 31, 0x12A738u);
    ctx->pc = 0x127A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A80u, 0x12A730u, 0x12A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A738u;
label_12a738:
    // 0x12a738: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12A738u;
    {
        const bool branch_taken_0x12a738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a738) {
            ctx->pc = 0x12A7ECu;
            return;
        }
    }
    ctx->pc = 0x12A740u;
}
