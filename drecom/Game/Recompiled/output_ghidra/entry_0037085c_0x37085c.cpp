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

// Function: entry_0037085c
// Address: 0x37085c - 0x370888
void entry_0037085c_0x37085c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037085c_0x37085c");
#endif

    ctx->pc = 0x37085cu;

    // 0x37085c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370860: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370864: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x370864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x370868: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37086c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37086cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370870: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x370870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x370874: 0x24061e07  addiu       $a2, $zero, 0x1E07
    ctx->pc = 0x370874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7687));
    // 0x370878: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x370878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37087c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x37087cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x370880: 0xc0965d0  jal         func_259740
    ctx->pc = 0x370880u;
    SET_GPR_U32(ctx, 31, 0x370888u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x370880u, 0x370888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370888u;
}
