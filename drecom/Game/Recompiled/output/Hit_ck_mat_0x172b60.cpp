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

// Function: Hit_ck_mat
// Address: 0x172b60 - 0x172bd8
void Hit_ck_mat_0x172b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Hit_ck_mat_0x172b60");
#endif

    switch (ctx->pc) {
        case 0x172b94u: goto label_172b94;
        default: break;
    }

    ctx->pc = 0x172b60u;

    // 0x172b60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x172b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x172b64: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x172b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x172b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x172b70: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x172b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x172b74: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x172b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x172b78: 0xe7ac0058  swc1        $f12, 0x58($sp)
    ctx->pc = 0x172b78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x172b7c: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x172b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x172b80: 0x8fb10050  lw          $s1, 0x50($sp)
    ctx->pc = 0x172b80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172b84: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x172b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x172b88: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x172b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x172b8c: 0xc067594  jal         func_19D650
    ctx->pc = 0x172B8Cu;
    SET_GPR_U32(ctx, 31, 0x172B94u);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x172B8Cu, 0x172B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B94u;
label_172b94:
    // 0x172b94: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x172b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x172b98: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x172b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172b9c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x172b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172ba0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172ba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172ba4: 0x0  nop
    ctx->pc = 0x172ba4u;
    // NOP
    // 0x172ba8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x172BA8u;
    {
        const bool branch_taken_0x172ba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172ba8) {
            ctx->pc = 0x172BBCu;
            goto label_172bbc;
        }
    }
    ctx->pc = 0x172BB0u;
    // 0x172bb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172bb4: 0x0  nop
    ctx->pc = 0x172bb4u;
    // NOP
    // 0x172bb8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x172bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_172bbc:
    // 0x172bbc: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x172bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172bc0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x172bc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172bc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172bc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172bcc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x172bccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x172bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x172BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172BD8u;
}
