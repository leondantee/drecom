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

// Function: Task_chain
// Address: 0x19d260 - 0x19d2b4
void Task_chain_0x19d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Task_chain_0x19d260");
#endif

    switch (ctx->pc) {
        case 0x19d29cu: goto label_19d29c;
        case 0x19d2a4u: goto label_19d2a4;
        default: break;
    }

    ctx->pc = 0x19d260u;

    // 0x19d260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d264: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19d264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19d268: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x19d268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x19d26c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d270: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d274: 0x8c22fbd8  lw          $v0, -0x428($at)
    ctx->pc = 0x19d274u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFBD8u));
    // 0x19d278: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x19d278u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x19d27c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d280: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d284: 0x8c22fbd8  lw          $v0, -0x428($at)
    ctx->pc = 0x19d284u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFBD8u));
    // 0x19d288: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x19d288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x19d28c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d290: 0x8c24fbb8  lw          $a0, -0x448($at)
    ctx->pc = 0x19d290u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFBB8u));
    // 0x19d294: 0xc084a90  jal         func_212A40
    ctx->pc = 0x19D294u;
    SET_GPR_U32(ctx, 31, 0x19D29Cu);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x19D29Cu;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D29Cu) { return; }
    ctx->pc = 0x19D29Cu;
label_19d29c:
    // 0x19d29c: 0xc084a18  jal         func_212860
    ctx->pc = 0x19D29Cu;
    SET_GPR_U32(ctx, 31, 0x19D2A4u);
    ctx->pc = 0x212860u;
    {
        ctx->pc = 0x19D2A4u;
        ps2_syscalls::ExitDeleteThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D2A4u) { return; }
    ctx->pc = 0x19D2A4u;
label_19d2a4:
    // 0x19d2a4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19d2a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d2a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19d2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19d2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19D2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D2B4u;
}
