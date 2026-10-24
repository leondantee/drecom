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

// Function: entry_0018e6a8
// Address: 0x18e6a8 - 0x18e6d0
void entry_0018e6a8_0x18e6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e6a8_0x18e6a8");
#endif

    switch (ctx->pc) {
        case 0x18e6c4u: goto label_18e6c4;
        default: break;
    }

    ctx->pc = 0x18e6a8u;

    // 0x18e6a8: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x18e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18e6ac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18e6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18e6b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E6B0u;
    {
        const bool branch_taken_0x18e6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e6b0) {
            ctx->pc = 0x18E6D0u;
            return;
        }
    }
    ctx->pc = 0x18E6B8u;
    // 0x18e6b8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e6b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18e6bc: 0xc063ab8  jal         func_18EAE0
    ctx->pc = 0x18E6BCu;
    SET_GPR_U32(ctx, 31, 0x18E6C4u);
    ctx->pc = 0x18EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EAE0u, 0x18E6BCu, 0x18E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6C4u;
label_18e6c4:
    // 0x18e6c4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18e6c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e6c8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x18E6C8u;
    {
        const bool branch_taken_0x18e6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e6c8) {
            ctx->pc = 0x18E780u;
            return;
        }
    }
    ctx->pc = 0x18E6D0u;
}
