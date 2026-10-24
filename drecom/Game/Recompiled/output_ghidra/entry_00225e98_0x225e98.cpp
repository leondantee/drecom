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

// Function: entry_00225e98
// Address: 0x225e98 - 0x225eb8
void entry_00225e98_0x225e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225e98_0x225e98");
#endif

    ctx->pc = 0x225e98u;

    // 0x225e98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e9c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ea0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x225ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x225ea4: 0x2406780b  addiu       $a2, $zero, 0x780B
    ctx->pc = 0x225ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30731));
    // 0x225ea8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225eac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x225eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x225eb0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x225EB0u;
    SET_GPR_U32(ctx, 31, 0x225EB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x225EB0u, 0x225EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EB8u;
}
