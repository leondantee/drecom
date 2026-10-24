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

// Function: entry_002dbb94
// Address: 0x2dbb94 - 0x2dbbe0
void entry_002dbb94_0x2dbb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dbb94_0x2dbb94");
#endif

    switch (ctx->pc) {
        case 0x2dbbb8u: goto label_2dbbb8;
        default: break;
    }

    ctx->pc = 0x2dbb94u;

    // 0x2dbb94: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2dbb94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbb98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbb9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbba0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dbba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2dbba4: 0x24060a3d  addiu       $a2, $zero, 0xA3D
    ctx->pc = 0x2dbba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2621));
    // 0x2dbba8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dbba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbbac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dbbacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dbbb0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DBBB0u;
    SET_GPR_U32(ctx, 31, 0x2DBBB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DBBB0u, 0x2DBBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBBB8u;
label_2dbbb8:
    // 0x2dbbb8: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2dbbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbbbc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbbc0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2dbbc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dbbc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dbbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbbc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbbcc: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2dbbccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbbd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbbd4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dbbd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dbbd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dbbdc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dbbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2dbbe0u;
}
