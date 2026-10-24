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
// Address: 0x270708 - 0x270738
void caseD_6_0x270708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x270708");
#endif

    switch (ctx->pc) {
        case 0x270728u: goto label_270728;
        default: break;
    }

    ctx->pc = 0x270708u;

    // 0x270708: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27070c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x27070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270710: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x270710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x270714: 0x24061461  addiu       $a2, $zero, 0x1461
    ctx->pc = 0x270714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5217));
    // 0x270718: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27071c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x27071cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x270720: 0xc0965d0  jal         func_259740
    ctx->pc = 0x270720u;
    SET_GPR_U32(ctx, 31, 0x270728u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x270720u, 0x270728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270728u;
label_270728:
    // 0x270728: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27072c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x27072cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x270730: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x270734: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x270734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x270738u;
}
