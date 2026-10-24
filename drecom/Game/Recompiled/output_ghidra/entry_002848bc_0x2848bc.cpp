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

// Function: entry_002848bc
// Address: 0x2848bc - 0x2848d0
void entry_002848bc_0x2848bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002848bc_0x2848bc");
#endif

    switch (ctx->pc) {
        case 0x2848c8u: goto label_2848c8;
        default: break;
    }

    ctx->pc = 0x2848bcu;

    // 0x2848bc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2848bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2848c0: 0xc084900  jal         func_212400
    ctx->pc = 0x2848C0u;
    SET_GPR_U32(ctx, 31, 0x2848C8u);
    ctx->pc = 0x212400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212400u, 0x2848C0u, 0x2848C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848C8u;
label_2848c8:
    // 0x2848c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2848C8u;
    {
        const bool branch_taken_0x2848c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2848c8) {
            ctx->pc = 0x2848F0u;
            return;
        }
    }
    ctx->pc = 0x2848D0u;
}
