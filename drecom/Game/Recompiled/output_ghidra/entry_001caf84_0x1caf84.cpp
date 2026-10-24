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

// Function: entry_001caf84
// Address: 0x1caf84 - 0x1cb080
void entry_001caf84_0x1caf84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caf84_0x1caf84");
#endif

    switch (ctx->pc) {
        case 0x1cafbcu: goto label_1cafbc;
        case 0x1cafe4u: goto label_1cafe4;
        case 0x1caff8u: goto label_1caff8;
        case 0x1cb014u: goto label_1cb014;
        default: break;
    }

    ctx->pc = 0x1caf84u;

    // 0x1caf84: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1caf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf88: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1caf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1caf8c: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1CAF8Cu;
    {
        const bool branch_taken_0x1caf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf8c) {
            ctx->pc = 0x1CB0C4u;
            return;
        }
    }
    ctx->pc = 0x1CAF94u;
    // 0x1caf94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf98: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1caf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1caf9c: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1caf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cafa0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cafa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cafa4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1cafa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cafa8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cafa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cafac: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1cafacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1cafb0: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x1cafb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1cafb4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1CAFB4u;
    SET_GPR_U32(ctx, 31, 0x1CAFBCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1CAFB4u, 0x1CAFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFBCu;
label_1cafbc:
    // 0x1cafbc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cafbcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cafc0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1cafc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cafc4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1cafc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cafc8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1cafc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cafcc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1cafccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cafd0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1cafd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cafd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cafd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cafd8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1cafd8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1cafdc: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1CAFDCu;
    SET_GPR_U32(ctx, 31, 0x1CAFE4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1CAFDCu, 0x1CAFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFE4u;
label_1cafe4:
    // 0x1cafe4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1cafe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1cafe8: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x1cafe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cafec: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x1cafecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1caff0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1CAFF0u;
    SET_GPR_U32(ctx, 31, 0x1CAFF8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1CAFF0u, 0x1CAFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFF8u;
label_1caff8:
    // 0x1caff8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1caff8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1caffc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb000: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1cb000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1cb004: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1cb004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb008: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x1cb008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb00c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1CB00Cu;
    SET_GPR_U32(ctx, 31, 0x1CB014u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1CB00Cu, 0x1CB014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB014u;
label_1cb014:
    // 0x1cb014: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb018: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1cb018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1cb01c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb020: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1cb020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb028: 0x0  nop
    ctx->pc = 0x1cb028u;
    // NOP
    // 0x1cb02c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb030: 0x0  nop
    ctx->pc = 0x1cb030u;
    // NOP
    // 0x1cb034: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB034u;
    {
        const bool branch_taken_0x1cb034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb034) {
            ctx->pc = 0x1CB080u;
            return;
        }
    }
    ctx->pc = 0x1CB03Cu;
    // 0x1cb03c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb040: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1cb040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb044: 0x3c02bf86  lui         $v0, 0xBF86
    ctx->pc = 0x1cb044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49030 << 16));
    // 0x1cb048: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1cb048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1cb04c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb050: 0x0  nop
    ctx->pc = 0x1cb050u;
    // NOP
    // 0x1cb054: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb058: 0x0  nop
    ctx->pc = 0x1cb058u;
    // NOP
    // 0x1cb05c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x1CB05Cu;
    {
        const bool branch_taken_0x1cb05c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb05c) {
            ctx->pc = 0x1CB11Cu;
            return;
        }
    }
    ctx->pc = 0x1CB064u;
    // 0x1cb064: 0x3c02bf86  lui         $v0, 0xBF86
    ctx->pc = 0x1cb064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49030 << 16));
    // 0x1cb068: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1cb068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1cb06c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb070: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb074: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1cb074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1cb078: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1CB078u;
    {
        const bool branch_taken_0x1cb078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb078) {
            ctx->pc = 0x1CB11Cu;
            return;
        }
    }
    ctx->pc = 0x1CB080u;
}
