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

// Function: entry_00130ab0
// Address: 0x130ab0 - 0x130ad0
void entry_00130ab0_0x130ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130ab0_0x130ab0");
#endif

    ctx->pc = 0x130ab0u;

    // 0x130ab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ab4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ab8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x130ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x130abc: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x130abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x130ac0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x130ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130ac4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x130ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x130ac8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x130AC8u;
    SET_GPR_U32(ctx, 31, 0x130AD0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x130AC8u, 0x130AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AD0u;
}
