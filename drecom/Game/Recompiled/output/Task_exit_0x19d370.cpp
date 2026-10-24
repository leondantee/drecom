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

// Function: Task_exit
// Address: 0x19d370 - 0x19d3ac
void Task_exit_0x19d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Task_exit_0x19d370");
#endif

    switch (ctx->pc) {
        case 0x19d394u: goto label_19d394;
        case 0x19d39cu: goto label_19d39c;
        default: break;
    }

    ctx->pc = 0x19d370u;

    // 0x19d370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d374: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19d374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19d378: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d37c: 0x8c22fbd8  lw          $v0, -0x428($at)
    ctx->pc = 0x19d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFBD8u));
    // 0x19d380: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x19d380u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x19d384: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d388: 0x8c24fbb8  lw          $a0, -0x448($at)
    ctx->pc = 0x19d388u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFBB8u));
    // 0x19d38c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x19D38Cu;
    SET_GPR_U32(ctx, 31, 0x19D394u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x19D394u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D394u) { return; }
    ctx->pc = 0x19D394u;
label_19d394:
    // 0x19d394: 0xc084a18  jal         func_212860
    ctx->pc = 0x19D394u;
    SET_GPR_U32(ctx, 31, 0x19D39Cu);
    ctx->pc = 0x212860u;
    {
        ctx->pc = 0x19D39Cu;
        ps2_syscalls::ExitDeleteThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D39Cu) { return; }
    ctx->pc = 0x19D39Cu;
label_19d39c:
    // 0x19d39c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19d39cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d3a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19d3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x19D3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D3ACu;
}
