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

// Function: entry_003274a8
// Address: 0x3274a8 - 0x3274d4
void entry_003274a8_0x3274a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003274a8_0x3274a8");
#endif

    ctx->pc = 0x3274a8u;

    // 0x3274a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3274a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3274ac: 0x8c630298  lw          $v1, 0x298($v1)
    ctx->pc = 0x3274acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 664)));
    // 0x3274b0: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x3274b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3274b4: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x3274B4u;
    {
        const bool branch_taken_0x3274b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3274b4) {
            ctx->pc = 0x3273D4u;
            return;
        }
    }
    ctx->pc = 0x3274BCu;
    // 0x3274bc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3274bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3274c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3274c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3274c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3274c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3274c8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3274c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3274cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3274CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3274CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3274D4u;
}
