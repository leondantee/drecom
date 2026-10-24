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

// Function: caseD_0
// Address: 0x2704c0 - 0x2704f8
void caseD_0_0x2704c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2704c0");
#endif

    switch (ctx->pc) {
        case 0x2704e0u: goto label_2704e0;
        default: break;
    }

    ctx->pc = 0x2704c0u;

    // 0x2704c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2704c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2704c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2704c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2704c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2704c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2704cc: 0x24060a71  addiu       $a2, $zero, 0xA71
    ctx->pc = 0x2704ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2673));
    // 0x2704d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2704d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2704d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2704d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2704d8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2704D8u;
    SET_GPR_U32(ctx, 31, 0x2704E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2704D8u, 0x2704E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704E0u;
label_2704e0:
    // 0x2704e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2704e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2704e4: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x2704e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2704e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2704e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2704ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2704ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2704f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2704f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2704f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2704f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2704f8u;
}
