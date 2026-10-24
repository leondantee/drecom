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

// Function: entry_00145198
// Address: 0x145198 - 0x1451ac
void entry_00145198_0x145198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145198_0x145198");
#endif

    ctx->pc = 0x145198u;

    // 0x145198: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x145198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x14519c: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x14519cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1451a0: 0x8e061378  lw          $a2, 0x1378($s0)
    ctx->pc = 0x1451a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4984)));
    // 0x1451a4: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x1451A4u;
    SET_GPR_U32(ctx, 31, 0x1451ACu);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x1451A4u, 0x1451ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1451ACu;
}
