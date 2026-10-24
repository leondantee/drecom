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

// Function: entry_00258508
// Address: 0x258508 - 0x25852c
void entry_00258508_0x258508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258508_0x258508");
#endif

    ctx->pc = 0x258508u;

    // 0x258508: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x258508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x25850c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x25850cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x258510: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x258510u;
    {
        const bool branch_taken_0x258510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258510) {
            ctx->pc = 0x2584E4u;
            return;
        }
    }
    ctx->pc = 0x258518u;
    // 0x258518: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x258518u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25851c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25851cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258520: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x258520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x258524: 0x3e00008  jr          $ra
    ctx->pc = 0x258524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25852Cu;
}
