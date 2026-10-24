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

// Function: entry_002c8750
// Address: 0x2c8750 - 0x2c8770
void entry_002c8750_0x2c8750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c8750_0x2c8750");
#endif

    ctx->pc = 0x2c8750u;

    // 0x2c8750: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8754: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c8754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8758: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c8758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c875c: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2c875cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2c8760: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8764: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c8764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c8768: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C8768u;
    SET_GPR_U32(ctx, 31, 0x2C8770u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C8768u, 0x2C8770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8770u;
}
