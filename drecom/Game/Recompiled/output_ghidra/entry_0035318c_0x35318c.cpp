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

// Function: entry_0035318c
// Address: 0x35318c - 0x3531a4
void entry_0035318c_0x35318c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035318c_0x35318c");
#endif

    switch (ctx->pc) {
        case 0x35319cu: goto label_35319c;
        default: break;
    }

    ctx->pc = 0x35318cu;

    // 0x35318c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35318cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353190: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x353190u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x353194: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x353194u;
    SET_GPR_U32(ctx, 31, 0x35319Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x353194u, 0x35319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35319Cu;
label_35319c:
    // 0x35319c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x35319Cu;
    {
        const bool branch_taken_0x35319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35319c) {
            ctx->pc = 0x353328u;
            return;
        }
    }
    ctx->pc = 0x3531A4u;
}
