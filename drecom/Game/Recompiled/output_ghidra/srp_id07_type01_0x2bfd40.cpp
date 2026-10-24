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

// Function: srp_id07_type01
// Address: 0x2bfd40 - 0x2bfe6c
void srp_id07_type01_0x2bfd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id07_type01_0x2bfd40");
#endif

    switch (ctx->pc) {
        case 0x2bfd84u: goto label_2bfd84;
        case 0x2bfdb4u: goto label_2bfdb4;
        case 0x2bfdd4u: goto label_2bfdd4;
        case 0x2bfe04u: goto label_2bfe04;
        case 0x2bfe5cu: goto label_2bfe5c;
        default: break;
    }

    ctx->pc = 0x2bfd40u;

    // 0x2bfd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bfd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bfd44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bfd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bfd48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bfd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bfd4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bfd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bfd50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfd54: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2bfd54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bfd58: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2bfd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bfd5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfd60: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2bfd60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bfd64: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2bfd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bfd68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfd6c: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2bfd6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bfd70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bfd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfd74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfd78: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2bfd78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bfd7c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BFD7Cu;
    SET_GPR_U32(ctx, 31, 0x2BFD84u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BFD7Cu, 0x2BFD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD84u;
label_2bfd84:
    // 0x2bfd84: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2bfd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2bfd88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bfd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bfd8c: 0x0  nop
    ctx->pc = 0x2bfd8cu;
    // NOP
    // 0x2bfd90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bfd90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bfd94: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2bfd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2bfd98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bfd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfd9c: 0x0  nop
    ctx->pc = 0x2bfd9cu;
    // NOP
    // 0x2bfda0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bfda0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bfda4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfda8: 0xe4400338  swc1        $f0, 0x338($v0)
    ctx->pc = 0x2bfda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 824), bits); }
    // 0x2bfdac: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BFDACu;
    SET_GPR_U32(ctx, 31, 0x2BFDB4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BFDACu, 0x2BFDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDB4u;
label_2bfdb4:
    // 0x2bfdb4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bfdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2bfdb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bfdb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bfdbc: 0x0  nop
    ctx->pc = 0x2bfdbcu;
    // NOP
    // 0x2bfdc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bfdc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bfdc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfdc8: 0xe44002f0  swc1        $f0, 0x2F0($v0)
    ctx->pc = 0x2bfdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 752), bits); }
    // 0x2bfdcc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BFDCCu;
    SET_GPR_U32(ctx, 31, 0x2BFDD4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BFDCCu, 0x2BFDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDD4u;
label_2bfdd4:
    // 0x2bfdd4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2bfdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2bfdd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bfdd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bfddc: 0x0  nop
    ctx->pc = 0x2bfddcu;
    // NOP
    // 0x2bfde0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bfde0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bfde4: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2bfde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2bfde8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bfde8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfdec: 0x0  nop
    ctx->pc = 0x2bfdecu;
    // NOP
    // 0x2bfdf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bfdf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bfdf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfdf8: 0xe44002f4  swc1        $f0, 0x2F4($v0)
    ctx->pc = 0x2bfdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 756), bits); }
    // 0x2bfdfc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BFDFCu;
    SET_GPR_U32(ctx, 31, 0x2BFE04u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BFDFCu, 0x2BFE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE04u;
label_2bfe04:
    // 0x2bfe04: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bfe04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2bfe08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bfe08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bfe0c: 0x0  nop
    ctx->pc = 0x2bfe0cu;
    // NOP
    // 0x2bfe10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bfe10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bfe14: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2bfe14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2bfe18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bfe18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfe1c: 0x0  nop
    ctx->pc = 0x2bfe1cu;
    // NOP
    // 0x2bfe20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bfe20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bfe24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfe28: 0xe44002f8  swc1        $f0, 0x2F8($v0)
    ctx->pc = 0x2bfe28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 760), bits); }
    // 0x2bfe2c: 0x3c02bfb3  lui         $v0, 0xBFB3
    ctx->pc = 0x2bfe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49075 << 16));
    // 0x2bfe30: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2bfe30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2bfe34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bfe34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfe38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfe3c: 0xe4400304  swc1        $f0, 0x304($v0)
    ctx->pc = 0x2bfe3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 772), bits); }
    // 0x2bfe40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bfe40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfe44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfe48: 0xa043036b  sb          $v1, 0x36B($v0)
    ctx->pc = 0x2bfe48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 875), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bfe4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfe50: 0x244402d0  addiu       $a0, $v0, 0x2D0
    ctx->pc = 0x2bfe50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x2bfe54: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2BFE54u;
    SET_GPR_U32(ctx, 31, 0x2BFE5Cu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2BFE54u, 0x2BFE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE5Cu;
label_2bfe5c:
    // 0x2bfe5c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bfe5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfe60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bfe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bfe64: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFE6Cu;
}
