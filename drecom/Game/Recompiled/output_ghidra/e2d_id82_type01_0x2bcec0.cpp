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

// Function: e2d_id82_type01
// Address: 0x2bcec0 - 0x2bcfec
void e2d_id82_type01_0x2bcec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id82_type01_0x2bcec0");
#endif

    switch (ctx->pc) {
        case 0x2bcee0u: goto label_2bcee0;
        default: break;
    }

    ctx->pc = 0x2bcec0u;

    // 0x2bcec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bcec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bcec4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bcec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bcec8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bcec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bcecc: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2bceccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2bced0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bced0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bced4: 0xa043011c  sb          $v1, 0x11C($v0)
    ctx->pc = 0x2bced4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bced8: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BCED8u;
    SET_GPR_U32(ctx, 31, 0x2BCEE0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BCED8u, 0x2BCEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCEE0u;
label_2bcee0:
    // 0x2bcee0: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2bcee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2bcee4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bcee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcee8: 0x0  nop
    ctx->pc = 0x2bcee8u;
    // NOP
    // 0x2bceec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bceecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bcef0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2bcef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2bcef4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcef8: 0x0  nop
    ctx->pc = 0x2bcef8u;
    // NOP
    // 0x2bcefc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bcefcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bcf00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcf04: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bcf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bcf08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bcf08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcf0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcf10: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2bcf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2bcf14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bcf14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcf18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcf1c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2bcf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2bcf20: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2bcf20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2bcf24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcf24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcf28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcf2c: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2bcf2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2bcf30: 0x3c03be4c  lui         $v1, 0xBE4C
    ctx->pc = 0x2bcf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48716 << 16));
    // 0x2bcf34: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bcf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bcf38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcf38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcf3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcf40: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2bcf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2bcf44: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bcf44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bcf48: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bcf48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bcf4c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bcf4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bcf50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bcf50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bcf54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bcf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bcf58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bcf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bcf5c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bcf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bcf60: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bcf60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bcf64: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bcf64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bcf68: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bcf68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bcf6c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bcf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bcf70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bcf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bcf74: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bcf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bcf78: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bcf78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bcf7c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bcf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bcf80: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bcf80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bcf84: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bcf84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bcf88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bcf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bcf8c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2bcf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2bcf90: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x2bcf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2bcf94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcf98: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2bcf98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2bcf9c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bcf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bcfa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcfa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcfa4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcfa8: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2bcfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2bcfac: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bcfacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bcfb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcfb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcfb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcfb8: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2bcfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2bcfbc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bcfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bcfc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcfc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcfc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcfc8: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2bcfc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2bcfcc: 0x3c0342d2  lui         $v1, 0x42D2
    ctx->pc = 0x2bcfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17106 << 16));
    // 0x2bcfd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcfd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcfd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcfd8: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2bcfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2bcfdc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bcfdcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcfe0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bcfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bcfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCFECu;
}
