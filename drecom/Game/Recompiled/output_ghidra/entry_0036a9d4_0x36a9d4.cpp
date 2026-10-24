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

// Function: entry_0036a9d4
// Address: 0x36a9d4 - 0x36aa10
void entry_0036a9d4_0x36a9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036a9d4_0x36a9d4");
#endif

    switch (ctx->pc) {
        case 0x36a9f4u: goto label_36a9f4;
        default: break;
    }

    ctx->pc = 0x36a9d4u;

    // 0x36a9d4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36a9d8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x36a9dc: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x36a9e0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x36a9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36a9e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36a9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a9e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a9ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36A9ECu;
    SET_GPR_U32(ctx, 31, 0x36A9F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A9ECu, 0x36A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A9F4u;
label_36a9f4:
    // 0x36a9f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36a9f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a9fc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x36a9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x36aa00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aa04: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36aa04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36aa08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36aa0c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36aa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36aa10u;
}
