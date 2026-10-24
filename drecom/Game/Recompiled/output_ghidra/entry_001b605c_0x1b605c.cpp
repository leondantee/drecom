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

// Function: entry_001b605c
// Address: 0x1b605c - 0x1b6094
void entry_001b605c_0x1b605c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b605c_0x1b605c");
#endif

    switch (ctx->pc) {
        case 0x1b6068u: goto label_1b6068;
        default: break;
    }

    ctx->pc = 0x1b605cu;

    // 0x1b605c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b605cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b6060: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1B6060u;
    SET_GPR_U32(ctx, 31, 0x1B6068u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B6060u, 0x1B6068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6068u;
label_1b6068:
    // 0x1b6068: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1b6068u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b606c: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B606Cu;
    {
        const bool branch_taken_0x1b606c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b606c) {
            ctx->pc = 0x1B6114u;
            return;
        }
    }
    ctx->pc = 0x1B6074u;
    // 0x1b6074: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b6074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6078: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6078u;
    {
        const bool branch_taken_0x1b6078 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b6078) {
            ctx->pc = 0x1B6094u;
            return;
        }
    }
    ctx->pc = 0x1B6080u;
    // 0x1b6080: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b6080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6084: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6088: 0xac661b68  sw          $a2, 0x1B68($v1)
    ctx->pc = 0x1b6088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 6));
    // 0x1b608c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B608Cu;
    {
        const bool branch_taken_0x1b608c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b608c) {
            ctx->pc = 0x1B6114u;
            return;
        }
    }
    ctx->pc = 0x1B6094u;
}
