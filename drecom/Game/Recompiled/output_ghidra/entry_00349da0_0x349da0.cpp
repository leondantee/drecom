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

// Function: entry_00349da0
// Address: 0x349da0 - 0x349dcc
void entry_00349da0_0x349da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00349da0_0x349da0");
#endif

    switch (ctx->pc) {
        case 0x349dc0u: goto label_349dc0;
        default: break;
    }

    ctx->pc = 0x349da0u;

    // 0x349da0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349da4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349da8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x349da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x349dac: 0x2406041f  addiu       $a2, $zero, 0x41F
    ctx->pc = 0x349dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x349db0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x349db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349db4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x349db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x349db8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x349DB8u;
    SET_GPR_U32(ctx, 31, 0x349DC0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x349DB8u, 0x349DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349DC0u;
label_349dc0:
    // 0x349dc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349dc4: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x349dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349dc8: 0xa603127e  sh          $v1, 0x127E($s0)
    ctx->pc = 0x349dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x349dccu;
}
