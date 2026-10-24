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

// Function: entry_002df410
// Address: 0x2df410 - 0x2df458
void entry_002df410_0x2df410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df410_0x2df410");
#endif

    switch (ctx->pc) {
        case 0x2df43cu: goto label_2df43c;
        default: break;
    }

    ctx->pc = 0x2df410u;

    // 0x2df410: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2df410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2df414: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df418: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2df418u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2df41c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df420: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df424: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2df424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2df428: 0x24060a25  addiu       $a2, $zero, 0xA25
    ctx->pc = 0x2df428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2597));
    // 0x2df42c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2df42cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2df430: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2df430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df434: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DF434u;
    SET_GPR_U32(ctx, 31, 0x2DF43Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DF434u, 0x2DF43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF43Cu;
label_2df43c:
    // 0x2df43c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2df43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2df440: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df444: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2df444u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2df448: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df44c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2df44cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2df450: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2df450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2df454: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2df454u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2df458u;
}
