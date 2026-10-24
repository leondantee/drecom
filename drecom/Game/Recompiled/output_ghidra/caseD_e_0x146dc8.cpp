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

// Function: caseD_e
// Address: 0x146dc8 - 0x146e00
void caseD_e_0x146dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x146dc8");
#endif

    switch (ctx->pc) {
        case 0x146decu: goto label_146dec;
        default: break;
    }

    ctx->pc = 0x146dc8u;

    // 0x146dc8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146dcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146dd0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x146dd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x146dd4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x146dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x146dd8: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x146dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x146ddc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146de0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x146de4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x146DE4u;
    SET_GPR_U32(ctx, 31, 0x146DECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146DE4u, 0x146DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146DECu;
label_146dec:
    // 0x146dec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146decu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146df0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146df4: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x146df4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x146df8: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x146df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x146dfc: 0xa0460002  sb          $a2, 0x2($v0)
    ctx->pc = 0x146dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x146e00u;
}
