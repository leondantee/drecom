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

// Function: entry_00267094
// Address: 0x267094 - 0x2670c0
void entry_00267094_0x267094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267094_0x267094");
#endif

    ctx->pc = 0x267094u;

    // 0x267094: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x267094u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267098: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x267098u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26709c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26709cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2670a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2670a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2670a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2670a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2670a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2670a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2670ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2670acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2670b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2670b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2670b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2670b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2670b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2670B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2670B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2670C0u;
}
