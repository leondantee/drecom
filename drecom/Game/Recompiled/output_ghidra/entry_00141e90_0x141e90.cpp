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

// Function: entry_00141e90
// Address: 0x141e90 - 0x141eb0
void entry_00141e90_0x141e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141e90_0x141e90");
#endif

    ctx->pc = 0x141e90u;

    // 0x141e90: 0x2e030270  sltiu       $v1, $s0, 0x270
    ctx->pc = 0x141e90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)624) ? 1 : 0);
    // 0x141e94: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141E94u;
    {
        const bool branch_taken_0x141e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e94) {
            ctx->pc = 0x141E80u;
            return;
        }
    }
    ctx->pc = 0x141E9Cu;
    // 0x141e9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141ea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141ea4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x141ea4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x141ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x141EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141EB0u;
}
