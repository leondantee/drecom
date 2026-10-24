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

// Function: caseD_6
// Address: 0x2075f8 - 0x207630
void caseD_6_0x2075f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x2075f8");
#endif

    switch (ctx->pc) {
        case 0x207618u: goto label_207618;
        default: break;
    }

    ctx->pc = 0x2075f8u;

    // 0x2075f8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2075f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2075fc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2075fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207600: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x207600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x207604: 0x24067803  addiu       $a2, $zero, 0x7803
    ctx->pc = 0x207604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30723));
    // 0x207608: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x207608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20760c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20760cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x207610: 0xc0965d0  jal         func_259740
    ctx->pc = 0x207610u;
    SET_GPR_U32(ctx, 31, 0x207618u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x207610u, 0x207618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207618u;
label_207618:
    // 0x207618: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20761c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20761cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x207620: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207624: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x207624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x207628: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20762c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20762cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x207630u;
}
