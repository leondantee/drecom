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

// Function: entry_00265fb8
// Address: 0x265fb8 - 0x265fc8
void entry_00265fb8_0x265fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265fb8_0x265fb8");
#endif

    ctx->pc = 0x265fb8u;

    // 0x265fb8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265fb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265fbc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x265fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x265fc0: 0xc05be64  jal         func_16F990
    ctx->pc = 0x265FC0u;
    SET_GPR_U32(ctx, 31, 0x265FC8u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x265FC0u, 0x265FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FC8u;
}
