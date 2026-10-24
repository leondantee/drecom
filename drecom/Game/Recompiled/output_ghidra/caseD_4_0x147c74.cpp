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
// Address: 0x147c74 - 0x147cb0
void caseD_4_0x147c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x147c74");
#endif

    switch (ctx->pc) {
        case 0x147ca0u: goto label_147ca0;
        default: break;
    }

    ctx->pc = 0x147c74u;

    // 0x147c74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147c78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147c7c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x147c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x147c80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147c84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147c88: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x147c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x147c8c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x147c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x147c90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147c94: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x147c98: 0xc0965d0  jal         func_259740
    ctx->pc = 0x147C98u;
    SET_GPR_U32(ctx, 31, 0x147CA0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147C98u, 0x147CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CA0u;
label_147ca0:
    // 0x147ca0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147ca4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x147ca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x147ca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x147ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x147cac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x147cacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x147cb0u;
}
