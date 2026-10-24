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

// Function: entry_001dee10
// Address: 0x1dee10 - 0x1dee34
void entry_001dee10_0x1dee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dee10_0x1dee10");
#endif

    ctx->pc = 0x1dee10u;

    // 0x1dee10: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1dee10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1dee14: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1dee14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dee18: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1DEE18u;
    {
        const bool branch_taken_0x1dee18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dee18) {
            ctx->pc = 0x1DEDF0u;
            return;
        }
    }
    ctx->pc = 0x1DEE20u;
    // 0x1dee20: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1dee20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dee24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dee24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dee28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dee28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dee2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEE34u;
}
