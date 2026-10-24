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
// Address: 0x2de6b4 - 0x2de6e4
void caseD_4_0x2de6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2de6b4");
#endif

    switch (ctx->pc) {
        case 0x2de6d4u: goto label_2de6d4;
        default: break;
    }

    ctx->pc = 0x2de6b4u;

    // 0x2de6b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de6b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de6bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2de6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2de6c0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2de6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2de6c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2de6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de6c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2de6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2de6cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DE6CCu;
    SET_GPR_U32(ctx, 31, 0x2DE6D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DE6CCu, 0x2DE6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE6D4u;
label_2de6d4:
    // 0x2de6d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de6d8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2de6d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2de6dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2de6e0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2de6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2de6e4u;
}
