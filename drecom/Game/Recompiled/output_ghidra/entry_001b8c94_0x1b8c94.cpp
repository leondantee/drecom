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

// Function: entry_001b8c94
// Address: 0x1b8c94 - 0x1b8ccc
void entry_001b8c94_0x1b8c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8c94_0x1b8c94");
#endif

    switch (ctx->pc) {
        case 0x1b8ca0u: goto label_1b8ca0;
        default: break;
    }

    ctx->pc = 0x1b8c94u;

    // 0x1b8c94: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b8c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b8c98: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1B8C98u;
    SET_GPR_U32(ctx, 31, 0x1B8CA0u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B8C98u, 0x1B8CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8CA0u;
label_1b8ca0:
    // 0x1b8ca0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1b8ca0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b8ca4: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B8CA4u;
    {
        const bool branch_taken_0x1b8ca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ca4) {
            ctx->pc = 0x1B8D4Cu;
            return;
        }
    }
    ctx->pc = 0x1B8CACu;
    // 0x1b8cac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b8cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8cb0: 0x16240006  bne         $s1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8CB0u;
    {
        const bool branch_taken_0x1b8cb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b8cb0) {
            ctx->pc = 0x1B8CCCu;
            return;
        }
    }
    ctx->pc = 0x1B8CB8u;
    // 0x1b8cb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8cbc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8cc0: 0xaca31b68  sw          $v1, 0x1B68($a1)
    ctx->pc = 0x1b8cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7016), GPR_U32(ctx, 3));
    // 0x1b8cc4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B8CC4u;
    {
        const bool branch_taken_0x1b8cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8cc4) {
            ctx->pc = 0x1B8D4Cu;
            return;
        }
    }
    ctx->pc = 0x1B8CCCu;
}
