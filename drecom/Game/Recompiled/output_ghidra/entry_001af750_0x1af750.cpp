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

// Function: entry_001af750
// Address: 0x1af750 - 0x1af780
void entry_001af750_0x1af750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af750_0x1af750");
#endif

    ctx->pc = 0x1af750u;

    // 0x1af750: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1af750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1af754: 0x1460ffa5  bnez        $v1, . + 4 + (-0x5B << 2)
    ctx->pc = 0x1AF754u;
    {
        const bool branch_taken_0x1af754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af754) {
            ctx->pc = 0x1AF5ECu;
            return;
        }
    }
    ctx->pc = 0x1AF75Cu;
    // 0x1af75c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1af75cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1af760: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1af760u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af764: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1af764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af76c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af76cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af774: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1af774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1af778: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF780u;
}
