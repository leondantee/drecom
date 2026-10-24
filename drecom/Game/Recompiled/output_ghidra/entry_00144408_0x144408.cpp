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

// Function: entry_00144408
// Address: 0x144408 - 0x144438
void entry_00144408_0x144408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144408_0x144408");
#endif

    ctx->pc = 0x144408u;

    // 0x144408: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x144408u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14440c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14440cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x144410: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x144410u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144414: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x144414u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144418: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x144418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14441c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14441cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144420: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14442c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x14442cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x144430: 0x3e00008  jr          $ra
    ctx->pc = 0x144430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144438u;
}
