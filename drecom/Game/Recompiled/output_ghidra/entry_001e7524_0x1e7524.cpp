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

// Function: entry_001e7524
// Address: 0x1e7524 - 0x1e7558
void entry_001e7524_0x1e7524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7524_0x1e7524");
#endif

    ctx->pc = 0x1e7524u;

    // 0x1e7524: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1e7524u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e7528: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e7528u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e752c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e752cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7530: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e7530u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7534: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e7534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e7538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e753c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e753cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e7540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e754c: 0x27bd0a60  addiu       $sp, $sp, 0xA60
    ctx->pc = 0x1e754cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2656));
    // 0x1e7550: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7558u;
}
