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

// Function: MpegBackGroundCallBack
// Address: 0x35d040 - 0x35d084
void MpegBackGroundCallBack_0x35d040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MpegBackGroundCallBack_0x35d040");
#endif

    switch (ctx->pc) {
        case 0x35d060u: goto label_35d060;
        case 0x35d06cu: goto label_35d06c;
        default: break;
    }

    ctx->pc = 0x35d040u;

    // 0x35d040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35d040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35d044: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x35d044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x35d048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35d048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35d04c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x35d050: 0x2450c100  addiu       $s0, $v0, -0x3F00
    ctx->pc = 0x35d050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x35d054: 0x8e0402a4  lw          $a0, 0x2A4($s0)
    ctx->pc = 0x35d054u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FC3A4u));
    // 0x35d058: 0xc084a98  jal         func_212A60
    ctx->pc = 0x35D058u;
    SET_GPR_U32(ctx, 31, 0x35D060u);
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x35D060u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35D060u) { return; }
    ctx->pc = 0x35D060u;
label_35d060:
    // 0x35d060: 0x8e0402a4  lw          $a0, 0x2A4($s0)
    ctx->pc = 0x35d060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x35d064: 0xc084a90  jal         func_212A40
    ctx->pc = 0x35D064u;
    SET_GPR_U32(ctx, 31, 0x35D06Cu);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x35D06Cu;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35D06Cu) { return; }
    ctx->pc = 0x35D06Cu;
label_35d06c:
    // 0x35d06c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d070: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35d070u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35d074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d078: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35d078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35d07c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D084u;
}
