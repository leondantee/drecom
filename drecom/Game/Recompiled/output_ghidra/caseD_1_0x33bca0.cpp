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

// Function: caseD_1
// Address: 0x33bca0 - 0x33bcdc
void caseD_1_0x33bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x33bca0");
#endif

    switch (ctx->pc) {
        case 0x33bcb8u: goto label_33bcb8;
        default: break;
    }

    ctx->pc = 0x33bca0u;

    // 0x33bca0: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x33bca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x33bca4: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x33bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x33bca8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33bca8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33bcac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x33bcacu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33bcb0: 0xc0cf480  jal         func_33D200
    ctx->pc = 0x33BCB0u;
    SET_GPR_U32(ctx, 31, 0x33BCB8u);
    ctx->pc = 0x33D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D200u, 0x33BCB0u, 0x33BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BCB8u;
label_33bcb8:
    // 0x33bcb8: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x33bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x33bcbc: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x33bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x33bcc0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33BCC0u;
    {
        const bool branch_taken_0x33bcc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bcc0) {
            ctx->pc = 0x33BCDCu;
            return;
        }
    }
    ctx->pc = 0x33BCC8u;
    // 0x33bcc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33bccc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x33bcccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33bcd0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x33bcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x33bcd4: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x33BCD4u;
    {
        const bool branch_taken_0x33bcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bcd4) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BCDCu;
}
