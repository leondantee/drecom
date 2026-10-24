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

// Function: Task_sleep
// Address: 0x19d430 - 0x19d488
void Task_sleep_0x19d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Task_sleep_0x19d430");
#endif

    switch (ctx->pc) {
        case 0x19d470u: goto label_19d470;
        case 0x19d478u: goto label_19d478;
        default: break;
    }

    ctx->pc = 0x19d430u;

    // 0x19d430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d434: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19d434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19d438: 0xa3a40018  sb          $a0, 0x18($sp)
    ctx->pc = 0x19d438u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x19d43c: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x19d43cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d440: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19d440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d444: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d448: 0x8c22fbd8  lw          $v0, -0x428($at)
    ctx->pc = 0x19d448u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFBD8u));
    // 0x19d44c: 0xa443000a  sh          $v1, 0xA($v0)
    ctx->pc = 0x19d44cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x19d450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d454: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d458: 0x8c22fbd8  lw          $v0, -0x428($at)
    ctx->pc = 0x19d458u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFBD8u));
    // 0x19d45c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x19d45cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x19d460: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d464: 0x8c24fbb8  lw          $a0, -0x448($at)
    ctx->pc = 0x19d464u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFBB8u));
    // 0x19d468: 0xc084a90  jal         func_212A40
    ctx->pc = 0x19D468u;
    SET_GPR_U32(ctx, 31, 0x19D470u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x19D470u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D470u) { return; }
    ctx->pc = 0x19D470u;
label_19d470:
    // 0x19d470: 0xc084a50  jal         func_212940
    ctx->pc = 0x19D470u;
    SET_GPR_U32(ctx, 31, 0x19D478u);
    ctx->pc = 0x212940u;
    {
        ctx->pc = 0x19D478u;
        ps2_syscalls::SleepThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D478u) { return; }
    ctx->pc = 0x19D478u;
label_19d478:
    // 0x19d478: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19d478u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d47c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19d47cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19d480: 0x3e00008  jr          $ra
    ctx->pc = 0x19D480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D488u;
}
