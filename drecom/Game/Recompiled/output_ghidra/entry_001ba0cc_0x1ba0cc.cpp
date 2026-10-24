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

// Function: entry_001ba0cc
// Address: 0x1ba0cc - 0x1ba104
void entry_001ba0cc_0x1ba0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba0cc_0x1ba0cc");
#endif

    switch (ctx->pc) {
        case 0x1ba0d8u: goto label_1ba0d8;
        default: break;
    }

    ctx->pc = 0x1ba0ccu;

    // 0x1ba0cc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ba0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ba0d0: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BA0D0u;
    SET_GPR_U32(ctx, 31, 0x1BA0D8u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BA0D0u, 0x1BA0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0D8u;
label_1ba0d8:
    // 0x1ba0d8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1ba0d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba0dc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BA0DCu;
    {
        const bool branch_taken_0x1ba0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0dc) {
            ctx->pc = 0x1BA184u;
            return;
        }
    }
    ctx->pc = 0x1BA0E4u;
    // 0x1ba0e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ba0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba0e8: 0x16240006  bne         $s1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA0E8u;
    {
        const bool branch_taken_0x1ba0e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ba0e8) {
            ctx->pc = 0x1BA104u;
            return;
        }
    }
    ctx->pc = 0x1BA0F0u;
    // 0x1ba0f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ba0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba0f4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba0f8: 0xaca31b68  sw          $v1, 0x1B68($a1)
    ctx->pc = 0x1ba0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7016), GPR_U32(ctx, 3));
    // 0x1ba0fc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1BA0FCu;
    {
        const bool branch_taken_0x1ba0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0fc) {
            ctx->pc = 0x1BA184u;
            return;
        }
    }
    ctx->pc = 0x1BA104u;
}
