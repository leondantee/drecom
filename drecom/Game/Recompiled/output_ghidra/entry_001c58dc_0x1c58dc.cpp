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

// Function: entry_001c58dc
// Address: 0x1c58dc - 0x1c58fc
void entry_001c58dc_0x1c58dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c58dc_0x1c58dc");
#endif

    ctx->pc = 0x1c58dcu;

    // 0x1c58dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c58dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c58e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c58e4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c58e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c58e8: 0x24060a11  addiu       $a2, $zero, 0xA11
    ctx->pc = 0x1c58e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2577));
    // 0x1c58ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c58ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c58f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c58f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c58f4: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C58F4u;
    SET_GPR_U32(ctx, 31, 0x1C58FCu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C58F4u, 0x1C58FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C58FCu;
}
