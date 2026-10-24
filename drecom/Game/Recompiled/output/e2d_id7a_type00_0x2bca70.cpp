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

// Function: e2d_id7a_type00
// Address: 0x2bca70 - 0x2bcb60
void e2d_id7a_type00_0x2bca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id7a_type00_0x2bca70");
#endif

    switch (ctx->pc) {
        case 0x2bcad8u: goto label_2bcad8;
        default: break;
    }

    ctx->pc = 0x2bca70u;

    // 0x2bca70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bca74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bca74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bca78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bca78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bca7c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bca80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bca80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bca84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bca88: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bca88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bca8c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bca90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bca90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bca94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bca98: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bca98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bca9c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bcaa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcaa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcaa4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bcaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcaa8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bcaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bcaac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bcaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bcab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcab4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bcab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcab8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bcab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bcabc: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x2bcabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x2bcac0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2bcac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2bcac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcac8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bcac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcacc: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x2bcaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2bcad0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BCAD0u;
    SET_GPR_U32(ctx, 31, 0x2BCAD8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BCAD0u, 0x2BCAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAD8u;
label_2bcad8:
    // 0x2bcad8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2bcad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2bcadc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bcadcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcae0: 0x0  nop
    ctx->pc = 0x2bcae0u;
    // NOP
    // 0x2bcae4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bcae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bcae8: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x2bcae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x2bcaec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcaecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcaf0: 0x0  nop
    ctx->pc = 0x2bcaf0u;
    // NOP
    // 0x2bcaf4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bcaf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bcaf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcafc: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bcafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bcb00: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2bcb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2bcb04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcb04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcb08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcb0c: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2bcb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2bcb10: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2bcb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2bcb14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcb14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcb18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcb1c: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2bcb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2bcb20: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2bcb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2bcb24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcb24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcb28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcb2c: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2bcb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2bcb30: 0x3c03bfcc  lui         $v1, 0xBFCC
    ctx->pc = 0x2bcb30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49100 << 16));
    // 0x2bcb34: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bcb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bcb38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcb38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcb3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcb40: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2bcb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2bcb44: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2bcb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bcb48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcb4c: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2bcb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bcb50: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bcb50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcb54: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bcb54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bcb58: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCB60u;
}
