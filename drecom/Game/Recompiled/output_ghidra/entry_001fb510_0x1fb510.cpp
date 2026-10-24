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

// Function: entry_001fb510
// Address: 0x1fb510 - 0x1fb528
void entry_001fb510_0x1fb510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb510_0x1fb510");
#endif

    switch (ctx->pc) {
        case 0x1fb51cu: goto label_1fb51c;
        default: break;
    }

    ctx->pc = 0x1fb510u;

    // 0x1fb510: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb514: 0xc07f4e0  jal         func_1FD380
    ctx->pc = 0x1FB514u;
    SET_GPR_U32(ctx, 31, 0x1FB51Cu);
    ctx->pc = 0x1FD380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD380u, 0x1FB514u, 0x1FB51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB51Cu;
label_1fb51c:
    // 0x1fb51c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb51cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb520: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x1FB520u;
    {
        const bool branch_taken_0x1fb520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb520) {
            ctx->pc = 0x1FBB18u;
            return;
        }
    }
    ctx->pc = 0x1FB528u;
}
