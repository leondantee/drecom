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

// Function: entry_002d69a4
// Address: 0x2d69a4 - 0x2d69d4
void entry_002d69a4_0x2d69a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d69a4_0x2d69a4");
#endif

    switch (ctx->pc) {
        case 0x2d69c4u: goto label_2d69c4;
        default: break;
    }

    ctx->pc = 0x2d69a4u;

    // 0x2d69a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d69a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d69a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d69ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d69acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d69b0: 0x24063c07  addiu       $a2, $zero, 0x3C07
    ctx->pc = 0x2d69b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15367));
    // 0x2d69b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d69b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d69b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d69b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d69bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D69BCu;
    SET_GPR_U32(ctx, 31, 0x2D69C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D69BCu, 0x2D69C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D69C4u;
label_2d69c4:
    // 0x2d69c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d69c8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d69c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d69cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d69d0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d69d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d69d4u;
}
