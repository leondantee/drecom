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

// Function: entry_0018d668
// Address: 0x18d668 - 0x18d690
void entry_0018d668_0x18d668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d668_0x18d668");
#endif

    switch (ctx->pc) {
        case 0x18d670u: goto label_18d670;
        default: break;
    }

    ctx->pc = 0x18d668u;

    // 0x18d668: 0xc062f14  jal         func_18BC50
    ctx->pc = 0x18D668u;
    SET_GPR_U32(ctx, 31, 0x18D670u);
    ctx->pc = 0x18BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BC50u, 0x18D668u, 0x18D670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D670u;
label_18d670:
    // 0x18d670: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18d670u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18d674: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18d674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18d678: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18d678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18d67c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D67Cu;
    {
        const bool branch_taken_0x18d67c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d67c) {
            ctx->pc = 0x18D690u;
            return;
        }
    }
    ctx->pc = 0x18D684u;
    // 0x18d684: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18d684u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18d688: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x18D688u;
    {
        const bool branch_taken_0x18d688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d688) {
            ctx->pc = 0x18DC40u;
            return;
        }
    }
    ctx->pc = 0x18D690u;
}
