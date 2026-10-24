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

// Function: entry_001ee688
// Address: 0x1ee688 - 0x1ee6a8
void entry_001ee688_0x1ee688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee688_0x1ee688");
#endif

    ctx->pc = 0x1ee688u;

    // 0x1ee688: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee68c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee690: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee694: 0x24067809  addiu       $a2, $zero, 0x7809
    ctx->pc = 0x1ee694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30729));
    // 0x1ee698: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee69c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee69cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee6a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE6A0u;
    SET_GPR_U32(ctx, 31, 0x1EE6A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE6A0u, 0x1EE6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE6A8u;
}
