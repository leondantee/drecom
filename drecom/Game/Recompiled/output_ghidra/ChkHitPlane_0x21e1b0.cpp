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

// Function: ChkHitPlane
// Address: 0x21e1b0 - 0x21e224
void ChkHitPlane_0x21e1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChkHitPlane_0x21e1b0");
#endif

    switch (ctx->pc) {
        case 0x21e1d4u: goto label_21e1d4;
        case 0x21e1e8u: goto label_21e1e8;
        default: break;
    }

    ctx->pc = 0x21e1b0u;

    // 0x21e1b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21e1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21e1b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x21e1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x21e1b8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x21e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x21e1bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x21e1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x21e1c0: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x21e1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x21e1c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x21e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e1c8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x21e1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21e1cc: 0xc040c1a  jal         func_103068
    ctx->pc = 0x21E1CCu;
    SET_GPR_U32(ctx, 31, 0x21E1D4u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x21E1D4u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21E1D4u) { return; }
    ctx->pc = 0x21E1D4u;
label_21e1d4:
    // 0x21e1d4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x21e1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x21e1d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x21e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21e1dc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x21e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21e1e0: 0xc040c1a  jal         func_103068
    ctx->pc = 0x21E1E0u;
    SET_GPR_U32(ctx, 31, 0x21E1E8u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x21E1E8u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21E1E8u) { return; }
    ctx->pc = 0x21E1E8u;
label_21e1e8:
    // 0x21e1e8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x21e1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x21e1ec: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x21e1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e1f0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x21e1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e1f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21e1f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e1f8: 0x0  nop
    ctx->pc = 0x21e1f8u;
    // NOP
    // 0x21e1fc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x21E1FCu;
    {
        const bool branch_taken_0x21e1fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e1fc) {
            ctx->pc = 0x21E210u;
            goto label_21e210;
        }
    }
    ctx->pc = 0x21E204u;
    // 0x21e204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21E208u;
    {
        const bool branch_taken_0x21e208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e208) {
            ctx->pc = 0x21E214u;
            goto label_21e214;
        }
    }
    ctx->pc = 0x21E210u;
label_21e210:
    // 0x21e210: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x21e210u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_21e214:
    // 0x21e214: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x21e214u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e218: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x21e218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21e21c: 0x3e00008  jr          $ra
    ctx->pc = 0x21E21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E224u;
}
