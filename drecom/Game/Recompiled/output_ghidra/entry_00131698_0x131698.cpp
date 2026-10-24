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

// Function: entry_00131698
// Address: 0x131698 - 0x1316b8
void entry_00131698_0x131698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131698_0x131698");
#endif

    ctx->pc = 0x131698u;

    // 0x131698: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13169c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13169cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1316a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1316a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1316a4: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1316a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1316a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1316a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1316ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1316acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1316b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1316B0u;
    SET_GPR_U32(ctx, 31, 0x1316B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1316B0u, 0x1316B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316B8u;
}
