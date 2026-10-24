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

// Function: eff2d_0d_init00
// Address: 0x1aaa80 - 0x1aab2c
void eff2d_0d_init00_0x1aaa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_0d_init00_0x1aaa80");
#endif

    switch (ctx->pc) {
        case 0x1aaac8u: goto label_1aaac8;
        case 0x1aaad4u: goto label_1aaad4;
        case 0x1aab10u: goto label_1aab10;
        default: break;
    }

    ctx->pc = 0x1aaa80u;

    // 0x1aaa80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aaa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aaa84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1aaa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1aaa88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aaa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aaa8c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1aaa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1aaa90: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1aaa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1aaa94: 0x244281b0  addiu       $v0, $v0, -0x7E50
    ctx->pc = 0x1aaa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934960));
    // 0x1aaa98: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1aaa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aaa9c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1aaa9cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3881B0u));
    // 0x1aaaa0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1aaaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1aaaa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1aaaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aaaa8: 0x8c500110  lw          $s0, 0x110($v0)
    ctx->pc = 0x1aaaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1aaaac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aaaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aaab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1aaab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aaab4: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x1aaab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x1aaab8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1aaab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aaabc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1aaabcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1aaac0: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x1AAAC0u;
    SET_GPR_U32(ctx, 31, 0x1AAAC8u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x1AAAC0u, 0x1AAAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAAC8u;
label_1aaac8:
    // 0x1aaac8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1aaac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aaacc: 0xc0c9918  jal         func_326460
    ctx->pc = 0x1AAACCu;
    SET_GPR_U32(ctx, 31, 0x1AAAD4u);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x1AAACCu, 0x1AAAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAAD4u;
label_1aaad4:
    // 0x1aaad4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1aaad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aaad8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1aaad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1aaadc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1aaadcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aaae0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1aaae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aaae4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1aaae4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1aaae8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1aaae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aaaec: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1aaaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1aaaf0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1aaaf0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aaaf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1aaaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aaaf8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1aaaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1aaafc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1aaafcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1aab00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1aab00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aab04: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1aab04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aab08: 0xc067594  jal         func_19D650
    ctx->pc = 0x1AAB08u;
    SET_GPR_U32(ctx, 31, 0x1AAB10u);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x1AAB08u, 0x1AAB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB10u;
label_1aab10:
    // 0x1aab10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1aab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aab14: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1aab14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1aab18: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1aab18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aab1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aab1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aab20: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1aab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1aab24: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAB2Cu;
}
