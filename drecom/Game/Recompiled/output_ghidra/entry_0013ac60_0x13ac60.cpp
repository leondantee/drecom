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

// Function: entry_0013ac60
// Address: 0x13ac60 - 0x13ac70
void entry_0013ac60_0x13ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ac60_0x13ac60");
#endif

    ctx->pc = 0x13ac60u;

    // 0x13ac60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13ac64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13ac64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13ac68: 0xc04eb24  jal         func_13AC90
    ctx->pc = 0x13AC68u;
    SET_GPR_U32(ctx, 31, 0x13AC70u);
    ctx->pc = 0x13AC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC90u, 0x13AC68u, 0x13AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC70u;
}
