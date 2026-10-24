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

// Function: entry_0014b9a4
// Address: 0x14b9a4 - 0x14b9b8
void entry_0014b9a4_0x14b9a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b9a4_0x14b9a4");
#endif

    switch (ctx->pc) {
        case 0x14b9b0u: goto label_14b9b0;
        default: break;
    }

    ctx->pc = 0x14b9a4u;

    // 0x14b9a4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14b9a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14b9a8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14B9A8u;
    SET_GPR_U32(ctx, 31, 0x14B9B0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14B9A8u, 0x14B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9B0u;
label_14b9b0:
    // 0x14b9b0: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x14B9B0u;
    {
        const bool branch_taken_0x14b9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b9b0) {
            ctx->pc = 0x14BDA0u;
            return;
        }
    }
    ctx->pc = 0x14B9B8u;
}
