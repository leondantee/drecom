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

// Function: caseD_6
// Address: 0x146ab8 - 0x146b00
void caseD_6_0x146ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x146ab8");
#endif

    switch (ctx->pc) {
        case 0x146ae0u: goto label_146ae0;
        default: break;
    }

    ctx->pc = 0x146ab8u;

    // 0x146ab8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146abc: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x146abcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146ac0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x146ac0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x146ac4: 0x8ce80368  lw          $t0, 0x368($a3)
    ctx->pc = 0x146ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 872)));
    // 0x146ac8: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x146ac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x146acc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x146accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x146ad0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146ad4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x146ad8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x146AD8u;
    SET_GPR_U32(ctx, 31, 0x146AE0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146AD8u, 0x146AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146AE0u;
label_146ae0:
    // 0x146ae0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146ae4: 0x8c821b64  lw          $v0, 0x1B64($a0)
    ctx->pc = 0x146ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
    // 0x146ae8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x146ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x146aec: 0xac821b64  sw          $v0, 0x1B64($a0)
    ctx->pc = 0x146aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7012), GPR_U32(ctx, 2));
    // 0x146af0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146af4: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x146af4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x146af8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x146af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x146afc: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x146afcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x146b00u;
}
