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

// Function: caseD_0
// Address: 0x147664 - 0x1476a0
void caseD_0_0x147664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x147664");
#endif

    switch (ctx->pc) {
        case 0x147684u: goto label_147684;
        default: break;
    }

    ctx->pc = 0x147664u;

    // 0x147664: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147668: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14766c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14766cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x147670: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x147670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x147674: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147678: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14767c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14767Cu;
    SET_GPR_U32(ctx, 31, 0x147684u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14767Cu, 0x147684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147684u;
label_147684:
    // 0x147684: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x147684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x147688: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14768c: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x14768cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x147690: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147694: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x147694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x147698: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x147698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14769c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14769cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1476a0u;
}
