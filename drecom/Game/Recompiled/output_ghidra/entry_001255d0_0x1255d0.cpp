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

// Function: entry_001255d0
// Address: 0x1255d0 - 0x125600
void entry_001255d0_0x1255d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001255d0_0x1255d0");
#endif

    switch (ctx->pc) {
        case 0x1255f0u: goto label_1255f0;
        default: break;
    }

    ctx->pc = 0x1255d0u;

    // 0x1255d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1255d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1255d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1255d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1255d8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1255d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1255dc: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1255dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1255e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1255e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1255e4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1255e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1255e8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1255E8u;
    SET_GPR_U32(ctx, 31, 0x1255F0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1255E8u, 0x1255F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1255F0u;
label_1255f0:
    // 0x1255f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1255f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1255f4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1255f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1255f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1255f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1255fc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1255fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x125600u;
}
