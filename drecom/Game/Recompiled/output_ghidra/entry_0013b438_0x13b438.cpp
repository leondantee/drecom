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

// Function: entry_0013b438
// Address: 0x13b438 - 0x13b478
void entry_0013b438_0x13b438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b438_0x13b438");
#endif

    switch (ctx->pc) {
        case 0x13b468u: goto label_13b468;
        default: break;
    }

    ctx->pc = 0x13b438u;

    // 0x13b438: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13b438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13b43c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b440: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x13b440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b444: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x13b444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x13b448: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x13b448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x13b44c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x13b44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x13b450: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x13b450u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDF28u));
    // 0x13b454: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x13b454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x13b458: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13b458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b45c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13b45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13b460: 0xc0965d0  jal         func_259740
    ctx->pc = 0x13B460u;
    SET_GPR_U32(ctx, 31, 0x13B468u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x13B460u, 0x13B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B468u;
label_13b468:
    // 0x13b468: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13b468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b46c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13b46cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x13b470: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13b474: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13b474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13b478u;
}
