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

// Function: entry_0029c8c8
// Address: 0x29c8c8 - 0x29c8e8
void entry_0029c8c8_0x29c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c8c8_0x29c8c8");
#endif

    ctx->pc = 0x29c8c8u;

    // 0x29c8c8: 0x2e230040  sltiu       $v1, $s1, 0x40
    ctx->pc = 0x29c8c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x29c8cc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x29C8CCu;
    {
        const bool branch_taken_0x29c8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c8cc) {
            ctx->pc = 0x29C890u;
            return;
        }
    }
    ctx->pc = 0x29C8D4u;
    // 0x29c8d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c8d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c8dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29c8dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29c8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x29C8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C8E8u;
}
