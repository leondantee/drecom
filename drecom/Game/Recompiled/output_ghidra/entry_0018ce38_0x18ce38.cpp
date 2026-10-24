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

// Function: entry_0018ce38
// Address: 0x18ce38 - 0x18ce60
void entry_0018ce38_0x18ce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ce38_0x18ce38");
#endif

    switch (ctx->pc) {
        case 0x18ce40u: goto label_18ce40;
        default: break;
    }

    ctx->pc = 0x18ce38u;

    // 0x18ce38: 0xc062f14  jal         func_18BC50
    ctx->pc = 0x18CE38u;
    SET_GPR_U32(ctx, 31, 0x18CE40u);
    ctx->pc = 0x18BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BC50u, 0x18CE38u, 0x18CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE40u;
label_18ce40:
    // 0x18ce40: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18ce40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18ce44: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18ce48: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18ce48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18ce4c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CE4Cu;
    {
        const bool branch_taken_0x18ce4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ce4c) {
            ctx->pc = 0x18CE60u;
            return;
        }
    }
    ctx->pc = 0x18CE54u;
    // 0x18ce54: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18ce54u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18ce58: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x18CE58u;
    {
        const bool branch_taken_0x18ce58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ce58) {
            ctx->pc = 0x18D2F0u;
            return;
        }
    }
    ctx->pc = 0x18CE60u;
}
