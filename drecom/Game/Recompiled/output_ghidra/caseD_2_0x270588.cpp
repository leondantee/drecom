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

// Function: caseD_2
// Address: 0x270588 - 0x2705b8
void caseD_2_0x270588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x270588");
#endif

    switch (ctx->pc) {
        case 0x2705a8u: goto label_2705a8;
        default: break;
    }

    ctx->pc = 0x270588u;

    // 0x270588: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27058c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x27058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270590: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x270590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x270594: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x270594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x270598: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27059c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x27059cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2705a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2705A0u;
    SET_GPR_U32(ctx, 31, 0x2705A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2705A0u, 0x2705A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705A8u;
label_2705a8:
    // 0x2705a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2705a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2705ac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2705acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2705b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2705b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2705b4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2705b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2705b8u;
}
