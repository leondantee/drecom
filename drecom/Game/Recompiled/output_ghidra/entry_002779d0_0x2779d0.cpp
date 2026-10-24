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

// Function: entry_002779d0
// Address: 0x2779d0 - 0x2779f4
void entry_002779d0_0x2779d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002779d0_0x2779d0");
#endif

    ctx->pc = 0x2779d0u;

    // 0x2779d0: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x2779d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2779d4: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2779D4u;
    {
        const bool branch_taken_0x2779d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2779d4) {
            ctx->pc = 0x277968u;
            return;
        }
    }
    ctx->pc = 0x2779DCu;
    // 0x2779dc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2779dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2779e0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2779e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2779e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2779e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2779e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2779e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2779ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2779ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2779ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2779F4u;
}
