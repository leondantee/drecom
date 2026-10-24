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

// Function: caseD_1a
// Address: 0x14730c - 0x147350
void caseD_1a_0x14730c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1a_0x14730c");
#endif

    switch (ctx->pc) {
        case 0x14733cu: goto label_14733c;
        default: break;
    }

    ctx->pc = 0x14730cu;

    // 0x14730c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x14730cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147310: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x147310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147314: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x147314u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x147318: 0x8cc70368  lw          $a3, 0x368($a2)
    ctx->pc = 0x147318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 872)));
    // 0x14731c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x14731cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x147320: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x147320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x147324: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x147324u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x147328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14732c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x14732cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147330: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x147334: 0xc0965d0  jal         func_259740
    ctx->pc = 0x147334u;
    SET_GPR_U32(ctx, 31, 0x14733Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147334u, 0x14733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14733Cu;
label_14733c:
    // 0x14733c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x14733cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147340: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x147340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147344: 0x90c70002  lbu         $a3, 0x2($a2)
    ctx->pc = 0x147344u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x147348: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x147348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14734c: 0xa0c80002  sb          $t0, 0x2($a2)
    ctx->pc = 0x14734cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x147350u;
}
