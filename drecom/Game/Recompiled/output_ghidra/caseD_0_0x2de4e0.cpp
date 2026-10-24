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
// Address: 0x2de4e0 - 0x2de51c
void caseD_0_0x2de4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2de4e0");
#endif

    switch (ctx->pc) {
        case 0x2de50cu: goto label_2de50c;
        default: break;
    }

    ctx->pc = 0x2de4e0u;

    // 0x2de4e0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2de4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2de4e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de4e8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2de4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de4ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de4f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de4f4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2de4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2de4f8: 0x24060a26  addiu       $a2, $zero, 0xA26
    ctx->pc = 0x2de4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2598));
    // 0x2de4fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2de4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de500: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2de500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2de504: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DE504u;
    SET_GPR_U32(ctx, 31, 0x2DE50Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DE504u, 0x2DE50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE50Cu;
label_2de50c:
    // 0x2de50c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de510: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2de510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2de514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2de518: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2de518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2de51cu;
}
