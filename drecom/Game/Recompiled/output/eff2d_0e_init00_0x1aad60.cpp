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

// Function: eff2d_0e_init00
// Address: 0x1aad60 - 0x1aadc8
void eff2d_0e_init00_0x1aad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_0e_init00_0x1aad60");
#endif

    switch (ctx->pc) {
        case 0x1aad94u: goto label_1aad94;
        case 0x1aada0u: goto label_1aada0;
        default: break;
    }

    ctx->pc = 0x1aad60u;

    // 0x1aad60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aad64: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1aad64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1aad68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aad6c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1aad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1aad70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1aad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aad74: 0x8c500110  lw          $s0, 0x110($v0)
    ctx->pc = 0x1aad74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1aad78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aad78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aad7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1aad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aad80: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x1aad80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x1aad84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1aad84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aad88: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1aad88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1aad8c: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x1AAD8Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD94u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x1AAD8Cu, 0x1AAD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD94u;
label_1aad94:
    // 0x1aad94: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1aad94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aad98: 0xc0c9918  jal         func_326460
    ctx->pc = 0x1AAD98u;
    SET_GPR_U32(ctx, 31, 0x1AADA0u);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x1AAD98u, 0x1AADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADA0u;
label_1aada0:
    // 0x1aada0: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x1aada0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x1aada4: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1aada4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1aada8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aada8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aadac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aadacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aadb0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1aadb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1aadb4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1aadb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aadb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aadb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aadbc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1aadbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aadc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AADC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AADC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AADC8u;
}
