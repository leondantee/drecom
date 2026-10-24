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

// Function: entry_001d14f4
// Address: 0x1d14f4 - 0x1d1518
void entry_001d14f4_0x1d14f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d14f4_0x1d14f4");
#endif

    switch (ctx->pc) {
        case 0x1d150cu: goto label_1d150c;
        default: break;
    }

    ctx->pc = 0x1d14f4u;

    // 0x1d14f4: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x1d14f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x1d14f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d14f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d14fc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1d14fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1500: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d1500u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d1504: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1D1504u;
    SET_GPR_U32(ctx, 31, 0x1D150Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1D1504u, 0x1D150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D150Cu;
label_1d150c:
    // 0x1d150c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d150cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d1510: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1D1510u;
    SET_GPR_U32(ctx, 31, 0x1D1518u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1D1510u, 0x1D1518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1518u;
}
