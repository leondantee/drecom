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

// Function: entry_00347bc8
// Address: 0x347bc8 - 0x347bf4
void entry_00347bc8_0x347bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00347bc8_0x347bc8");
#endif

    ctx->pc = 0x347bc8u;

    // 0x347bc8: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x347bc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x347bcc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x347bccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x347bd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x347bd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x347bd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x347bd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x347bd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x347bd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347bdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x347bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347be0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347be8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x347be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x347bec: 0x3e00008  jr          $ra
    ctx->pc = 0x347BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347BF4u;
}
