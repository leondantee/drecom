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
// Address: 0x2f5550 - 0x2f55c4
void ChkHitPlane_0x2f5550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChkHitPlane_0x2f5550");
#endif

    switch (ctx->pc) {
        case 0x2f5574u: goto label_2f5574;
        case 0x2f5588u: goto label_2f5588;
        default: break;
    }

    ctx->pc = 0x2f5550u;

    // 0x2f5550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f5550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f5554: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2f5554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2f5558: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2f5558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2f555c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2f555cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2f5560: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x2f5560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x2f5564: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2f5564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5568: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2f5568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f556c: 0xc040c1a  jal         func_103068
    ctx->pc = 0x2F556Cu;
    SET_GPR_U32(ctx, 31, 0x2F5574u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x2F5574u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2F5574u) { return; }
    ctx->pc = 0x2F5574u;
label_2f5574:
    // 0x2f5574: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2f5574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2f5578: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2f5578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f557c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2f557cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f5580: 0xc040c1a  jal         func_103068
    ctx->pc = 0x2F5580u;
    SET_GPR_U32(ctx, 31, 0x2F5588u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x2F5588u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2F5588u) { return; }
    ctx->pc = 0x2F5588u;
label_2f5588:
    // 0x2f5588: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2f5588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2f558c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2f558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5590: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2f5590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5594: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f5594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f5598: 0x0  nop
    ctx->pc = 0x2f5598u;
    // NOP
    // 0x2f559c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2F559Cu;
    {
        const bool branch_taken_0x2f559c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f559c) {
            ctx->pc = 0x2F55B0u;
            goto label_2f55b0;
        }
    }
    ctx->pc = 0x2F55A4u;
    // 0x2f55a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f55a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F55A8u;
    {
        const bool branch_taken_0x2f55a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f55a8) {
            ctx->pc = 0x2F55B4u;
            goto label_2f55b4;
        }
    }
    ctx->pc = 0x2F55B0u;
label_2f55b0:
    // 0x2f55b0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x2f55b0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f55b4:
    // 0x2f55b4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2f55b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f55b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2f55b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f55bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F55BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F55BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F55C4u;
}
