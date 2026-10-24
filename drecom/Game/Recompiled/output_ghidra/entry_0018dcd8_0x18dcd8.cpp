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

// Function: entry_0018dcd8
// Address: 0x18dcd8 - 0x18dd00
void entry_0018dcd8_0x18dcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dcd8_0x18dcd8");
#endif

    switch (ctx->pc) {
        case 0x18dce0u: goto label_18dce0;
        default: break;
    }

    ctx->pc = 0x18dcd8u;

    // 0x18dcd8: 0xc062f38  jal         func_18BCE0
    ctx->pc = 0x18DCD8u;
    SET_GPR_U32(ctx, 31, 0x18DCE0u);
    ctx->pc = 0x18BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BCE0u, 0x18DCD8u, 0x18DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCE0u;
label_18dce0:
    // 0x18dce0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18dce0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18dce4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18dce8: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18dce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18dcec: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DCECu;
    {
        const bool branch_taken_0x18dcec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18dcec) {
            ctx->pc = 0x18DD00u;
            return;
        }
    }
    ctx->pc = 0x18DCF4u;
    // 0x18dcf4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18dcf4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18dcf8: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x18DCF8u;
    {
        const bool branch_taken_0x18dcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dcf8) {
            ctx->pc = 0x18DF30u;
            return;
        }
    }
    ctx->pc = 0x18DD00u;
}
