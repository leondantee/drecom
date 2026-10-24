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

// Function: entry_0021ac18
// Address: 0x21ac18 - 0x21ac48
void entry_0021ac18_0x21ac18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ac18_0x21ac18");
#endif

    ctx->pc = 0x21ac18u;

    // 0x21ac18: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x21ac18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21ac1c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21ac1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21ac20: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21ac20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21ac24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21ac24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ac28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21ac28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ac2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21ac2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ac30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21ac30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ac34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ac34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ac38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ac38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ac3c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x21ac3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21ac40: 0x3e00008  jr          $ra
    ctx->pc = 0x21AC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AC48u;
}
