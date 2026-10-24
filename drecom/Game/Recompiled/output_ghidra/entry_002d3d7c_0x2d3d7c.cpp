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

// Function: entry_002d3d7c
// Address: 0x2d3d7c - 0x2d3db4
void entry_002d3d7c_0x2d3d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d3d7c_0x2d3d7c");
#endif

    switch (ctx->pc) {
        case 0x2d3d9cu: goto label_2d3d9c;
        default: break;
    }

    ctx->pc = 0x2d3d7cu;

    // 0x2d3d7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3d80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3d84: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3d88: 0x24065a29  addiu       $a2, $zero, 0x5A29
    ctx->pc = 0x2d3d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23081));
    // 0x2d3d8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3d90: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d3d94: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D3D94u;
    SET_GPR_U32(ctx, 31, 0x2D3D9Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D3D94u, 0x2D3D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D9Cu;
label_2d3d9c:
    // 0x2d3d9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3da0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d3da0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d3da4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3da8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d3da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3dac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3db0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d3db0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d3db4u;
}
