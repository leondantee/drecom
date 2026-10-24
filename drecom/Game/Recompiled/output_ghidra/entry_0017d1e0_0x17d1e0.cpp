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

// Function: entry_0017d1e0
// Address: 0x17d1e0 - 0x17d1f8
void entry_0017d1e0_0x17d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d1e0_0x17d1e0");
#endif

    switch (ctx->pc) {
        case 0x17d1f0u: goto label_17d1f0;
        default: break;
    }

    ctx->pc = 0x17d1e0u;

    // 0x17d1e0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17d1e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d1e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d1e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d1e8: 0xc056718  jal         func_159C60
    ctx->pc = 0x17D1E8u;
    SET_GPR_U32(ctx, 31, 0x17D1F0u);
    ctx->pc = 0x159C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C60u, 0x17D1E8u, 0x17D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D1F0u;
label_17d1f0:
    // 0x17d1f0: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x17D1F0u;
    {
        const bool branch_taken_0x17d1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d1f0) {
            ctx->pc = 0x17D684u;
            return;
        }
    }
    ctx->pc = 0x17D1F8u;
}
