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

// Function: SdrDelayThread
// Address: 0x3388d0 - 0x33893c
void SdrDelayThread_0x3388d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrDelayThread_0x3388d0");
#endif

    switch (ctx->pc) {
        case 0x3388e4u: goto label_3388e4;
        case 0x338900u: goto label_338900;
        case 0x338918u: goto label_338918;
        case 0x33892cu: goto label_33892c;
        default: break;
    }

    ctx->pc = 0x3388d0u;

    // 0x3388d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3388d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3388d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3388d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3388d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3388d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3388dc: 0xc084a44  jal         func_212910
    ctx->pc = 0x3388DCu;
    SET_GPR_U32(ctx, 31, 0x3388E4u);
    ctx->pc = 0x212910u;
    {
        ctx->pc = 0x3388E4u;
        ps2_syscalls::GetThreadId(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3388E4u) { return; }
    ctx->pc = 0x3388E4u;
label_3388e4:
    // 0x3388e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3388e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3388e8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3388e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3388ec: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x3388ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x3388f0: 0x246588a0  addiu       $a1, $v1, -0x7760
    ctx->pc = 0x3388f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936736));
    // 0x3388f4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3388f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3388f8: 0xc084d90  jal         func_213640
    ctx->pc = 0x3388F8u;
    SET_GPR_U32(ctx, 31, 0x338900u);
    ctx->pc = 0x213640u;
    {
        ctx->pc = 0x338900u;
        ps2_syscalls::SetAlarm(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338900u) { return; }
    ctx->pc = 0x338900u;
label_338900:
    // 0x338900: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x338900u;
    {
        const bool branch_taken_0x338900 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x338900) {
            ctx->pc = 0x338924u;
            goto label_338924;
        }
    }
    ctx->pc = 0x338908u;
    // 0x338908: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33890c: 0x244421e0  addiu       $a0, $v0, 0x21E0
    ctx->pc = 0x33890cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8672));
    // 0x338910: 0xc046760  jal         func_119D80
    ctx->pc = 0x338910u;
    SET_GPR_U32(ctx, 31, 0x338918u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338918u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338918u) { return; }
    ctx->pc = 0x338918u;
label_338918:
    // 0x338918: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x338918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x33891c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33891Cu;
    {
        const bool branch_taken_0x33891c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33891c) {
            ctx->pc = 0x33892Cu;
            goto label_33892c;
        }
    }
    ctx->pc = 0x338924u;
label_338924:
    // 0x338924: 0xc084a50  jal         func_212940
    ctx->pc = 0x338924u;
    SET_GPR_U32(ctx, 31, 0x33892Cu);
    ctx->pc = 0x212940u;
    {
        ctx->pc = 0x33892Cu;
        ps2_syscalls::SleepThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33892Cu) { return; }
    ctx->pc = 0x33892Cu;
label_33892c:
    // 0x33892c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x33892cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338930: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x338930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x338934: 0x3e00008  jr          $ra
    ctx->pc = 0x338934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33893Cu;
}
