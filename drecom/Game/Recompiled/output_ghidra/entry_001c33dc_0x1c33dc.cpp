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

// Function: entry_001c33dc
// Address: 0x1c33dc - 0x1c33fc
void entry_001c33dc_0x1c33dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c33dc_0x1c33dc");
#endif

    ctx->pc = 0x1c33dcu;

    // 0x1c33dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c33dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c33e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c33e4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c33e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c33e8: 0x24060a1e  addiu       $a2, $zero, 0xA1E
    ctx->pc = 0x1c33e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2590));
    // 0x1c33ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c33ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c33f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c33f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c33f4: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C33F4u;
    SET_GPR_U32(ctx, 31, 0x1C33FCu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C33F4u, 0x1C33FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33FCu;
}
