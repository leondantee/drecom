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

// Function: entry_002d6484
// Address: 0x2d6484 - 0x2d64b4
void entry_002d6484_0x2d6484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6484_0x2d6484");
#endif

    switch (ctx->pc) {
        case 0x2d64a4u: goto label_2d64a4;
        default: break;
    }

    ctx->pc = 0x2d6484u;

    // 0x2d6484: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d6484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6488: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d6488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d648c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d648cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d6490: 0x24063c01  addiu       $a2, $zero, 0x3C01
    ctx->pc = 0x2d6490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15361));
    // 0x2d6494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d6494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6498: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d6498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d649c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D649Cu;
    SET_GPR_U32(ctx, 31, 0x2D64A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D649Cu, 0x2D64A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D64A4u;
label_2d64a4:
    // 0x2d64a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d64a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d64a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d64a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d64ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d64acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d64b0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d64b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d64b4u;
}
