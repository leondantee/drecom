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

// Function: eff2d_0c_move10_t00
// Address: 0x1aa900 - 0x1aa99c
void eff2d_0c_move10_t00_0x1aa900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_0c_move10_t00_0x1aa900");
#endif

    ctx->pc = 0x1aa900u;

    // 0x1aa900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa904: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1aa904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1aa908: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa90c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1aa90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa910: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1aa910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1aa914: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa918: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1aa918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa91c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1aa91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1aa920: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x1aa920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x1aa924: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1aa924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1aa928: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1aa928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aa92c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1aa92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa930: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1aa930u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa934: 0x0  nop
    ctx->pc = 0x1aa934u;
    // NOP
    // 0x1aa938: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1AA938u;
    {
        const bool branch_taken_0x1aa938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa938) {
            ctx->pc = 0x1AA990u;
            goto label_1aa990;
        }
    }
    ctx->pc = 0x1AA940u;
    // 0x1aa940: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa944: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x1aa944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa948: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1aa948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa94c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1aa94cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1aa950: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1aa950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa954: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa958: 0x0  nop
    ctx->pc = 0x1aa958u;
    // NOP
    // 0x1aa95c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1AA95Cu;
    {
        const bool branch_taken_0x1aa95c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa95c) {
            ctx->pc = 0x1AA990u;
            goto label_1aa990;
        }
    }
    ctx->pc = 0x1AA964u;
    // 0x1aa964: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1aa964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa968: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1aa968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa96c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1aa96cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1aa970: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa974: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x1aa974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
    // 0x1aa978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aa978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa97c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa980: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x1aa980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x1aa984: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aa984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa988: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa98c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1aa98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
label_1aa990:
    // 0x1aa990: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1aa990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aa994: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA99Cu;
}
