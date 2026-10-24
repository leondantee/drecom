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

// Function: entry_0028bd9c
// Address: 0x28bd9c - 0x28bdec
void entry_0028bd9c_0x28bd9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028bd9c_0x28bd9c");
#endif

    switch (ctx->pc) {
        case 0x28bda8u: goto label_28bda8;
        case 0x28bdd0u: goto label_28bdd0;
        default: break;
    }

    ctx->pc = 0x28bd9cu;

    // 0x28bd9c: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x28bd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28bda0: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x28BDA0u;
    SET_GPR_U32(ctx, 31, 0x28BDA8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28BDA0u, 0x28BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BDA8u;
label_28bda8:
    // 0x28bda8: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x28bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x28bdac: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x28bdacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28bdb0: 0x3c031c07  lui         $v1, 0x1C07
    ctx->pc = 0x28bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7175 << 16));
    // 0x28bdb4: 0x3463050a  ori         $v1, $v1, 0x50A
    ctx->pc = 0x28bdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1290);
    // 0x28bdb8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x28bdb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28bdbc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x28bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x28bdc0: 0x24651670  addiu       $a1, $v1, 0x1670
    ctx->pc = 0x28bdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5744));
    // 0x28bdc4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28bdc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28bdc8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x28BDC8u;
    SET_GPR_U32(ctx, 31, 0x28BDD0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x28BDC8u, 0x28BDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BDD0u;
label_28bdd0:
    // 0x28bdd0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x28bdd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bdd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28bdd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bdd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28bdd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28bddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bde0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28bde4: 0x3e00008  jr          $ra
    ctx->pc = 0x28BDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BDECu;
}
