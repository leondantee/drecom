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
// Address: 0x1cbeb8 - 0x1cbefc
void caseD_6_0x1cbeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1cbeb8");
#endif

    switch (ctx->pc) {
        case 0x1cbed8u: goto label_1cbed8;
        default: break;
    }

    ctx->pc = 0x1cbeb8u;

    // 0x1cbeb8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbebc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbec0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cbec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1cbec4: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x1cbec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1cbec8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbecc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbeccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cbed0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CBED0u;
    SET_GPR_U32(ctx, 31, 0x1CBED8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBED0u, 0x1CBED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBED8u;
label_1cbed8:
    // 0x1cbed8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cbed8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cbedc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1cbedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cbee0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1cbee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cbee4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbee8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbeec: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbeecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbef0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cbef4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1CBEF4u;
    {
        const bool branch_taken_0x1cbef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbef4) {
            ctx->pc = 0x1CBFB8u;
            return;
        }
    }
    ctx->pc = 0x1CBEFCu;
}
