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

// Function: entry_00273550
// Address: 0x273550 - 0x273594
void entry_00273550_0x273550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273550_0x273550");
#endif

    switch (ctx->pc) {
        case 0x27357cu: goto label_27357c;
        default: break;
    }

    ctx->pc = 0x273550u;

    // 0x273550: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x273550u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x273554: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x273554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x273558: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x273558u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27355c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x27355cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x273560: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x273560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x273564: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x273564u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273568: 0x2842014f  slti        $v0, $v0, 0x14F
    ctx->pc = 0x273568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)335) ? 1 : 0);
    // 0x27356c: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x27356Cu;
    {
        const bool branch_taken_0x27356c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27356c) {
            ctx->pc = 0x273498u;
            return;
        }
    }
    ctx->pc = 0x273574u;
    // 0x273574: 0xc084934  jal         func_2124D0
    ctx->pc = 0x273574u;
    SET_GPR_U32(ctx, 31, 0x27357Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x273574u, 0x27357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27357Cu;
label_27357c:
    // 0x27357c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x27357cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273588: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x273588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27358c: 0x3e00008  jr          $ra
    ctx->pc = 0x27358Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27358Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273594u;
}
