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

// Function: entry_0025e668
// Address: 0x25e668 - 0x25e674
void entry_0025e668_0x25e668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e668_0x25e668");
#endif

    ctx->pc = 0x25e668u;

    // 0x25e668: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25e668u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25e66c: 0xc098a4c  jal         func_262930
    ctx->pc = 0x25E66Cu;
    SET_GPR_U32(ctx, 31, 0x25E674u);
    ctx->pc = 0x262930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262930u, 0x25E66Cu, 0x25E674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E674u;
}
