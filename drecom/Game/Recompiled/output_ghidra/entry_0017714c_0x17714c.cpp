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

// Function: entry_0017714c
// Address: 0x17714c - 0x177168
void entry_0017714c_0x17714c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017714c_0x17714c");
#endif

    ctx->pc = 0x17714cu;

    // 0x17714c: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x17714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x177150: 0x12230005  beq         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x177150u;
    {
        const bool branch_taken_0x177150 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x177150) {
            ctx->pc = 0x177168u;
            return;
        }
    }
    ctx->pc = 0x177158u;
    // 0x177158: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x177158u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x17715c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x17715cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x177160: 0xc05dc6c  jal         func_1771B0
    ctx->pc = 0x177160u;
    SET_GPR_U32(ctx, 31, 0x177168u);
    ctx->pc = 0x1771B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1771B0u, 0x177160u, 0x177168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177168u;
}
