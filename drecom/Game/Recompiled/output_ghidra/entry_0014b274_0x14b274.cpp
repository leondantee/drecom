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

// Function: entry_0014b274
// Address: 0x14b274 - 0x14b288
void entry_0014b274_0x14b274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b274_0x14b274");
#endif

    switch (ctx->pc) {
        case 0x14b280u: goto label_14b280;
        default: break;
    }

    ctx->pc = 0x14b274u;

    // 0x14b274: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14b274u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14b278: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14B278u;
    SET_GPR_U32(ctx, 31, 0x14B280u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14B278u, 0x14B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B280u;
label_14b280:
    // 0x14b280: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x14B280u;
    {
        const bool branch_taken_0x14b280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b280) {
            ctx->pc = 0x14B670u;
            return;
        }
    }
    ctx->pc = 0x14B288u;
}
