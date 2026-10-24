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

// Function: entry_001472f4
// Address: 0x1472f4 - 0x14730c
void entry_001472f4_0x1472f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001472f4_0x1472f4");
#endif

    switch (ctx->pc) {
        case 0x147300u: goto label_147300;
        default: break;
    }

    ctx->pc = 0x1472f4u;

    // 0x1472f4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1472f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1472f8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1472F8u;
    SET_GPR_U32(ctx, 31, 0x147300u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1472F8u, 0x147300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147300u;
label_147300:
    // 0x147300: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x147300u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147304: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x147304u;
    {
        const bool branch_taken_0x147304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147304) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x14730Cu;
}
