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
// Address: 0x270648 - 0x270678
void caseD_4_0x270648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x270648");
#endif

    switch (ctx->pc) {
        case 0x270668u: goto label_270668;
        default: break;
    }

    ctx->pc = 0x270648u;

    // 0x270648: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27064c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x27064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270650: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x270650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x270654: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x270654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x270658: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27065c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x27065cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x270660: 0xc0965d0  jal         func_259740
    ctx->pc = 0x270660u;
    SET_GPR_U32(ctx, 31, 0x270668u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x270660u, 0x270668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270668u;
label_270668:
    // 0x270668: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27066c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x27066cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x270670: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x270674: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x270674u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x270678u;
}
