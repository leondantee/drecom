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

// Function: entry_001485dc
// Address: 0x1485dc - 0x1485fc
void entry_001485dc_0x1485dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001485dc_0x1485dc");
#endif

    ctx->pc = 0x1485dcu;

    // 0x1485dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1485dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1485e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1485e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1485e4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1485e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1485e8: 0x24060a19  addiu       $a2, $zero, 0xA19
    ctx->pc = 0x1485e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2585));
    // 0x1485ec: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x1485ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1485f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1485f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1485f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1485F4u;
    SET_GPR_U32(ctx, 31, 0x1485FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1485F4u, 0x1485FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485FCu;
}
