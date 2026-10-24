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

// Function: entry_002dc3ac
// Address: 0x2dc3ac - 0x2dc3f8
void entry_002dc3ac_0x2dc3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc3ac_0x2dc3ac");
#endif

    switch (ctx->pc) {
        case 0x2dc3d0u: goto label_2dc3d0;
        default: break;
    }

    ctx->pc = 0x2dc3acu;

    // 0x2dc3ac: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2dc3acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc3b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc3b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc3b8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dc3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2dc3bc: 0x24060a40  addiu       $a2, $zero, 0xA40
    ctx->pc = 0x2dc3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x2dc3c0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2dc3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dc3c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dc3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dc3c8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DC3C8u;
    SET_GPR_U32(ctx, 31, 0x2DC3D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DC3C8u, 0x2DC3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC3D0u;
label_2dc3d0:
    // 0x2dc3d0: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2dc3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc3d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc3d8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2dc3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc3dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dc3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc3e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc3e4: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2dc3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc3e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc3ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dc3ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dc3f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dc3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dc3f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dc3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2dc3f8u;
}
