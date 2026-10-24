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
// Address: 0x1e46b8 - 0x1e46e8
void caseD_3_0x1e46b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1e46b8");
#endif

    switch (ctx->pc) {
        case 0x1e46e0u: goto label_1e46e0;
        default: break;
    }

    ctx->pc = 0x1e46b8u;

    // 0x1e46b8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1e46bc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e46c0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e46c4: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1e46c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e46c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e46cc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e46ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e46d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e46d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e46d4: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1e46d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1e46d8: 0xc078898  jal         func_1E2260
    ctx->pc = 0x1E46D8u;
    SET_GPR_U32(ctx, 31, 0x1E46E0u);
    ctx->pc = 0x1E2260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2260u, 0x1E46D8u, 0x1E46E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E46E0u;
label_1e46e0:
    // 0x1e46e0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1E46E0u;
    {
        const bool branch_taken_0x1e46e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e46e0) {
            ctx->pc = 0x1E47A0u;
            return;
        }
    }
    ctx->pc = 0x1E46E8u;
}
