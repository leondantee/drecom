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

// Function: entry_001c0f8c
// Address: 0x1c0f8c - 0x1c0fac
void entry_001c0f8c_0x1c0f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0f8c_0x1c0f8c");
#endif

    ctx->pc = 0x1c0f8cu;

    // 0x1c0f8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0f90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0f94: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0f98: 0x24060a20  addiu       $a2, $zero, 0xA20
    ctx->pc = 0x1c0f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2592));
    // 0x1c0f9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0fa0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0fa4: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C0FA4u;
    SET_GPR_U32(ctx, 31, 0x1C0FACu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C0FA4u, 0x1C0FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FACu;
}
