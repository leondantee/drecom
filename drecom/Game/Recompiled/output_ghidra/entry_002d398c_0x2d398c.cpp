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

// Function: entry_002d398c
// Address: 0x2d398c - 0x2d39c4
void entry_002d398c_0x2d398c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d398c_0x2d398c");
#endif

    switch (ctx->pc) {
        case 0x2d39acu: goto label_2d39ac;
        default: break;
    }

    ctx->pc = 0x2d398cu;

    // 0x2d398c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3990: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3994: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3998: 0x24065a23  addiu       $a2, $zero, 0x5A23
    ctx->pc = 0x2d3998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23075));
    // 0x2d399c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d399cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d39a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d39a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d39a4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D39A4u;
    SET_GPR_U32(ctx, 31, 0x2D39ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D39A4u, 0x2D39ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D39ACu;
label_2d39ac:
    // 0x2d39ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d39acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d39b0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d39b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d39b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d39b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d39b8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d39b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d39bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d39c0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d39c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d39c4u;
}
