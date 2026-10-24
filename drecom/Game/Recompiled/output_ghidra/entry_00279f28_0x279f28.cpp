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

// Function: entry_00279f28
// Address: 0x279f28 - 0x279f54
void entry_00279f28_0x279f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279f28_0x279f28");
#endif

    ctx->pc = 0x279f28u;

    // 0x279f28: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279f2c: 0x9023e651  lbu         $v1, -0x19AF($at)
    ctx->pc = 0x279f2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E651u));
    // 0x279f30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x279f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x279f34: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x279f34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x279f38: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x279F38u;
    {
        const bool branch_taken_0x279f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x279f38) {
            ctx->pc = 0x279E48u;
            return;
        }
    }
    ctx->pc = 0x279F40u;
    // 0x279f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279f48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x279f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x279f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x279F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279F54u;
}
