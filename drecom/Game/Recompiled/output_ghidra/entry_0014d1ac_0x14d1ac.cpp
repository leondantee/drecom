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

// Function: entry_0014d1ac
// Address: 0x14d1ac - 0x14d1c0
void entry_0014d1ac_0x14d1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d1ac_0x14d1ac");
#endif

    switch (ctx->pc) {
        case 0x14d1b8u: goto label_14d1b8;
        default: break;
    }

    ctx->pc = 0x14d1acu;

    // 0x14d1ac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14d1acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d1b0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14D1B0u;
    SET_GPR_U32(ctx, 31, 0x14D1B8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14D1B0u, 0x14D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1B8u;
label_14d1b8:
    // 0x14d1b8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x14D1B8u;
    {
        const bool branch_taken_0x14d1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d1b8) {
            ctx->pc = 0x14D2CCu;
            return;
        }
    }
    ctx->pc = 0x14D1C0u;
}
