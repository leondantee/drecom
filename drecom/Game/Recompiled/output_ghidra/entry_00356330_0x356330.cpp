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

// Function: entry_00356330
// Address: 0x356330 - 0x356350
void entry_00356330_0x356330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356330_0x356330");
#endif

    ctx->pc = 0x356330u;

    // 0x356330: 0x2e03001b  sltiu       $v1, $s0, 0x1B
    ctx->pc = 0x356330u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x356334: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x356334u;
    {
        const bool branch_taken_0x356334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356334) {
            ctx->pc = 0x3562F4u;
            return;
        }
    }
    ctx->pc = 0x35633Cu;
    // 0x35633c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35633cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356344: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x356344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x356348: 0x3e00008  jr          $ra
    ctx->pc = 0x356348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356350u;
}
