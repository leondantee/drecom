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

// Function: entry_0014d3cc
// Address: 0x14d3cc - 0x14d410
void entry_0014d3cc_0x14d3cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d3cc_0x14d3cc");
#endif

    switch (ctx->pc) {
        case 0x14d3f4u: goto label_14d3f4;
        default: break;
    }

    ctx->pc = 0x14d3ccu;

    // 0x14d3cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d3d0: 0xac401390  sw          $zero, 0x1390($v0)
    ctx->pc = 0x14d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5008), GPR_U32(ctx, 0));
    // 0x14d3d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d3d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d3dc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14d3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14d3e0: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x14d3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x14d3e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14d3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d3e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14d3e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14d3ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14D3ECu;
    SET_GPR_U32(ctx, 31, 0x14D3F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14D3ECu, 0x14D3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3F4u;
label_14d3f4:
    // 0x14d3f4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14d3f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d3fc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x14d3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x14d400: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d404: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14d404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14d408: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d40c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14d40cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14d410u;
}
