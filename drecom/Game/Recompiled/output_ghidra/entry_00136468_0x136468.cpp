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

// Function: entry_00136468
// Address: 0x136468 - 0x1364a0
void entry_00136468_0x136468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136468_0x136468");
#endif

    switch (ctx->pc) {
        case 0x13648cu: goto label_13648c;
        default: break;
    }

    ctx->pc = 0x136468u;

    // 0x136468: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x136468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13646c: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x13646cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x136470: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x136470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x136474: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x136474u;
    {
        const bool branch_taken_0x136474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136474) {
            ctx->pc = 0x136404u;
            return;
        }
    }
    ctx->pc = 0x13647Cu;
    // 0x13647c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x13647cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x136480: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x136480u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136484: 0xc05d25c  jal         func_174970
    ctx->pc = 0x136484u;
    SET_GPR_U32(ctx, 31, 0x13648Cu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x136484u, 0x13648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13648Cu;
label_13648c:
    // 0x13648c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13648Cu;
    {
        const bool branch_taken_0x13648c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13648c) {
            ctx->pc = 0x1364A0u;
            return;
        }
    }
    ctx->pc = 0x136494u;
    // 0x136494: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x136494u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136498u;
    {
        const bool branch_taken_0x136498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136498) {
            ctx->pc = 0x1364A4u;
            return;
        }
    }
    ctx->pc = 0x1364A0u;
}
