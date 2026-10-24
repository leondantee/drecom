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

// Function: R603_main
// Address: 0x29c920 - 0x29c97c
void R603_main_0x29c920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R603_main_0x29c920");
#endif

    switch (ctx->pc) {
        case 0x29c96cu: goto label_29c96c;
        default: break;
    }

    ctx->pc = 0x29c920u;

    // 0x29c920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c924: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x29c924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x29c928: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29c928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29c92c: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x29c92cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x29c930: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29c930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29c934: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x29c934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x29c938: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x29C938u;
    {
        const bool branch_taken_0x29c938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c938) {
            ctx->pc = 0x29C96Cu;
            goto label_29c96c;
        }
    }
    ctx->pc = 0x29C940u;
    // 0x29c940: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29c940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29c944: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x29c944u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x29c948: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29c948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29c94c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x29c94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x29c950: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C950u;
    {
        const bool branch_taken_0x29c950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c950) {
            ctx->pc = 0x29C96Cu;
            goto label_29c96c;
        }
    }
    ctx->pc = 0x29C958u;
    // 0x29c958: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x29c958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29c95c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x29c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x29c960: 0x2445c980  addiu       $a1, $v0, -0x3680
    ctx->pc = 0x29c960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953344));
    // 0x29c964: 0xc0848cc  jal         func_212330
    ctx->pc = 0x29C964u;
    SET_GPR_U32(ctx, 31, 0x29C96Cu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x29C964u, 0x29C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C96Cu;
label_29c96c:
    // 0x29c96c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x29c96cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c970: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x29c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29c974: 0x3e00008  jr          $ra
    ctx->pc = 0x29C974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C97Cu;
}
