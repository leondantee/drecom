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

// Function: entry_00294cf0
// Address: 0x294cf0 - 0x294d34
void entry_00294cf0_0x294cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294cf0_0x294cf0");
#endif

    ctx->pc = 0x294cf0u;

    // 0x294cf0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x294cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x294cf4: 0x8c236880  lw          $v1, 0x6880($at)
    ctx->pc = 0x294cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x396880u));
    // 0x294cf8: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x294cf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x294cfc: 0x1460fed9  bnez        $v1, . + 4 + (-0x127 << 2)
    ctx->pc = 0x294CFCu;
    {
        const bool branch_taken_0x294cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x294cfc) {
            ctx->pc = 0x294864u;
            return;
        }
    }
    ctx->pc = 0x294D04u;
    // 0x294d04: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x294d04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x294d08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x294d08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x294d0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x294d0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x294d10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x294d10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294d14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x294d14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294d18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x294d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x294d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294d28: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x294d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x294d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x294D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294D34u;
}
