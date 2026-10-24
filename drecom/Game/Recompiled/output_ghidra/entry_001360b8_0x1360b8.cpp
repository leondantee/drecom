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

// Function: entry_001360b8
// Address: 0x1360b8 - 0x1360d8
void entry_001360b8_0x1360b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001360b8_0x1360b8");
#endif

    switch (ctx->pc) {
        case 0x1360d0u: goto label_1360d0;
        default: break;
    }

    ctx->pc = 0x1360b8u;

    // 0x1360b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1360b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1360bc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1360bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1360c0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1360c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1360c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1360c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1360c8: 0xc04d5a0  jal         func_135680
    ctx->pc = 0x1360C8u;
    SET_GPR_U32(ctx, 31, 0x1360D0u);
    ctx->pc = 0x135680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135680u, 0x1360C8u, 0x1360D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1360D0u;
label_1360d0:
    // 0x1360d0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1360D0u;
    {
        const bool branch_taken_0x1360d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1360d0) {
            ctx->pc = 0x136188u;
            return;
        }
    }
    ctx->pc = 0x1360D8u;
}
