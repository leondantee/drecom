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

// Function: entry_0019f05c
// Address: 0x19f05c - 0x19f090
void entry_0019f05c_0x19f05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f05c_0x19f05c");
#endif

    ctx->pc = 0x19f05cu;

    // 0x19f05c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x19f05cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19f060: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19f060u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19f064: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19f064u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19f068: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19f068u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f06c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19f06cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f070: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19f070u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f074: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19f074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f078: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f07c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f084: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x19f084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x19f088: 0x3e00008  jr          $ra
    ctx->pc = 0x19F088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F090u;
}
