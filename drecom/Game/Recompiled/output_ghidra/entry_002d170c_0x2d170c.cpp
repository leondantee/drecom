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

// Function: entry_002d170c
// Address: 0x2d170c - 0x2d1744
void entry_002d170c_0x2d170c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d170c_0x2d170c");
#endif

    switch (ctx->pc) {
        case 0x2d172cu: goto label_2d172c;
        default: break;
    }

    ctx->pc = 0x2d170cu;

    // 0x2d170c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1710: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1714: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d1714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d1718: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x2d1718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x2d171c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d171cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1720: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d1720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d1724: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D1724u;
    SET_GPR_U32(ctx, 31, 0x2D172Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D1724u, 0x2D172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D172Cu;
label_2d172c:
    // 0x2d172c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1730: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d1730u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d1734: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1738: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d1738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d173c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d1740: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d1740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d1744u;
}
