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

// Function: entry_00143e3c
// Address: 0x143e3c - 0x143e50
void entry_00143e3c_0x143e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143e3c_0x143e3c");
#endif

    ctx->pc = 0x143e3cu;

    // 0x143e3c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x143e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x143e40: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x143e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x143e44: 0x8e061378  lw          $a2, 0x1378($s0)
    ctx->pc = 0x143e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4984)));
    // 0x143e48: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x143E48u;
    SET_GPR_U32(ctx, 31, 0x143E50u);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x143E48u, 0x143E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E50u;
}
