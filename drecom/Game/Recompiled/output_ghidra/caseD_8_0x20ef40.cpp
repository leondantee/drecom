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

// Function: caseD_8
// Address: 0x20ef40 - 0x20ef64
void caseD_8_0x20ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x20ef40");
#endif

    switch (ctx->pc) {
        case 0x20ef60u: goto label_20ef60;
        default: break;
    }

    ctx->pc = 0x20ef40u;

    // 0x20ef40: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ef44: 0x84691278  lh          $t1, 0x1278($v1)
    ctx->pc = 0x20ef44u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20ef48: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x20ef48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x20ef4c: 0xa46a1278  sh          $t2, 0x1278($v1)
    ctx->pc = 0x20ef4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 10));
    // 0x20ef50: 0x8fa80528  lw          $t0, 0x528($sp)
    ctx->pc = 0x20ef50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ef54: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x20ef54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x20ef58: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20EF58u;
    SET_GPR_U32(ctx, 31, 0x20EF60u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20EF58u, 0x20EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF60u;
label_20ef60:
    // 0x20ef60: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x20ef60u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20ef64u;
}
