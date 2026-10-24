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

// Function: entry_003668f8
// Address: 0x3668f8 - 0x366934
void entry_003668f8_0x3668f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003668f8_0x3668f8");
#endif

    switch (ctx->pc) {
        case 0x366918u: goto label_366918;
        default: break;
    }

    ctx->pc = 0x3668f8u;

    // 0x3668f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3668f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3668fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3668fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366900: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x366904: 0x2406050e  addiu       $a2, $zero, 0x50E
    ctx->pc = 0x366904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    // 0x366908: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x366908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36690c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36690cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366910: 0xc0965d0  jal         func_259740
    ctx->pc = 0x366910u;
    SET_GPR_U32(ctx, 31, 0x366918u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366910u, 0x366918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366918u;
label_366918:
    // 0x366918: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x366918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36691c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366920: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x366920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x366924: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366928: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x366928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36692c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x366930: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x366930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x366934u;
}
