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

// Function: entry_0018cfe0
// Address: 0x18cfe0 - 0x18cfec
void entry_0018cfe0_0x18cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cfe0_0x18cfe0");
#endif

    ctx->pc = 0x18cfe0u;

    // 0x18cfe0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18cfe0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18cfe4: 0xc0c99d8  jal         func_326760
    ctx->pc = 0x18CFE4u;
    SET_GPR_U32(ctx, 31, 0x18CFECu);
    ctx->pc = 0x326760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326760u, 0x18CFE4u, 0x18CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFECu;
}
