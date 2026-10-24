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
// Address: 0x36500c - 0x36503c
void caseD_4_0x36500c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x36500c");
#endif

    switch (ctx->pc) {
        case 0x36502cu: goto label_36502c;
        default: break;
    }

    ctx->pc = 0x36500cu;

    // 0x36500c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365010: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x365010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365014: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x365014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x365018: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x365018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x36501c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36501cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365020: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x365020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x365024: 0xc0965d0  jal         func_259740
    ctx->pc = 0x365024u;
    SET_GPR_U32(ctx, 31, 0x36502Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x365024u, 0x36502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36502Cu;
label_36502c:
    // 0x36502c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36502cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365030: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x365030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x365038: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x365038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36503cu;
}
