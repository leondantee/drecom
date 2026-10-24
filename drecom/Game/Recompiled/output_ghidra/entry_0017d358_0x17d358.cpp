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

// Function: entry_0017d358
// Address: 0x17d358 - 0x17d368
void entry_0017d358_0x17d358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d358_0x17d358");
#endif

    ctx->pc = 0x17d358u;

    // 0x17d358: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17d358u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d35c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d35cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d360: 0xc0567b0  jal         func_159EC0
    ctx->pc = 0x17D360u;
    SET_GPR_U32(ctx, 31, 0x17D368u);
    ctx->pc = 0x159EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159EC0u, 0x17D360u, 0x17D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D368u;
}
