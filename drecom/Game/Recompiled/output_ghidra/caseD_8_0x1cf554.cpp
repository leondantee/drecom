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
// Address: 0x1cf554 - 0x1cf58c
void caseD_8_0x1cf554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1cf554");
#endif

    switch (ctx->pc) {
        case 0x1cf578u: goto label_1cf578;
        default: break;
    }

    ctx->pc = 0x1cf554u;

    // 0x1cf554: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf558: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf55c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cf55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1cf560: 0x24101e3f  addiu       $s0, $zero, 0x1E3F
    ctx->pc = 0x1cf560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7743));
    // 0x1cf564: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1cf564u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cf568: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cf568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cf56c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cf56cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cf570: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CF570u;
    SET_GPR_U32(ctx, 31, 0x1CF578u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CF570u, 0x1CF578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF578u;
label_1cf578:
    // 0x1cf578: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf578u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf57c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf580: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x1cf580u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cf584: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1cf584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cf588: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cf588u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1cf58cu;
}
