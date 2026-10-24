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

// Function: entry_0036e404
// Address: 0x36e404 - 0x36e434
void entry_0036e404_0x36e404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e404_0x36e404");
#endif

    switch (ctx->pc) {
        case 0x36e424u: goto label_36e424;
        default: break;
    }

    ctx->pc = 0x36e404u;

    // 0x36e404: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e408: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e40c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e410: 0x24065a03  addiu       $a2, $zero, 0x5A03
    ctx->pc = 0x36e410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23043));
    // 0x36e414: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e418: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e41c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E41Cu;
    SET_GPR_U32(ctx, 31, 0x36E424u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E41Cu, 0x36E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E424u;
label_36e424:
    // 0x36e424: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e428: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e42c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e430: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36e434u;
}
