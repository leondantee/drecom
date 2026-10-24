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

// Function: entry_00371a48
// Address: 0x371a48 - 0x371a7c
void entry_00371a48_0x371a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371a48_0x371a48");
#endif

    switch (ctx->pc) {
        case 0x371a64u: goto label_371a64;
        default: break;
    }

    ctx->pc = 0x371a48u;

    // 0x371a48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a4c: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x371a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x371a50: 0x24060f01  addiu       $a2, $zero, 0xF01
    ctx->pc = 0x371a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3841));
    // 0x371a54: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x371a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x371a58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x371a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x371a5c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x371A5Cu;
    SET_GPR_U32(ctx, 31, 0x371A64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x371A5Cu, 0x371A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371A64u;
label_371a64:
    // 0x371a64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x371a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371a68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a6c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x371a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x371a70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x371a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371a74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a78: 0xa0431576  sb          $v1, 0x1576($v0)
    ctx->pc = 0x371a78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x371a7cu;
}
