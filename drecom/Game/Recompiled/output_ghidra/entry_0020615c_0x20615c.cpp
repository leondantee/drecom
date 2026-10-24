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

// Function: entry_0020615c
// Address: 0x20615c - 0x206194
void entry_0020615c_0x20615c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020615c_0x20615c");
#endif

    switch (ctx->pc) {
        case 0x20617cu: goto label_20617c;
        default: break;
    }

    ctx->pc = 0x20615cu;

    // 0x20615c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206160: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206164: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x206164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x206168: 0x24065a0c  addiu       $a2, $zero, 0x5A0C
    ctx->pc = 0x206168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23052));
    // 0x20616c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20616cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206170: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x206170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x206174: 0xc0965d0  jal         func_259740
    ctx->pc = 0x206174u;
    SET_GPR_U32(ctx, 31, 0x20617Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x206174u, 0x20617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20617Cu;
label_20617c:
    // 0x20617c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206180: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x206180u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x206184: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x206184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206188: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x206188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20618c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x206190: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x206190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x206194u;
}
