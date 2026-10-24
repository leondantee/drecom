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

// Function: entry_0017d3c8
// Address: 0x17d3c8 - 0x17d3e0
void entry_0017d3c8_0x17d3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d3c8_0x17d3c8");
#endif

    switch (ctx->pc) {
        case 0x17d3d8u: goto label_17d3d8;
        default: break;
    }

    ctx->pc = 0x17d3c8u;

    // 0x17d3c8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17d3c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d3cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d3ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d3d0: 0xc0567b0  jal         func_159EC0
    ctx->pc = 0x17D3D0u;
    SET_GPR_U32(ctx, 31, 0x17D3D8u);
    ctx->pc = 0x159EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159EC0u, 0x17D3D0u, 0x17D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3D8u;
label_17d3d8:
    // 0x17d3d8: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x17D3D8u;
    {
        const bool branch_taken_0x17d3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d3d8) {
            ctx->pc = 0x17D684u;
            return;
        }
    }
    ctx->pc = 0x17D3E0u;
}
