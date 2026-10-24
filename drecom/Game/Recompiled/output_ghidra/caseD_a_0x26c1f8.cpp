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

// Function: caseD_a
// Address: 0x26c1f8 - 0x26c21c
void caseD_a_0x26c1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x26c1f8");
#endif

    switch (ctx->pc) {
        case 0x26c218u: goto label_26c218;
        default: break;
    }

    ctx->pc = 0x26c1f8u;

    // 0x26c1f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c1fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c200: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26c200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26c204: 0x24060a6f  addiu       $a2, $zero, 0xA6F
    ctx->pc = 0x26c204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2671));
    // 0x26c208: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c20c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c20cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26c210: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26C210u;
    SET_GPR_U32(ctx, 31, 0x26C218u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C210u, 0x26C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C218u;
label_26c218:
    // 0x26c218: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c218u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x26c21cu;
}
