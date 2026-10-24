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

// Function: entry_00370d20
// Address: 0x370d20 - 0x370d4c
void entry_00370d20_0x370d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370d20_0x370d20");
#endif

    ctx->pc = 0x370d20u;

    // 0x370d20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370d24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d28: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x370d28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x370d2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d34: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x370d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x370d38: 0x24063c0a  addiu       $a2, $zero, 0x3C0A
    ctx->pc = 0x370d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15370));
    // 0x370d3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x370d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370d40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x370d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x370d44: 0xc0965d0  jal         func_259740
    ctx->pc = 0x370D44u;
    SET_GPR_U32(ctx, 31, 0x370D4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x370D44u, 0x370D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D4Cu;
}
