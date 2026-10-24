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

// Function: caseD_0
// Address: 0x2dd278 - 0x2dd2d4
void caseD_0_0x2dd278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2dd278");
#endif

    switch (ctx->pc) {
        case 0x2dd2a4u: goto label_2dd2a4;
        default: break;
    }

    ctx->pc = 0x2dd278u;

    // 0x2dd278: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd27c: 0xa20300d6  sb          $v1, 0xD6($s0)
    ctx->pc = 0x2dd27cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dd280: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2dd280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd284: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd288: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd28c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dd28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2dd290: 0x24060a19  addiu       $a2, $zero, 0xA19
    ctx->pc = 0x2dd290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2585));
    // 0x2dd294: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dd294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd298: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dd298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dd29c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DD29Cu;
    SET_GPR_U32(ctx, 31, 0x2DD2A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DD29Cu, 0x2DD2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD2A4u;
label_2dd2a4:
    // 0x2dd2a4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dd2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dd2a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd2ac: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2dd2acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dd2b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd2b4: 0xa480127a  sh          $zero, 0x127A($a0)
    ctx->pc = 0x2dd2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dd2b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd2bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd2c0: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2dd2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dd2c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd2c8: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x2dd2c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dd2cc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2dd2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dd2d0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dd2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2dd2d4u;
}
