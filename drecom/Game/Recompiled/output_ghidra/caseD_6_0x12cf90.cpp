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
// Address: 0x12cf90 - 0x12cfd0
void caseD_6_0x12cf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x12cf90");
#endif

    switch (ctx->pc) {
        case 0x12cfb0u: goto label_12cfb0;
        default: break;
    }

    ctx->pc = 0x12cf90u;

    // 0x12cf90: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cf94: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cf98: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x12cf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x12cf9c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x12cf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x12cfa0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12cfa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cfa4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12cfa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12cfa8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12CFA8u;
    SET_GPR_U32(ctx, 31, 0x12CFB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12CFA8u, 0x12CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFB0u;
label_12cfb0:
    // 0x12cfb0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x12cfb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12cfb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12cfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cfb8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x12cfb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cfbc: 0xa5071278  sh          $a3, 0x1278($t0)
    ctx->pc = 0x12cfbcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4728), (uint16_t)GPR_U32(ctx, 7));
    // 0x12cfc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cfc4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x12cfc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x12cfc8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x12cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12cfcc: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x12cfccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x12cfd0u;
}
