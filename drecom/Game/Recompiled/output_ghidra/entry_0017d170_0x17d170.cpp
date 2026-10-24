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

// Function: entry_0017d170
// Address: 0x17d170 - 0x17d180
void entry_0017d170_0x17d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d170_0x17d170");
#endif

    ctx->pc = 0x17d170u;

    // 0x17d170: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17d170u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d174: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d174u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d178: 0xc056718  jal         func_159C60
    ctx->pc = 0x17D178u;
    SET_GPR_U32(ctx, 31, 0x17D180u);
    ctx->pc = 0x159C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C60u, 0x17D178u, 0x17D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D180u;
}
