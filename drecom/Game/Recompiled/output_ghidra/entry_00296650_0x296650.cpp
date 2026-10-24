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

// Function: entry_00296650
// Address: 0x296650 - 0x296680
void entry_00296650_0x296650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296650_0x296650");
#endif

    ctx->pc = 0x296650u;

    // 0x296650: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x296650u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x296654: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x296654u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x296658: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x296658u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29665c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29665cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296660: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x296660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x296664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x296668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29666c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29666cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296674: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x296674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x296678: 0x3e00008  jr          $ra
    ctx->pc = 0x296678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296680u;
}
