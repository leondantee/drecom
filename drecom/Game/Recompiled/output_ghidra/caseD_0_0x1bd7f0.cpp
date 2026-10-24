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
// Address: 0x1bd7f0 - 0x1bd840
void caseD_0_0x1bd7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1bd7f0");
#endif

    switch (ctx->pc) {
        case 0x1bd81cu: goto label_1bd81c;
        default: break;
    }

    ctx->pc = 0x1bd7f0u;

    // 0x1bd7f0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1bd7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bd7f4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bd7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd7f8: 0xa0a610a8  sb          $a2, 0x10A8($a1)
    ctx->pc = 0x1bd7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 6));
    // 0x1bd7fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd800: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd804: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1bd804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1bd808: 0x24060595  addiu       $a2, $zero, 0x595
    ctx->pc = 0x1bd808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1429));
    // 0x1bd80c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bd80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd810: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bd810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bd814: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BD814u;
    SET_GPR_U32(ctx, 31, 0x1BD81Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BD814u, 0x1BD81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD81Cu;
label_1bd81c:
    // 0x1bd81c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bd81cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bd820: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd824: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1bd824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bd828: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD828u;
    {
        const bool branch_taken_0x1bd828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd828) {
            ctx->pc = 0x1BD840u;
            return;
        }
    }
    ctx->pc = 0x1BD830u;
    // 0x1bd830: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd834: 0xac6013f0  sw          $zero, 0x13F0($v1)
    ctx->pc = 0x1bd834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5104), GPR_U32(ctx, 0));
    // 0x1bd838: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD838u;
    {
        const bool branch_taken_0x1bd838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd838) {
            ctx->pc = 0x1BD858u;
            return;
        }
    }
    ctx->pc = 0x1BD840u;
}
