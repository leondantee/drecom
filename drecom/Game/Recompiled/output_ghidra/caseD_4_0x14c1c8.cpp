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
// Address: 0x14c1c8 - 0x14c204
void caseD_4_0x14c1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x14c1c8");
#endif

    switch (ctx->pc) {
        case 0x14c1e8u: goto label_14c1e8;
        default: break;
    }

    ctx->pc = 0x14c1c8u;

    // 0x14c1c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c1cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c1d0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14c1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14c1d4: 0x240600a6  addiu       $a2, $zero, 0xA6
    ctx->pc = 0x14c1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x14c1d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14c1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c1dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14c1dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14c1e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14C1E0u;
    SET_GPR_U32(ctx, 31, 0x14C1E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14C1E0u, 0x14C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1E8u;
label_14c1e8:
    // 0x14c1e8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x14c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x14c1ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c1f0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x14c1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x14c1f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c1f8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14c1f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14c1fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c200: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14c200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14c204u;
}
