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
// Address: 0x147d64 - 0x147da0
void caseD_6_0x147d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x147d64");
#endif

    switch (ctx->pc) {
        case 0x147d90u: goto label_147d90;
        default: break;
    }

    ctx->pc = 0x147d64u;

    // 0x147d64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147d68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147d6c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x147d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x147d70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147d74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147d78: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x147d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x147d7c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x147d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x147d80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147d84: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x147d88: 0xc0965d0  jal         func_259740
    ctx->pc = 0x147D88u;
    SET_GPR_U32(ctx, 31, 0x147D90u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147D88u, 0x147D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D90u;
label_147d90:
    // 0x147d90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147d94: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x147d94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x147d98: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x147d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x147d9c: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x147d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x147da0u;
}
