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

// Function: entry_001c5d3c
// Address: 0x1c5d3c - 0x1c5d5c
void entry_001c5d3c_0x1c5d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5d3c_0x1c5d3c");
#endif

    ctx->pc = 0x1c5d3cu;

    // 0x1c5d3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5d40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5d44: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5d48: 0x24060a1e  addiu       $a2, $zero, 0xA1E
    ctx->pc = 0x1c5d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2590));
    // 0x1c5d4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5d50: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5d54: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C5D54u;
    SET_GPR_U32(ctx, 31, 0x1C5D5Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C5D54u, 0x1C5D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D5Cu;
}
