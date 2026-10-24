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

// Function: caseD_3
// Address: 0x12c0fc - 0x12c120
void caseD_3_0x12c0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x12c0fc");
#endif

    switch (ctx->pc) {
        case 0x12c108u: goto label_12c108;
        default: break;
    }

    ctx->pc = 0x12c0fcu;

    // 0x12c0fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12c0fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x12c100: 0xc057634  jal         func_15D8D0
    ctx->pc = 0x12C100u;
    SET_GPR_U32(ctx, 31, 0x12C108u);
    ctx->pc = 0x15D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D8D0u, 0x12C100u, 0x12C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C108u;
label_12c108:
    // 0x12c108: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C108u;
    {
        const bool branch_taken_0x12c108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c108) {
            ctx->pc = 0x12C120u;
            return;
        }
    }
    ctx->pc = 0x12C110u;
    // 0x12c110: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c114: 0x84451278  lh          $a1, 0x1278($v0)
    ctx->pc = 0x12c114u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x12c118: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x12c118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12c11c: 0xa4471278  sh          $a3, 0x1278($v0)
    ctx->pc = 0x12c11cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 7));
    ctx->pc = 0x12c120u;
}
