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

// Function: entry_0036e2a4
// Address: 0x36e2a4 - 0x36e2d4
void entry_0036e2a4_0x36e2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e2a4_0x36e2a4");
#endif

    switch (ctx->pc) {
        case 0x36e2c4u: goto label_36e2c4;
        default: break;
    }

    ctx->pc = 0x36e2a4u;

    // 0x36e2a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e2a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e2ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e2b0: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x36e2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x36e2b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e2b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e2b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e2bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E2BCu;
    SET_GPR_U32(ctx, 31, 0x36E2C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E2BCu, 0x36E2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E2C4u;
label_36e2c4:
    // 0x36e2c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e2c8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e2c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e2cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e2d0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36e2d4u;
}
