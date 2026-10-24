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

// Function: entry_001c364c
// Address: 0x1c364c - 0x1c366c
void entry_001c364c_0x1c364c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c364c_0x1c364c");
#endif

    ctx->pc = 0x1c364cu;

    // 0x1c364c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c364cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3650: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3654: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3658: 0x24060a1f  addiu       $a2, $zero, 0xA1F
    ctx->pc = 0x1c3658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2591));
    // 0x1c365c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c365cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3660: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3664: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C3664u;
    SET_GPR_U32(ctx, 31, 0x1C366Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C3664u, 0x1C366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C366Cu;
}
