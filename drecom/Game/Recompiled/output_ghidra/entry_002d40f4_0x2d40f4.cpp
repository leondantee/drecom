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

// Function: entry_002d40f4
// Address: 0x2d40f4 - 0x2d412c
void entry_002d40f4_0x2d40f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d40f4_0x2d40f4");
#endif

    switch (ctx->pc) {
        case 0x2d4114u: goto label_2d4114;
        default: break;
    }

    ctx->pc = 0x2d40f4u;

    // 0x2d40f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d40f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d40f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d40f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d40fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d40fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d4100: 0x24065a26  addiu       $a2, $zero, 0x5A26
    ctx->pc = 0x2d4100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23078));
    // 0x2d4104: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4108: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d4108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d410c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D410Cu;
    SET_GPR_U32(ctx, 31, 0x2D4114u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D410Cu, 0x2D4114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4114u;
label_2d4114:
    // 0x2d4114: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d4114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4118: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d4118u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d411c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4120: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d4120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d4124: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4128: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d4128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d412cu;
}
