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

// Function: entry_0026e1f4
// Address: 0x26e1f4 - 0x26e224
void entry_0026e1f4_0x26e1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026e1f4_0x26e1f4");
#endif

    switch (ctx->pc) {
        case 0x26e204u: goto label_26e204;
        default: break;
    }

    ctx->pc = 0x26e1f4u;

    // 0x26e1f4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x26e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x26e1f8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x26e1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e1fc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26E1FCu;
    SET_GPR_U32(ctx, 31, 0x26E204u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x26E204u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26E204u) { return; }
    ctx->pc = 0x26E204u;
label_26e204:
    // 0x26e204: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x26e204u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e208: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26e208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e20c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26e20cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e218: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x26e218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x26e21c: 0x3e00008  jr          $ra
    ctx->pc = 0x26E21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E224u;
}
