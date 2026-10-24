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

// Function: caseD_2
// Address: 0x2d2974 - 0x2d29a4
void caseD_2_0x2d2974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x2d2974");
#endif

    switch (ctx->pc) {
        case 0x2d2994u: goto label_2d2994;
        default: break;
    }

    ctx->pc = 0x2d2974u;

    // 0x2d2974: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2978: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d297c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d297cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d2980: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2d2980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d2984: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2988: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d2988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d298c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D298Cu;
    SET_GPR_U32(ctx, 31, 0x2D2994u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D298Cu, 0x2D2994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2994u;
label_2d2994:
    // 0x2d2994: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2998: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d2998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d299c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d29a0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d29a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d29a4u;
}
