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

// Function: entry_0029aefc
// Address: 0x29aefc - 0x29b034
void entry_0029aefc_0x29aefc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029aefc_0x29aefc");
#endif

    switch (ctx->pc) {
        case 0x29af44u: goto label_29af44;
        case 0x29af58u: goto label_29af58;
        case 0x29af74u: goto label_29af74;
        default: break;
    }

    ctx->pc = 0x29aefcu;

    // 0x29aefc: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29af00: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29af00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29af04: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29af04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29af08: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x29af08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29af0c: 0xc4a00188  lwc1        $f0, 0x188($a1)
    ctx->pc = 0x29af0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29af10: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x29af10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x29af14: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29af18: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29af18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29af1c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x29af1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x29af20: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x29af20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x29af24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29af24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29af28: 0x0  nop
    ctx->pc = 0x29af28u;
    // NOP
    // 0x29af2c: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x29af2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x29af30: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x29af30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29af34: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x29af34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29af38: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29af38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29af3c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29AF3Cu;
    SET_GPR_U32(ctx, 31, 0x29AF44u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29AF44u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AF44u) { return; }
    ctx->pc = 0x29AF44u;
label_29af44:
    // 0x29af44: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x29af44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x29af48: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29af48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29af4c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29af4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29af50: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29AF50u;
    SET_GPR_U32(ctx, 31, 0x29AF58u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29AF58u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AF58u) { return; }
    ctx->pc = 0x29AF58u;
label_29af58:
    // 0x29af58: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x29af58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29af5c: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29af5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29af60: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x29af60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x29af64: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x29af64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x29af68: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x29af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29af6c: 0xc040c60  jal         func_103180
    ctx->pc = 0x29AF6Cu;
    SET_GPR_U32(ctx, 31, 0x29AF74u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29AF74u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AF74u) { return; }
    ctx->pc = 0x29AF74u;
label_29af74:
    // 0x29af74: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x29af74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x29af78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29af78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29af7c: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29af7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29af80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29af80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29af84: 0x0  nop
    ctx->pc = 0x29af84u;
    // NOP
    // 0x29af88: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x29AF88u;
    {
        const bool branch_taken_0x29af88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29af88) {
            ctx->pc = 0x29B034u;
            return;
        }
    }
    ctx->pc = 0x29AF90u;
    // 0x29af90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29af90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29af94: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29af94u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29af98: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29af98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29af9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29af9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29afa0: 0x0  nop
    ctx->pc = 0x29afa0u;
    // NOP
    // 0x29afa4: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x29AFA4u;
    {
        const bool branch_taken_0x29afa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29afa4) {
            ctx->pc = 0x29B034u;
            return;
        }
    }
    ctx->pc = 0x29AFACu;
    // 0x29afac: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x29afacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29afb0: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x29afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x29afb4: 0x34458000  ori         $a1, $v0, 0x8000
    ctx->pc = 0x29afb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29afb8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29afb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29afbc: 0x0  nop
    ctx->pc = 0x29afbcu;
    // NOP
    // 0x29afc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29afc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29afc4: 0x0  nop
    ctx->pc = 0x29afc4u;
    // NOP
    // 0x29afc8: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x29AFC8u;
    {
        const bool branch_taken_0x29afc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29afc8) {
            ctx->pc = 0x29B034u;
            return;
        }
    }
    ctx->pc = 0x29AFD0u;
    // 0x29afd0: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x29afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29afd4: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x29afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x29afd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29afd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29afdc: 0x0  nop
    ctx->pc = 0x29afdcu;
    // NOP
    // 0x29afe0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29afe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29afe4: 0x0  nop
    ctx->pc = 0x29afe4u;
    // NOP
    // 0x29afe8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29AFE8u;
    {
        const bool branch_taken_0x29afe8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29afe8) {
            ctx->pc = 0x29B034u;
            return;
        }
    }
    ctx->pc = 0x29AFF0u;
    // 0x29aff0: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x29aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29aff4: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x29aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x29aff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29aff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29affc: 0x0  nop
    ctx->pc = 0x29affcu;
    // NOP
    // 0x29b000: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29b000u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b004: 0x0  nop
    ctx->pc = 0x29b004u;
    // NOP
    // 0x29b008: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29B008u;
    {
        const bool branch_taken_0x29b008 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b008) {
            ctx->pc = 0x29B034u;
            return;
        }
    }
    ctx->pc = 0x29B010u;
    // 0x29b010: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x29b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b014: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29b014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29b018: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29b018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29b01c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b020: 0x0  nop
    ctx->pc = 0x29b020u;
    // NOP
    // 0x29b024: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b028: 0x0  nop
    ctx->pc = 0x29b028u;
    // NOP
    // 0x29b02c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29B02Cu;
    {
        const bool branch_taken_0x29b02c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b02c) {
            ctx->pc = 0x29B040u;
            return;
        }
    }
    ctx->pc = 0x29B034u;
}
