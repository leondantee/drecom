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
// Address: 0x2de2d0 - 0x2de30c
void caseD_4_0x2de2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2de2d0");
#endif

    switch (ctx->pc) {
        case 0x2de2f0u: goto label_2de2f0;
        default: break;
    }

    ctx->pc = 0x2de2d0u;

    // 0x2de2d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de2d4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de2d8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2de2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2de2dc: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x2de2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2de2e0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2de2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2de2e4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2de2e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2de2e8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DE2E8u;
    SET_GPR_U32(ctx, 31, 0x2DE2F0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DE2E8u, 0x2DE2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE2F0u;
label_2de2f0:
    // 0x2de2f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2de2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de2f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de2f8: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2de2f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2de2fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de300: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2de300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2de304: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2de308: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2de308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2de30cu;
}
