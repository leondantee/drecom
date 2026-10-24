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

// Function: entry_002848d0
// Address: 0x2848d0 - 0x2848e4
void entry_002848d0_0x2848d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002848d0_0x2848d0");
#endif

    switch (ctx->pc) {
        case 0x2848dcu: goto label_2848dc;
        default: break;
    }

    ctx->pc = 0x2848d0u;

    // 0x2848d0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2848d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2848d4: 0xc084944  jal         func_212510
    ctx->pc = 0x2848D4u;
    SET_GPR_U32(ctx, 31, 0x2848DCu);
    ctx->pc = 0x212510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212510u, 0x2848D4u, 0x2848DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848DCu;
label_2848dc:
    // 0x2848dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2848DCu;
    {
        const bool branch_taken_0x2848dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2848dc) {
            ctx->pc = 0x2848F0u;
            return;
        }
    }
    ctx->pc = 0x2848E4u;
}
