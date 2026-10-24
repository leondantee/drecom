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

// Function: entry_002ee1f4
// Address: 0x2ee1f4 - 0x2ee218
void entry_002ee1f4_0x2ee1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee1f4_0x2ee1f4");
#endif

    ctx->pc = 0x2ee1f4u;

    // 0x2ee1f4: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2ee1f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ee1f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ee1f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee1fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ee1fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee200: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ee200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ee204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ee208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee20c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2ee20cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ee210: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE218u;
}
