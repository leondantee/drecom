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

// Function: entry_002ed4c8
// Address: 0x2ed4c8 - 0x2ed504
void entry_002ed4c8_0x2ed4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed4c8_0x2ed4c8");
#endif

    ctx->pc = 0x2ed4c8u;

    // 0x2ed4c8: 0x2a630006  slti        $v1, $s3, 0x6
    ctx->pc = 0x2ed4c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ed4cc: 0x1460feda  bnez        $v1, . + 4 + (-0x126 << 2)
    ctx->pc = 0x2ED4CCu;
    {
        const bool branch_taken_0x2ed4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed4cc) {
            ctx->pc = 0x2ED038u;
            return;
        }
    }
    ctx->pc = 0x2ED4D4u;
    // 0x2ed4d4: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x2ed4d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ed4d8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ed4d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ed4dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ed4dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ed4e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ed4e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ed4e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ed4e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed4e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ed4e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed4ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ed4ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed4f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ed4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ed4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed4f8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2ed4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ed4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED504u;
}
