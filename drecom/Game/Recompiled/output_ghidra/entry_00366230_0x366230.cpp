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

// Function: entry_00366230
// Address: 0x366230 - 0x366260
void entry_00366230_0x366230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366230_0x366230");
#endif

    switch (ctx->pc) {
        case 0x366250u: goto label_366250;
        default: break;
    }

    ctx->pc = 0x366230u;

    // 0x366230: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366234: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366238: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36623c: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x36623cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x366240: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x366240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366244: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x366244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366248: 0xc0965d0  jal         func_259740
    ctx->pc = 0x366248u;
    SET_GPR_U32(ctx, 31, 0x366250u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366248u, 0x366250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366250u;
label_366250:
    // 0x366250: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366254: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x366254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366258: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36625c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36625cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x366260u;
}
