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

// Function: entry_0017d0d0
// Address: 0x17d0d0 - 0x17d0dc
void entry_0017d0d0_0x17d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d0d0_0x17d0d0");
#endif

    ctx->pc = 0x17d0d0u;

    // 0x17d0d0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d0d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d0d4: 0xc0565a4  jal         func_159690
    ctx->pc = 0x17D0D4u;
    SET_GPR_U32(ctx, 31, 0x17D0DCu);
    ctx->pc = 0x159690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159690u, 0x17D0D4u, 0x17D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0DCu;
}
