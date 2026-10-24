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

// Function: entry_00272ba8
// Address: 0x272ba8 - 0x272bd0
void entry_00272ba8_0x272ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272ba8_0x272ba8");
#endif

    ctx->pc = 0x272ba8u;

    // 0x272ba8: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272bac: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x272bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x272bb0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x272BB0u;
    {
        const bool branch_taken_0x272bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272bb0) {
            ctx->pc = 0x272BD0u;
            return;
        }
    }
    ctx->pc = 0x272BB8u;
    // 0x272bb8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x272bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x272bbc: 0x8c31bb4c  lw          $s1, -0x44B4($at)
    ctx->pc = 0x272bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x272bc0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x272bc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x272bc4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x272bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272bc8: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x272BC8u;
    SET_GPR_U32(ctx, 31, 0x272BD0u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x272BC8u, 0x272BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BD0u;
}
