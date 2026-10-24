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

// Function: entry_00146f54
// Address: 0x146f54 - 0x146f68
void entry_00146f54_0x146f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146f54_0x146f54");
#endif

    switch (ctx->pc) {
        case 0x146f60u: goto label_146f60;
        default: break;
    }

    ctx->pc = 0x146f54u;

    // 0x146f54: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146f54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146f58: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x146F58u;
    SET_GPR_U32(ctx, 31, 0x146F60u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x146F58u, 0x146F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F60u;
label_146f60:
    // 0x146f60: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x146F60u;
    {
        const bool branch_taken_0x146f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f60) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146F68u;
}
