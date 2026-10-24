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

// Function: caseD_4
// Address: 0x1cbe34 - 0x1cbe74
void caseD_4_0x1cbe34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1cbe34");
#endif

    switch (ctx->pc) {
        case 0x1cbe54u: goto label_1cbe54;
        default: break;
    }

    ctx->pc = 0x1cbe34u;

    // 0x1cbe34: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbe34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbe38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbe3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cbe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1cbe40: 0x24063c9d  addiu       $a2, $zero, 0x3C9D
    ctx->pc = 0x1cbe40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15517));
    // 0x1cbe44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbe44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbe48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbe48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cbe4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CBE4Cu;
    SET_GPR_U32(ctx, 31, 0x1CBE54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBE4Cu, 0x1CBE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE54u;
label_1cbe54:
    // 0x1cbe54: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cbe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cbe58: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1cbe58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cbe5c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbe5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbe60: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbe60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbe64: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbe64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbe68: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbe68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cbe6c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1CBE6Cu;
    {
        const bool branch_taken_0x1cbe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbe6c) {
            ctx->pc = 0x1CBFB8u;
            return;
        }
    }
    ctx->pc = 0x1CBE74u;
}
