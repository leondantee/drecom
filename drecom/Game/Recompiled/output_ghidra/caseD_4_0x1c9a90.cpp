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

// Function: caseD_4
// Address: 0x1c9a90 - 0x1c9ad4
void caseD_4_0x1c9a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1c9a90");
#endif

    switch (ctx->pc) {
        case 0x1c9ab0u: goto label_1c9ab0;
        default: break;
    }

    ctx->pc = 0x1c9a90u;

    // 0x1c9a90: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9a94: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9a98: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1c9a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1c9a9c: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x1c9a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1c9aa0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9aa4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c9aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c9aa8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C9AA8u;
    SET_GPR_U32(ctx, 31, 0x1C9AB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C9AA8u, 0x1C9AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AB0u;
label_1c9ab0:
    // 0x1c9ab0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1c9ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c9ab4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9ab8: 0xa064157d  sb          $a0, 0x157D($v1)
    ctx->pc = 0x1c9ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5501), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c9abc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9ac0: 0xa06013b4  sb          $zero, 0x13B4($v1)
    ctx->pc = 0x1c9ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5044), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9ac4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9ac8: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1c9ac8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c9acc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1c9accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c9ad0: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c9ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c9ad4u;
}
