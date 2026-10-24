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

// Function: entry_002dfbe0
// Address: 0x2dfbe0 - 0x2dfc0c
void entry_002dfbe0_0x2dfbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dfbe0_0x2dfbe0");
#endif

    switch (ctx->pc) {
        case 0x2dfbf0u: goto label_2dfbf0;
        case 0x2dfbfcu: goto label_2dfbfc;
        default: break;
    }

    ctx->pc = 0x2dfbe0u;

    // 0x2dfbe0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfbe4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dfbe4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dfbe8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DFBE8u;
    SET_GPR_U32(ctx, 31, 0x2DFBF0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DFBE8u, 0x2DFBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBF0u;
label_2dfbf0:
    // 0x2dfbf0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfbf4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DFBF4u;
    SET_GPR_U32(ctx, 31, 0x2DFBFCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DFBF4u, 0x2DFBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBFCu;
label_2dfbfc:
    // 0x2dfbfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfc00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dfc00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dfc04: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DFC04u;
    SET_GPR_U32(ctx, 31, 0x2DFC0Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DFC04u, 0x2DFC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC0Cu;
}
