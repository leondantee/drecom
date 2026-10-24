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

// Function: entry_0017d2e8
// Address: 0x17d2e8 - 0x17d2f8
void entry_0017d2e8_0x17d2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d2e8_0x17d2e8");
#endif

    ctx->pc = 0x17d2e8u;

    // 0x17d2e8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17d2e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d2ec: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d2ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d2f0: 0xc056764  jal         func_159D90
    ctx->pc = 0x17D2F0u;
    SET_GPR_U32(ctx, 31, 0x17D2F8u);
    ctx->pc = 0x159D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159D90u, 0x17D2F0u, 0x17D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2F8u;
}
