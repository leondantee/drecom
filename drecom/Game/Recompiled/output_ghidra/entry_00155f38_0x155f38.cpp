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

// Function: entry_00155f38
// Address: 0x155f38 - 0x155f68
void entry_00155f38_0x155f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155f38_0x155f38");
#endif

    ctx->pc = 0x155f38u;

    // 0x155f38: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x155f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x155f3c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x155f3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155f40: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
    ctx->pc = 0x155F40u;
    {
        const bool branch_taken_0x155f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155f40) {
            ctx->pc = 0x155DE0u;
            return;
        }
    }
    ctx->pc = 0x155F48u;
    // 0x155f48: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x155f48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155f4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155f4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155f50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155f50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155f54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155f5c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x155f5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x155f60: 0x3e00008  jr          $ra
    ctx->pc = 0x155F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155F68u;
}
