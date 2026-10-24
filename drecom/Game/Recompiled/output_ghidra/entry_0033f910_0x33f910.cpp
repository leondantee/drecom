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

// Function: entry_0033f910
// Address: 0x33f910 - 0x33f934
void entry_0033f910_0x33f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f910_0x33f910");
#endif

    ctx->pc = 0x33f910u;

    // 0x33f910: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33f910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f914: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x33f914u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33f918: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x33F918u;
    {
        const bool branch_taken_0x33f918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f918) {
            ctx->pc = 0x33F858u;
            return;
        }
    }
    ctx->pc = 0x33F920u;
    // 0x33f920: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33f920u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f928: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x33f928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33f92c: 0x3e00008  jr          $ra
    ctx->pc = 0x33F92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F934u;
}
