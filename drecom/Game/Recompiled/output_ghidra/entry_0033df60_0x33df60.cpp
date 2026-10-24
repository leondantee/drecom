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

// Function: entry_0033df60
// Address: 0x33df60 - 0x33df98
void entry_0033df60_0x33df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033df60_0x33df60");
#endif

    ctx->pc = 0x33df60u;

    // 0x33df60: 0x2e83001f  sltiu       $v1, $s4, 0x1F
    ctx->pc = 0x33df60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x33df64: 0x1460ff77  bnez        $v1, . + 4 + (-0x89 << 2)
    ctx->pc = 0x33DF64u;
    {
        const bool branch_taken_0x33df64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33df64) {
            ctx->pc = 0x33DD44u;
            return;
        }
    }
    ctx->pc = 0x33DF6Cu;
    // 0x33df6c: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x33df6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33df70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33df70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33df74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33df74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33df78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33df78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33df7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33df7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33df80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33df80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33df84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33df84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33df88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33df88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33df8c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x33df8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x33df90: 0x3e00008  jr          $ra
    ctx->pc = 0x33DF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DF98u;
}
