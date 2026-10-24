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

// Function: entry_0014a074
// Address: 0x14a074 - 0x14a094
void entry_0014a074_0x14a074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a074_0x14a074");
#endif

    ctx->pc = 0x14a074u;

    // 0x14a074: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a078: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a07c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14a080: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x14a080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x14a084: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x14a084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x14a088: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14a08c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14A08Cu;
    SET_GPR_U32(ctx, 31, 0x14A094u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A08Cu, 0x14A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A094u;
}
