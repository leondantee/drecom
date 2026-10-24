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

// Function: entry_001f3404
// Address: 0x1f3404 - 0x1f3464
void entry_001f3404_0x1f3404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3404_0x1f3404");
#endif

    switch (ctx->pc) {
        case 0x1f3430u: goto label_1f3430;
        default: break;
    }

    ctx->pc = 0x1f3404u;

    // 0x1f3404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3408: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f340c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f340cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3410: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3414: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f3414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3418: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f3418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f341c: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x1f341cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1f3420: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3424: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f3424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3428: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3428u;
    SET_GPR_U32(ctx, 31, 0x1F3430u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3428u, 0x1F3430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3430u;
label_1f3430:
    // 0x1f3430: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3434: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f3434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3438: 0x84830078  lh          $v1, 0x78($a0)
    ctx->pc = 0x1f3438u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x1f343c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1f343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1f3440: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1f3440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f3444: 0xa4820078  sh          $v0, 0x78($a0)
    ctx->pc = 0x1f3444u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f3448: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f3448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f344c: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f344cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f3450: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1f3450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1f3454: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f3458: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f3458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f345c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f345cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f3460: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1f3460u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    ctx->pc = 0x1f3464u;
}
