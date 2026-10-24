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
// Address: 0x2d4be4 - 0x2d4c1c
void caseD_0_0x2d4be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2d4be4");
#endif

    switch (ctx->pc) {
        case 0x2d4c04u: goto label_2d4c04;
        default: break;
    }

    ctx->pc = 0x2d4be4u;

    // 0x2d4be4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4be8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4bec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d4becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d4bf0: 0x24065a10  addiu       $a2, $zero, 0x5A10
    ctx->pc = 0x2d4bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23056));
    // 0x2d4bf4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4bf8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d4bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d4bfc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D4BFCu;
    SET_GPR_U32(ctx, 31, 0x2D4C04u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D4BFCu, 0x2D4C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C04u;
label_2d4c04:
    // 0x2d4c04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4c08: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d4c08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d4c0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4c10: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d4c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d4c14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4c18: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d4c18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d4c1cu;
}
