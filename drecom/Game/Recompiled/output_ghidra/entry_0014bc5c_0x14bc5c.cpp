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

// Function: entry_0014bc5c
// Address: 0x14bc5c - 0x14bc70
void entry_0014bc5c_0x14bc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bc5c_0x14bc5c");
#endif

    switch (ctx->pc) {
        case 0x14bc68u: goto label_14bc68;
        default: break;
    }

    ctx->pc = 0x14bc5cu;

    // 0x14bc5c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14bc5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14bc60: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14BC60u;
    SET_GPR_U32(ctx, 31, 0x14BC68u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14BC60u, 0x14BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC68u;
label_14bc68:
    // 0x14bc68: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x14BC68u;
    {
        const bool branch_taken_0x14bc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bc68) {
            ctx->pc = 0x14BDA0u;
            return;
        }
    }
    ctx->pc = 0x14BC70u;
}
