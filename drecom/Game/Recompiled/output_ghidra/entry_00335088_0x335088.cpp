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

// Function: entry_00335088
// Address: 0x335088 - 0x3350e4
void entry_00335088_0x335088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335088_0x335088");
#endif

    switch (ctx->pc) {
        case 0x335094u: goto label_335094;
        case 0x3350bcu: goto label_3350bc;
        default: break;
    }

    ctx->pc = 0x335088u;

    // 0x335088: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x335088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33508c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x33508Cu;
    SET_GPR_U32(ctx, 31, 0x335094u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x33508Cu, 0x335094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335094u;
label_335094:
    // 0x335094: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x335094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x335098: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x335098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33509c: 0x3c031c07  lui         $v1, 0x1C07
    ctx->pc = 0x33509cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7175 << 16));
    // 0x3350a0: 0x3463050a  ori         $v1, $v1, 0x50A
    ctx->pc = 0x3350a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1290);
    // 0x3350a4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x3350a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3350a8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3350a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3350ac: 0x246520c8  addiu       $a1, $v1, 0x20C8
    ctx->pc = 0x3350acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8392));
    // 0x3350b0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3350b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3350b4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x3350B4u;
    SET_GPR_U32(ctx, 31, 0x3350BCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x3350B4u, 0x3350BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3350BCu;
label_3350bc:
    // 0x3350bc: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x3350bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3350c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3350c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3350c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3350c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3350c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3350c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3350cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3350ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3350d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3350d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3350d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3350d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3350d8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3350d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3350dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3350DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3350DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3350E4u;
}
