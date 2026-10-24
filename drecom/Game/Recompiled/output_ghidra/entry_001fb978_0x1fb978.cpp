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

// Function: entry_001fb978
// Address: 0x1fb978 - 0x1fb990
void entry_001fb978_0x1fb978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb978_0x1fb978");
#endif

    switch (ctx->pc) {
        case 0x1fb984u: goto label_1fb984;
        default: break;
    }

    ctx->pc = 0x1fb978u;

    // 0x1fb978: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb97c: 0xc07f4e0  jal         func_1FD380
    ctx->pc = 0x1FB97Cu;
    SET_GPR_U32(ctx, 31, 0x1FB984u);
    ctx->pc = 0x1FD380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD380u, 0x1FB97Cu, 0x1FB984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB984u;
label_1fb984:
    // 0x1fb984: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb984u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb988: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1FB988u;
    {
        const bool branch_taken_0x1fb988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb988) {
            ctx->pc = 0x1FBB18u;
            return;
        }
    }
    ctx->pc = 0x1FB990u;
}
