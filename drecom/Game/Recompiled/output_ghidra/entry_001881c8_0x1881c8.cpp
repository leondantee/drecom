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

// Function: entry_001881c8
// Address: 0x1881c8 - 0x188200
void entry_001881c8_0x1881c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001881c8_0x1881c8");
#endif

    switch (ctx->pc) {
        case 0x1881d0u: goto label_1881d0;
        case 0x1881e8u: goto label_1881e8;
        default: break;
    }

    ctx->pc = 0x1881c8u;

    // 0x1881c8: 0xc05f838  jal         func_17E0E0
    ctx->pc = 0x1881C8u;
    SET_GPR_U32(ctx, 31, 0x1881D0u);
    ctx->pc = 0x17E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E0E0u, 0x1881C8u, 0x1881D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881D0u;
label_1881d0:
    // 0x1881d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1881d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1881d4: 0x2444ef90  addiu       $a0, $v0, -0x1070
    ctx->pc = 0x1881d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963088));
    // 0x1881d8: 0x262501a0  addiu       $a1, $s1, 0x1A0
    ctx->pc = 0x1881d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x1881dc: 0x26260190  addiu       $a2, $s1, 0x190
    ctx->pc = 0x1881dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x1881e0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1881E0u;
    SET_GPR_U32(ctx, 31, 0x1881E8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1881E0u, 0x1881E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881E8u;
label_1881e8:
    // 0x1881e8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1881e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1881ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1881ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1881f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1881f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1881f4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1881f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1881f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1881F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1881F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188200u;
}
