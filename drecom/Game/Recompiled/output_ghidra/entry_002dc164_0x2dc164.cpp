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

// Function: entry_002dc164
// Address: 0x2dc164 - 0x2dc1b0
void entry_002dc164_0x2dc164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc164_0x2dc164");
#endif

    switch (ctx->pc) {
        case 0x2dc188u: goto label_2dc188;
        default: break;
    }

    ctx->pc = 0x2dc164u;

    // 0x2dc164: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2dc164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc168: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc16c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc170: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dc170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2dc174: 0x24060a40  addiu       $a2, $zero, 0xA40
    ctx->pc = 0x2dc174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x2dc178: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dc178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc17c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dc17cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dc180: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DC180u;
    SET_GPR_U32(ctx, 31, 0x2DC188u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DC180u, 0x2DC188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC188u;
label_2dc188:
    // 0x2dc188: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2dc188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc18c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc190: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2dc190u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dc194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc198: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc19c: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2dc19cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc1a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc1a4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dc1a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dc1a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dc1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dc1ac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dc1acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2dc1b0u;
}
