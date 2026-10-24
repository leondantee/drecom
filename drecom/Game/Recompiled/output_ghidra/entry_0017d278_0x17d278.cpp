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

// Function: entry_0017d278
// Address: 0x17d278 - 0x17d288
void entry_0017d278_0x17d278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d278_0x17d278");
#endif

    ctx->pc = 0x17d278u;

    // 0x17d278: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17d278u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d27c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d27cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d280: 0xc056764  jal         func_159D90
    ctx->pc = 0x17D280u;
    SET_GPR_U32(ctx, 31, 0x17D288u);
    ctx->pc = 0x159D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159D90u, 0x17D280u, 0x17D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D288u;
}
