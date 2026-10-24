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

// Function: entry_00376e90
// Address: 0x376e90 - 0x376ee0
void entry_00376e90_0x376e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00376e90_0x376e90");
#endif

    switch (ctx->pc) {
        case 0x376ebcu: goto label_376ebc;
        default: break;
    }

    ctx->pc = 0x376e90u;

    // 0x376e90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376e94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376e98: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x376e98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x376e9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376ea0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376ea4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376ea8: 0x24060805  addiu       $a2, $zero, 0x805
    ctx->pc = 0x376ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
    // 0x376eac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376eb0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x376eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376eb4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x376EB4u;
    SET_GPR_U32(ctx, 31, 0x376EBCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x376EB4u, 0x376EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376EBCu;
label_376ebc:
    // 0x376ebc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x376ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x376ec0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376ec4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x376ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x376ec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376ecc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376ed0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x376ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x376ed4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x376ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x376ed8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376edc: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x376edcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x376ee0u;
}
