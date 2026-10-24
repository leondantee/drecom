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

// Function: entry_00201468
// Address: 0x201468 - 0x2014b8
void entry_00201468_0x201468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201468_0x201468");
#endif

    switch (ctx->pc) {
        case 0x201498u: goto label_201498;
        default: break;
    }

    ctx->pc = 0x201468u;

    // 0x201468: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x201468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x20146c: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x20146cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x201470: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x201474: 0x3c021c07  lui         $v0, 0x1C07
    ctx->pc = 0x201474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7175 << 16));
    // 0x201478: 0x34420a16  ori         $v0, $v0, 0xA16
    ctx->pc = 0x201478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2582);
    // 0x20147c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x20147cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201480: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x201484: 0x24450d20  addiu       $a1, $v0, 0xD20
    ctx->pc = 0x201484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3360));
    // 0x201488: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20148c: 0x8c269fb0  lw          $a2, -0x6050($at)
    ctx->pc = 0x20148cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x389FB0u));
    // 0x201490: 0xc059b14  jal         func_166C50
    ctx->pc = 0x201490u;
    SET_GPR_U32(ctx, 31, 0x201498u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201490u, 0x201498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201498u;
label_201498:
    // 0x201498: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x201498u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20149c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20149cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2014a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2014a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2014a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2014a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2014a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2014a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2014ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2014acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2014b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2014B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2014B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2014B8u;
}
