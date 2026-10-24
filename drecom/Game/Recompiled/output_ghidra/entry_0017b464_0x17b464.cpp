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

// Function: entry_0017b464
// Address: 0x17b464 - 0x17b470
void entry_0017b464_0x17b464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b464_0x17b464");
#endif

    ctx->pc = 0x17b464u;

    // 0x17b464: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17b464u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17b468: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x17B468u;
    SET_GPR_U32(ctx, 31, 0x17B470u);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x17B468u, 0x17B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B470u;
}
