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

// Function: entry_00321ac4
// Address: 0x321ac4 - 0x321ae0
void entry_00321ac4_0x321ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321ac4_0x321ac4");
#endif

    ctx->pc = 0x321ac4u;

    // 0x321ac4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x321ac4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321ac8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x321ac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321acc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x321accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321ad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321ad4: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x321ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x321ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x321AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321AE0u;
}
