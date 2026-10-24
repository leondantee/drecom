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

// Function: caseD_0
// Address: 0x1cbd38 - 0x1cbd78
void caseD_0_0x1cbd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1cbd38");
#endif

    switch (ctx->pc) {
        case 0x1cbd58u: goto label_1cbd58;
        default: break;
    }

    ctx->pc = 0x1cbd38u;

    // 0x1cbd38: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbd3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbd40: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cbd40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1cbd44: 0x24063c61  addiu       $a2, $zero, 0x3C61
    ctx->pc = 0x1cbd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15457));
    // 0x1cbd48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbd48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbd4c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbd4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cbd50: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CBD50u;
    SET_GPR_U32(ctx, 31, 0x1CBD58u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBD50u, 0x1CBD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBD58u;
label_1cbd58:
    // 0x1cbd58: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cbd58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cbd5c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1cbd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbd60: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbd60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbd64: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbd64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbd68: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbd68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbd6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cbd70: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1CBD70u;
    {
        const bool branch_taken_0x1cbd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd70) {
            ctx->pc = 0x1CBFB8u;
            return;
        }
    }
    ctx->pc = 0x1CBD78u;
}
