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
// Address: 0x2ddd08 - 0x2ddd40
void caseD_a_0x2ddd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x2ddd08");
#endif

    switch (ctx->pc) {
        case 0x2ddd2cu: goto label_2ddd2c;
        default: break;
    }

    ctx->pc = 0x2ddd08u;

    // 0x2ddd08: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2ddd08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddd0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddd10: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddd14: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2ddd14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2ddd18: 0x24061e23  addiu       $a2, $zero, 0x1E23
    ctx->pc = 0x2ddd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7715));
    // 0x2ddd1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ddd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ddd20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2ddd20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ddd24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DDD24u;
    SET_GPR_U32(ctx, 31, 0x2DDD2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DDD24u, 0x2DDD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD2Cu;
label_2ddd2c:
    // 0x2ddd2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ddd2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ddd30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddd34: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2ddd34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ddd38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ddd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ddd3c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2ddd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2ddd40u;
}
