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

// Function: caseD_8
// Address: 0x2078a8 - 0x2078e0
void caseD_8_0x2078a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x2078a8");
#endif

    switch (ctx->pc) {
        case 0x2078c8u: goto label_2078c8;
        default: break;
    }

    ctx->pc = 0x2078a8u;

    // 0x2078a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2078a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2078ac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2078acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2078b0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2078b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2078b4: 0x24067804  addiu       $a2, $zero, 0x7804
    ctx->pc = 0x2078b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30724));
    // 0x2078b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2078b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2078bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2078bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2078c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2078C0u;
    SET_GPR_U32(ctx, 31, 0x2078C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2078C0u, 0x2078C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2078C8u;
label_2078c8:
    // 0x2078c8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2078c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2078cc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2078ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2078d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2078d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2078d4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2078d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2078d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2078d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2078dc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2078dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2078e0u;
}
