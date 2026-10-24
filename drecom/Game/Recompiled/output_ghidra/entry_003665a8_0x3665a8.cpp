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

// Function: entry_003665a8
// Address: 0x3665a8 - 0x3665e4
void entry_003665a8_0x3665a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003665a8_0x3665a8");
#endif

    switch (ctx->pc) {
        case 0x3665c8u: goto label_3665c8;
        default: break;
    }

    ctx->pc = 0x3665a8u;

    // 0x3665a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3665a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3665ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3665acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3665b0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3665b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3665b4: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x3665b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3665b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3665b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3665bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3665bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3665c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3665C0u;
    SET_GPR_U32(ctx, 31, 0x3665C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3665C0u, 0x3665C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3665C8u;
label_3665c8:
    // 0x3665c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3665c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3665cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3665ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3665d0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x3665d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3665d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3665d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3665d8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3665d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3665dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3665dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3665e0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3665e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3665e4u;
}
