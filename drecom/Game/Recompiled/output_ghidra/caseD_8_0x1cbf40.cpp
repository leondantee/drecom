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
// Address: 0x1cbf40 - 0x1cbf80
void caseD_8_0x1cbf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1cbf40");
#endif

    switch (ctx->pc) {
        case 0x1cbf60u: goto label_1cbf60;
        default: break;
    }

    ctx->pc = 0x1cbf40u;

    // 0x1cbf40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbf44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbf48: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cbf48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1cbf4c: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x1cbf4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x1cbf50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbf50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbf54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbf54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cbf58: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CBF58u;
    SET_GPR_U32(ctx, 31, 0x1CBF60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBF58u, 0x1CBF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF60u;
label_1cbf60:
    // 0x1cbf60: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1cbf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cbf64: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1cbf64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cbf68: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbf68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbf6c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbf70: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbf70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbf74: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbf74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cbf78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CBF78u;
    {
        const bool branch_taken_0x1cbf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbf78) {
            ctx->pc = 0x1CBFB8u;
            return;
        }
    }
    ctx->pc = 0x1CBF80u;
}
