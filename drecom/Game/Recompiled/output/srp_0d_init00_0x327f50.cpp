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

// Function: srp_0d_init00
// Address: 0x327f50 - 0x327f90
void srp_0d_init00_0x327f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_0d_init00_0x327f50");
#endif

    switch (ctx->pc) {
        case 0x327f74u: goto label_327f74;
        case 0x327f80u: goto label_327f80;
        default: break;
    }

    ctx->pc = 0x327f50u;

    // 0x327f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327f54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x327f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x327f58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x327f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x327f5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x327f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327f60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x327f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x327f64: 0xac430358  sw          $v1, 0x358($v0)
    ctx->pc = 0x327f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 856), GPR_U32(ctx, 3));
    // 0x327f68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x327f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x327f6c: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x327F6Cu;
    SET_GPR_U32(ctx, 31, 0x327F74u);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x327F6Cu, 0x327F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F74u;
label_327f74:
    // 0x327f74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x327f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x327f78: 0xc0ca1e0  jal         func_328780
    ctx->pc = 0x327F78u;
    SET_GPR_U32(ctx, 31, 0x327F80u);
    ctx->pc = 0x328780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328780u, 0x327F78u, 0x327F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F80u;
label_327f80:
    // 0x327f80: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x327f80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327f84: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x327f84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x327f88: 0x3e00008  jr          $ra
    ctx->pc = 0x327F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327F90u;
}
