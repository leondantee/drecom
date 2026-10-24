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

// Function: entry_00208d30
// Address: 0x208d30 - 0x208d48
void entry_00208d30_0x208d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208d30_0x208d30");
#endif

    switch (ctx->pc) {
        case 0x208d40u: goto label_208d40;
        default: break;
    }

    ctx->pc = 0x208d30u;

    // 0x208d30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x208d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208d34: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x208d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x208d38: 0xc080f60  jal         func_203D80
    ctx->pc = 0x208D38u;
    SET_GPR_U32(ctx, 31, 0x208D40u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x208D38u, 0x208D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D40u;
label_208d40:
    // 0x208d40: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x208D40u;
    {
        const bool branch_taken_0x208d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208d40) {
            ctx->pc = 0x2094A0u;
            return;
        }
    }
    ctx->pc = 0x208D48u;
}
