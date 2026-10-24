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

// Function: wait_alarm
// Address: 0x3388a0 - 0x3388cc
void wait_alarm_0x3388a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("wait_alarm_0x3388a0");
#endif

    switch (ctx->pc) {
        case 0x3388b4u: goto label_3388b4;
        default: break;
    }

    ctx->pc = 0x3388a0u;

    // 0x3388a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3388a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3388a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3388a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3388a8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x3388a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3388ac: 0xc084e54  jal         func_213950
    ctx->pc = 0x3388ACu;
    SET_GPR_U32(ctx, 31, 0x3388B4u);
    ctx->pc = 0x213950u;
    {
        ctx->pc = 0x3388B4u;
        ps2_syscalls::iWakeupThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3388B4u) { return; }
    ctx->pc = 0x3388B4u;
label_3388b4:
    // 0x3388b4: 0xf  sync
    ctx->pc = 0x3388b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3388b8: 0x42000038  ei
    ctx->pc = 0x3388b8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3388bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3388bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3388c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3388c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3388c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3388C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3388C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3388CCu;
}
