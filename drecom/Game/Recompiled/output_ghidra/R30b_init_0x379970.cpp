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

// Function: R30b_init
// Address: 0x379970 - 0x379998
void R30b_init_0x379970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R30b_init_0x379970");
#endif

    switch (ctx->pc) {
        case 0x379988u: goto label_379988;
        default: break;
    }

    ctx->pc = 0x379970u;

    // 0x379970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x379970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x379974: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x379974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x379978: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x379978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37997c: 0x2444b850  addiu       $a0, $v0, -0x47B0
    ctx->pc = 0x37997cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948944));
    // 0x379980: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x379980u;
    SET_GPR_U32(ctx, 31, 0x379988u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x379980u, 0x379988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379988u;
label_379988:
    // 0x379988: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x379988u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37998c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x37998cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x379990: 0x3e00008  jr          $ra
    ctx->pc = 0x379990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379998u;
}
