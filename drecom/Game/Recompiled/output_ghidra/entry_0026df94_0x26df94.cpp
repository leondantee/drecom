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

// Function: entry_0026df94
// Address: 0x26df94 - 0x26e0a0
void entry_0026df94_0x26df94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026df94_0x26df94");
#endif

    switch (ctx->pc) {
        case 0x26dfe4u: goto label_26dfe4;
        case 0x26e018u: goto label_26e018;
        case 0x26e03cu: goto label_26e03c;
        default: break;
    }

    ctx->pc = 0x26df94u;

    // 0x26df94: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x26df94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x26df98: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x26df98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x26df9c: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x26df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x26dfa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26dfa4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x26dfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26dfa8: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x26dfa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x26dfac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26dfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26dfb0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26dfb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26dfb4: 0x4400058  bltz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x26DFB4u;
    {
        const bool branch_taken_0x26dfb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26dfb4) {
            ctx->pc = 0x26E118u;
            return;
        }
    }
    ctx->pc = 0x26DFBCu;
    // 0x26dfbc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dfc0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x26dfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x26dfc4: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x26DFC4u;
    {
        const bool branch_taken_0x26dfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dfc4) {
            ctx->pc = 0x26E118u;
            return;
        }
    }
    ctx->pc = 0x26DFCCu;
    // 0x26dfcc: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x26dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x26dfd0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26dfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26dfd4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26dfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26dfd8: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x26dfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26dfdc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x26DFDCu;
    SET_GPR_U32(ctx, 31, 0x26DFE4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x26DFE4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26DFE4u) { return; }
    ctx->pc = 0x26DFE4u;
label_26dfe4:
    // 0x26dfe4: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x26dfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dfe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26dfe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dfec: 0x0  nop
    ctx->pc = 0x26dfecu;
    // NOP
    // 0x26dff0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26dff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dff4: 0x0  nop
    ctx->pc = 0x26dff4u;
    // NOP
    // 0x26dff8: 0x45010047  bc1t        . + 4 + (0x47 << 2)
    ctx->pc = 0x26DFF8u;
    {
        const bool branch_taken_0x26dff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dff8) {
            ctx->pc = 0x26E118u;
            return;
        }
    }
    ctx->pc = 0x26E000u;
    // 0x26e000: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x26e000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x26e004: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26e004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26e008: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x26e008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e00c: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x26e00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26e010: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x26E010u;
    SET_GPR_U32(ctx, 31, 0x26E018u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x26E010u, 0x26E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E018u;
label_26e018:
    // 0x26e018: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x26e018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e01c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x26e01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e020: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x26e020u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26e024: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x26e024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e028: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x26e028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e02c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26e02cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26e030: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x26e030u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26e034: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x26E034u;
    SET_GPR_U32(ctx, 31, 0x26E03Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x26E034u, 0x26E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E03Cu;
label_26e03c:
    // 0x26e03c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x26e03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x26e040: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x26e040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e044: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x26e044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e048: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26e048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e04c: 0x0  nop
    ctx->pc = 0x26e04cu;
    // NOP
    // 0x26e050: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x26E050u;
    {
        const bool branch_taken_0x26e050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e050) {
            ctx->pc = 0x26E118u;
            return;
        }
    }
    ctx->pc = 0x26E058u;
    // 0x26e058: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x26e058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x26e05c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26e05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26e060: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x26e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e064: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26e064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26e068: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x26e068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x26e06c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x26e06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e070: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x26e070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e074: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26e074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e078: 0x0  nop
    ctx->pc = 0x26e078u;
    // NOP
    // 0x26e07c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x26E07Cu;
    {
        const bool branch_taken_0x26e07c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e07c) {
            ctx->pc = 0x26E0A0u;
            return;
        }
    }
    ctx->pc = 0x26E084u;
    // 0x26e084: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x26e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e088: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x26e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e08c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26e08cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26e090: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e094: 0x0  nop
    ctx->pc = 0x26e094u;
    // NOP
    // 0x26e098: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x26E098u;
    {
        const bool branch_taken_0x26e098 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e098) {
            ctx->pc = 0x26E118u;
            return;
        }
    }
    ctx->pc = 0x26E0A0u;
}
