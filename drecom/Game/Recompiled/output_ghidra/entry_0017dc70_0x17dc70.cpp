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

// Function: entry_0017dc70
// Address: 0x17dc70 - 0x17dc94
void entry_0017dc70_0x17dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dc70_0x17dc70");
#endif

    ctx->pc = 0x17dc70u;

    // 0x17dc70: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17dc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17dc74: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x17dc74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x17dc78: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17DC78u;
    {
        const bool branch_taken_0x17dc78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dc78) {
            ctx->pc = 0x17DC34u;
            return;
        }
    }
    ctx->pc = 0x17DC80u;
    // 0x17dc80: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17dc80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17dc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dc88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17dc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17dc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x17DC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DC94u;
}
