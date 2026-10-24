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

// Function: entry_0012a768
// Address: 0x12a768 - 0x12a77c
void entry_0012a768_0x12a768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a768_0x12a768");
#endif

    switch (ctx->pc) {
        case 0x12a774u: goto label_12a774;
        default: break;
    }

    ctx->pc = 0x12a768u;

    // 0x12a768: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a76c: 0xc04a764  jal         func_129D90
    ctx->pc = 0x12A76Cu;
    SET_GPR_U32(ctx, 31, 0x12A774u);
    ctx->pc = 0x129D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129D90u, 0x12A76Cu, 0x12A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A774u;
label_12a774:
    // 0x12a774: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x12A774u;
    {
        const bool branch_taken_0x12a774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a774) {
            ctx->pc = 0x12A7ECu;
            return;
        }
    }
    ctx->pc = 0x12A77Cu;
}
