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

// Function: entry_00184c60
// Address: 0x184c60 - 0x184c80
void entry_00184c60_0x184c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184c60_0x184c60");
#endif

    ctx->pc = 0x184c60u;

    // 0x184c60: 0x2e230020  sltiu       $v1, $s1, 0x20
    ctx->pc = 0x184c60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x184c64: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x184C64u;
    {
        const bool branch_taken_0x184c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184c64) {
            ctx->pc = 0x184C50u;
            return;
        }
    }
    ctx->pc = 0x184C6Cu;
    // 0x184c6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184c70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184c74: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x184c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x184c78: 0x3e00008  jr          $ra
    ctx->pc = 0x184C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184C80u;
}
