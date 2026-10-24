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

// Function: entry_002d7434
// Address: 0x2d7434 - 0x2d7464
void entry_002d7434_0x2d7434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d7434_0x2d7434");
#endif

    switch (ctx->pc) {
        case 0x2d7454u: goto label_2d7454;
        default: break;
    }

    ctx->pc = 0x2d7434u;

    // 0x2d7434: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7438: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d743c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d743cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d7440: 0x24063c0a  addiu       $a2, $zero, 0x3C0A
    ctx->pc = 0x2d7440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15370));
    // 0x2d7444: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d7444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7448: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d7448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d744c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D744Cu;
    SET_GPR_U32(ctx, 31, 0x2D7454u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D744Cu, 0x2D7454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7454u;
label_2d7454:
    // 0x2d7454: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7458: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d7458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d745c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d7460: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d7460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d7464u;
}
