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

// Function: entry_001c9f04
// Address: 0x1c9f04 - 0x1c9f10
void entry_001c9f04_0x1c9f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9f04_0x1c9f04");
#endif

    ctx->pc = 0x1c9f04u;

    // 0x1c9f04: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1c9f04u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9f08: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x1C9F08u;
    SET_GPR_U32(ctx, 31, 0x1C9F10u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x1C9F08u, 0x1C9F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F10u;
}
