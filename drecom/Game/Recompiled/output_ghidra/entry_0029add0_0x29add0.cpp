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

// Function: entry_0029add0
// Address: 0x29add0 - 0x29aef0
void entry_0029add0_0x29add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029add0_0x29add0");
#endif

    switch (ctx->pc) {
        case 0x29adf8u: goto label_29adf8;
        case 0x29ae10u: goto label_29ae10;
        case 0x29ae30u: goto label_29ae30;
        default: break;
    }

    ctx->pc = 0x29add0u;

    // 0x29add0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29add0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x29add4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29add4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29add8: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x29add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29addc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29addcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29ade0: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29ade0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29ade4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x29ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29ade8: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x29ade8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29adec: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29adecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29adf0: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29ADF0u;
    SET_GPR_U32(ctx, 31, 0x29ADF8u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29ADF8u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29ADF8u) { return; }
    ctx->pc = 0x29ADF8u;
label_29adf8:
    // 0x29adf8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x29adf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29adfc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29adfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29ae00: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29ae00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29ae04: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29ae04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29ae08: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29AE08u;
    SET_GPR_U32(ctx, 31, 0x29AE10u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29AE10u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AE10u) { return; }
    ctx->pc = 0x29AE10u;
label_29ae10:
    // 0x29ae10: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x29ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ae14: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29ae14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29ae18: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x29ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29ae1c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29ae1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29ae20: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x29ae20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29ae24: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x29ae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29ae28: 0xc040c60  jal         func_103180
    ctx->pc = 0x29AE28u;
    SET_GPR_U32(ctx, 31, 0x29AE30u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29AE30u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AE30u) { return; }
    ctx->pc = 0x29AE30u;
label_29ae30:
    // 0x29ae30: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x29ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x29ae34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29ae34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29ae38: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29ae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ae3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ae3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ae40: 0x0  nop
    ctx->pc = 0x29ae40u;
    // NOP
    // 0x29ae44: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x29AE44u;
    {
        const bool branch_taken_0x29ae44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ae44) {
            ctx->pc = 0x29AEF0u;
            return;
        }
    }
    ctx->pc = 0x29AE4Cu;
    // 0x29ae4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29ae4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29ae50: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29ae50u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ae54: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29ae54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ae58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ae58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ae5c: 0x0  nop
    ctx->pc = 0x29ae5cu;
    // NOP
    // 0x29ae60: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x29AE60u;
    {
        const bool branch_taken_0x29ae60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ae60) {
            ctx->pc = 0x29AEF0u;
            return;
        }
    }
    ctx->pc = 0x29AE68u;
    // 0x29ae68: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x29ae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ae6c: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x29ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x29ae70: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29ae70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29ae74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ae74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ae78: 0x0  nop
    ctx->pc = 0x29ae78u;
    // NOP
    // 0x29ae7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29ae7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ae80: 0x0  nop
    ctx->pc = 0x29ae80u;
    // NOP
    // 0x29ae84: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x29AE84u;
    {
        const bool branch_taken_0x29ae84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ae84) {
            ctx->pc = 0x29AEF0u;
            return;
        }
    }
    ctx->pc = 0x29AE8Cu;
    // 0x29ae8c: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x29ae8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ae90: 0x3c034516  lui         $v1, 0x4516
    ctx->pc = 0x29ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17686 << 16));
    // 0x29ae94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29ae94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ae98: 0x0  nop
    ctx->pc = 0x29ae98u;
    // NOP
    // 0x29ae9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ae9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aea0: 0x0  nop
    ctx->pc = 0x29aea0u;
    // NOP
    // 0x29aea4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29AEA4u;
    {
        const bool branch_taken_0x29aea4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aea4) {
            ctx->pc = 0x29AEF0u;
            return;
        }
    }
    ctx->pc = 0x29AEACu;
    // 0x29aeac: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x29aeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29aeb0: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x29aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x29aeb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29aeb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aeb8: 0x0  nop
    ctx->pc = 0x29aeb8u;
    // NOP
    // 0x29aebc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29aebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aec0: 0x0  nop
    ctx->pc = 0x29aec0u;
    // NOP
    // 0x29aec4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29AEC4u;
    {
        const bool branch_taken_0x29aec4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aec4) {
            ctx->pc = 0x29AEF0u;
            return;
        }
    }
    ctx->pc = 0x29AECCu;
    // 0x29aecc: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x29aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29aed0: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29aed4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29aed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29aed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aedc: 0x0  nop
    ctx->pc = 0x29aedcu;
    // NOP
    // 0x29aee0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29aee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aee4: 0x0  nop
    ctx->pc = 0x29aee4u;
    // NOP
    // 0x29aee8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29AEE8u;
    {
        const bool branch_taken_0x29aee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aee8) {
            ctx->pc = 0x29AEFCu;
            return;
        }
    }
    ctx->pc = 0x29AEF0u;
}
