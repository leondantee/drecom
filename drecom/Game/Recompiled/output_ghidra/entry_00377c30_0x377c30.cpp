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

// Function: entry_00377c30
// Address: 0x377c30 - 0x377c64
void entry_00377c30_0x377c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377c30_0x377c30");
#endif

    ctx->pc = 0x377c30u;

    // 0x377c30: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377c34: 0x90230396  lbu         $v1, 0x396($at)
    ctx->pc = 0x377c34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x9A0396u));
    // 0x377c38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x377c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x377c3c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x377c3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x377c40: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x377C40u;
    {
        const bool branch_taken_0x377c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377c40) {
            ctx->pc = 0x377B70u;
            return;
        }
    }
    ctx->pc = 0x377C48u;
    // 0x377c48: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x377c48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377c4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377c58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x377c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x377c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x377C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377C64u;
}
