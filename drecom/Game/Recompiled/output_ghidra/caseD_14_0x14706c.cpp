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

// Function: caseD_14
// Address: 0x14706c - 0x1470a0
void caseD_14_0x14706c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x14706c");
#endif

    switch (ctx->pc) {
        case 0x147090u: goto label_147090;
        default: break;
    }

    ctx->pc = 0x14706cu;

    // 0x14706c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x14706cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147070: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x147070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147074: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x147074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x147078: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x147078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14707c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147080: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x147080u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147084: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x147088: 0xc0965d0  jal         func_259740
    ctx->pc = 0x147088u;
    SET_GPR_U32(ctx, 31, 0x147090u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147088u, 0x147090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147090u;
label_147090:
    // 0x147090: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147094: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x147094u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x147098: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x147098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14709c: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x14709cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1470a0u;
}
