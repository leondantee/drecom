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

// Function: entry_00363454
// Address: 0x363454 - 0x363464
void entry_00363454_0x363454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363454_0x363454");
#endif

    ctx->pc = 0x363454u;

    // 0x363454: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x363454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363458: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x363458u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36345c: 0xc0d9fc8  jal         func_367F20
    ctx->pc = 0x36345Cu;
    SET_GPR_U32(ctx, 31, 0x363464u);
    ctx->pc = 0x367F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367F20u, 0x36345Cu, 0x363464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363464u;
}
