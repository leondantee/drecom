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

// Function: caseD_5
// Address: 0x1cbe74 - 0x1cbeb8
void caseD_5_0x1cbe74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1cbe74");
#endif

    switch (ctx->pc) {
        case 0x1cbe94u: goto label_1cbe94;
        default: break;
    }

    ctx->pc = 0x1cbe74u;

    // 0x1cbe74: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbe74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbe78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbe7c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cbe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1cbe80: 0x24060a71  addiu       $a2, $zero, 0xA71
    ctx->pc = 0x1cbe80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2673));
    // 0x1cbe84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbe84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbe88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbe88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cbe8c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CBE8Cu;
    SET_GPR_U32(ctx, 31, 0x1CBE94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBE8Cu, 0x1CBE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE94u;
label_1cbe94:
    // 0x1cbe94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cbe94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cbe98: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cbe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cbe9c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1cbe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cbea0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbea0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbea4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbea8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbeac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbeacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cbeb0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1CBEB0u;
    {
        const bool branch_taken_0x1cbeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbeb0) {
            ctx->pc = 0x1CBFB8u;
            return;
        }
    }
    ctx->pc = 0x1CBEB8u;
}
