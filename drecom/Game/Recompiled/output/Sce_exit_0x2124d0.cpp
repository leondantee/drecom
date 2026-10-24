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

// Function: Sce_exit
// Address: 0x2124d0 - 0x21250c
void Sce_exit_0x2124d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_exit_0x2124d0");
#endif

    switch (ctx->pc) {
        case 0x2124f4u: goto label_2124f4;
        case 0x2124fcu: goto label_2124fc;
        default: break;
    }

    ctx->pc = 0x2124d0u;

    // 0x2124d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2124d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2124d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2124d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2124d8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2124d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2124dc: 0x8c2296d0  lw          $v0, -0x6930($at)
    ctx->pc = 0x2124dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6196D0u));
    // 0x2124e0: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x2124e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x2124e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2124e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2124e8: 0x8c24fb98  lw          $a0, -0x468($at)
    ctx->pc = 0x2124e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFB98u));
    // 0x2124ec: 0xc084a90  jal         func_212A40
    ctx->pc = 0x2124ECu;
    SET_GPR_U32(ctx, 31, 0x2124F4u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x2124F4u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2124F4u) { return; }
    ctx->pc = 0x2124F4u;
label_2124f4:
    // 0x2124f4: 0xc084a18  jal         func_212860
    ctx->pc = 0x2124F4u;
    SET_GPR_U32(ctx, 31, 0x2124FCu);
    ctx->pc = 0x212860u;
    {
        ctx->pc = 0x2124FCu;
        ps2_syscalls::ExitDeleteThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2124FCu) { return; }
    ctx->pc = 0x2124FCu;
label_2124fc:
    // 0x2124fc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2124fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212500: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x212500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x212504: 0x3e00008  jr          $ra
    ctx->pc = 0x212504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21250Cu;
}
