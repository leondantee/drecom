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

// Function: entry_0012d2c0
// Address: 0x12d2c0 - 0x12d2cc
void entry_0012d2c0_0x12d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d2c0_0x12d2c0");
#endif

    switch (ctx->pc) {
        case 0x12d2c8u: goto label_12d2c8;
        default: break;
    }

    ctx->pc = 0x12d2c0u;

    // 0x12d2c0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12D2C0u;
    SET_GPR_U32(ctx, 31, 0x12D2C8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D2C0u, 0x12D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D2C8u;
label_12d2c8:
    // 0x12d2c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12d2c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x12d2ccu;
}
