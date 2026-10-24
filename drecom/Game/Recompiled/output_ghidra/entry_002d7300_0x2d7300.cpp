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

// Function: entry_002d7300
// Address: 0x2d7300 - 0x2d7330
void entry_002d7300_0x2d7300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d7300_0x2d7300");
#endif

    switch (ctx->pc) {
        case 0x2d7320u: goto label_2d7320;
        default: break;
    }

    ctx->pc = 0x2d7300u;

    // 0x2d7300: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7304: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7308: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d7308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d730c: 0x24063c08  addiu       $a2, $zero, 0x3C08
    ctx->pc = 0x2d730cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15368));
    // 0x2d7310: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d7310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7314: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d7314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d7318: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D7318u;
    SET_GPR_U32(ctx, 31, 0x2D7320u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D7318u, 0x2D7320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7320u;
label_2d7320:
    // 0x2d7320: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7324: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d7324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d7328: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d7328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d732c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d732cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d7330u;
}
