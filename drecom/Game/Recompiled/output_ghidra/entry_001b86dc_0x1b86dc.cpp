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

// Function: entry_001b86dc
// Address: 0x1b86dc - 0x1b8700
void entry_001b86dc_0x1b86dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b86dc_0x1b86dc");
#endif

    switch (ctx->pc) {
        case 0x1b86fcu: goto label_1b86fc;
        default: break;
    }

    ctx->pc = 0x1b86dcu;

    // 0x1b86dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b86dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b86e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b86e4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b86e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1b86e8: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x1b86e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x1b86ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b86ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b86f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b86f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b86f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B86F4u;
    SET_GPR_U32(ctx, 31, 0x1B86FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B86F4u, 0x1B86FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B86FCu;
label_1b86fc:
    // 0x1b86fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b86fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b8700u;
}
