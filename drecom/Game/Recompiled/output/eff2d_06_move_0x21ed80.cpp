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

// Function: eff2d_06_move
// Address: 0x21ed80 - 0x21f688
void eff2d_06_move_0x21ed80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_06_move_0x21ed80");
#endif

    switch (ctx->pc) {
        case 0x21eddcu: goto label_21eddc;
        case 0x21ee08u: goto label_21ee08;
        case 0x21ee84u: goto label_21ee84;
        case 0x21ee94u: goto label_21ee94;
        case 0x21eea8u: goto label_21eea8;
        case 0x21eeb4u: goto label_21eeb4;
        case 0x21ef7cu: goto label_21ef7c;
        case 0x21ef90u: goto label_21ef90;
        case 0x21efa8u: goto label_21efa8;
        case 0x21f03cu: goto label_21f03c;
        case 0x21f134u: goto label_21f134;
        case 0x21f148u: goto label_21f148;
        case 0x21f160u: goto label_21f160;
        case 0x21f1f4u: goto label_21f1f4;
        case 0x21f2ecu: goto label_21f2ec;
        case 0x21f300u: goto label_21f300;
        case 0x21f318u: goto label_21f318;
        case 0x21f3a8u: goto label_21f3a8;
        case 0x21f4acu: goto label_21f4ac;
        case 0x21f4c0u: goto label_21f4c0;
        case 0x21f4d8u: goto label_21f4d8;
        case 0x21f56cu: goto label_21f56c;
        default: break;
    }

    ctx->pc = 0x21ed80u;

    // 0x21ed80: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x21ed80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x21ed84: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x21ed84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x21ed88: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x21ed88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x21ed8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21ed8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x21ed90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21ed90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21ed94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21ed94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21ed98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21ed9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21ed9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21eda0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21eda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21eda4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21eda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21eda8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21eda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21edac: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x21edacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
    // 0x21edb0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x21edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21edb4: 0x8c630124  lw          $v1, 0x124($v1)
    ctx->pc = 0x21edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x21edb8: 0x14600226  bnez        $v1, . + 4 + (0x226 << 2)
    ctx->pc = 0x21EDB8u;
    {
        const bool branch_taken_0x21edb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21edb8) {
            ctx->pc = 0x21F654u;
            goto label_21f654;
        }
    }
    ctx->pc = 0x21EDC0u;
    // 0x21edc0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x21edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21edc4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x21edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21edc8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x21edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x21edcc: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x21edccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x21edd0: 0x246600b0  addiu       $a2, $v1, 0xB0
    ctx->pc = 0x21edd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x21edd4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x21EDD4u;
    SET_GPR_U32(ctx, 31, 0x21EDDCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x21EDDCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21EDDCu) { return; }
    ctx->pc = 0x21EDDCu;
label_21eddc:
    // 0x21eddc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x21eddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ede0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x21ede0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x21ede4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x21ede4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x21ede8: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x21ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x21edec: 0xc44001b4  lwc1        $f0, 0x1B4($v0)
    ctx->pc = 0x21edecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21edf0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x21edf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x21edf4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x21edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21edf8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x21edf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21edfc: 0xc7ac00f4  lwc1        $f12, 0xF4($sp)
    ctx->pc = 0x21edfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21ee00: 0xc040c60  jal         func_103180
    ctx->pc = 0x21EE00u;
    SET_GPR_U32(ctx, 31, 0x21EE08u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x21EE08u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21EE08u) { return; }
    ctx->pc = 0x21EE08u;
label_21ee08:
    // 0x21ee08: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x21ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x21ee0c: 0x3463fc00  ori         $v1, $v1, 0xFC00
    ctx->pc = 0x21ee0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64512);
    // 0x21ee10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ee10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ee14: 0x0  nop
    ctx->pc = 0x21ee14u;
    // NOP
    // 0x21ee18: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x21ee18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x21ee1c: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x21ee1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21ee20: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x21ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x21ee24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ee24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ee28: 0xc4c00104  lwc1        $f0, 0x104($a2)
    ctx->pc = 0x21ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ee2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ee2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ee30: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x21ee30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ee34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21ee34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ee38: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x21ee38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x21ee3c: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x21ee3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ee40: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x21ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x21ee44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ee44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ee48: 0x0  nop
    ctx->pc = 0x21ee48u;
    // NOP
    // 0x21ee4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21ee4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ee50: 0x0  nop
    ctx->pc = 0x21ee50u;
    // NOP
    // 0x21ee54: 0x450101ff  bc1t        . + 4 + (0x1FF << 2)
    ctx->pc = 0x21EE54u;
    {
        const bool branch_taken_0x21ee54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ee54) {
            ctx->pc = 0x21F654u;
            goto label_21f654;
        }
    }
    ctx->pc = 0x21EE5Cu;
    // 0x21ee5c: 0x3c023fc3  lui         $v0, 0x3FC3
    ctx->pc = 0x21ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16323 << 16));
    // 0x21ee60: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x21ee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x21ee64: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ee64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ee68: 0x3c023333  lui         $v0, 0x3333
    ctx->pc = 0x21ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13107 << 16));
    // 0x21ee6c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x21ee6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x21ee70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21ee70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21ee74: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x21ee74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x21ee78: 0xc7ac00fc  lwc1        $f12, 0xFC($sp)
    ctx->pc = 0x21ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21ee7c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x21EE7Cu;
    SET_GPR_U32(ctx, 31, 0x21EE84u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x21EE7Cu, 0x21EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE84u;
label_21ee84:
    // 0x21ee84: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x21ee84u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21ee88: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21ee88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21ee8c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x21EE8Cu;
    SET_GPR_U32(ctx, 31, 0x21EE94u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x21EE8Cu, 0x21EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE94u;
label_21ee94:
    // 0x21ee94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21ee98: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x21ee98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x21ee9c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21ee9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21eea0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x21EEA0u;
    SET_GPR_U32(ctx, 31, 0x21EEA8u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x21EEA0u, 0x21EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEA8u;
label_21eea8:
    // 0x21eea8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21eea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21eeac: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x21EEACu;
    SET_GPR_U32(ctx, 31, 0x21EEB4u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x21EEACu, 0x21EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEB4u;
label_21eeb4:
    // 0x21eeb4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x21eeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x21eeb8: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x21eeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21eebc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21eec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21eec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21eec4: 0x0  nop
    ctx->pc = 0x21eec4u;
    // NOP
    // 0x21eec8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21eec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21eecc: 0x0  nop
    ctx->pc = 0x21eeccu;
    // NOP
    // 0x21eed0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x21EED0u;
    {
        const bool branch_taken_0x21eed0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21eed0) {
            ctx->pc = 0x21EEE8u;
            goto label_21eee8;
        }
    }
    ctx->pc = 0x21EED8u;
    // 0x21eed8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21eedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21eedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21eee0: 0x0  nop
    ctx->pc = 0x21eee0u;
    // NOP
    // 0x21eee4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x21eee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_21eee8:
    // 0x21eee8: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x21eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x21eeec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21eeecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21eef0: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x21eef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eef4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21eef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21eef8: 0x0  nop
    ctx->pc = 0x21eef8u;
    // NOP
    // 0x21eefc: 0x450001d5  bc1f        . + 4 + (0x1D5 << 2)
    ctx->pc = 0x21EEFCu;
    {
        const bool branch_taken_0x21eefc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21eefc) {
            ctx->pc = 0x21F654u;
            goto label_21f654;
        }
    }
    ctx->pc = 0x21EF04u;
    // 0x21ef04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x21ef04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x21ef08: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x21ef08u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ef0c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x21ef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21ef10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ef14: 0x0  nop
    ctx->pc = 0x21ef14u;
    // NOP
    // 0x21ef18: 0x450101ce  bc1t        . + 4 + (0x1CE << 2)
    ctx->pc = 0x21EF18u;
    {
        const bool branch_taken_0x21ef18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ef18) {
            ctx->pc = 0x21F654u;
            goto label_21f654;
        }
    }
    ctx->pc = 0x21EF20u;
    // 0x21ef20: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x21ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x21ef24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21ef24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ef28: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x21ef28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x21ef2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21ef30: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x21ef30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x21ef34: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x21ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x21ef38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21ef38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ef3c: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x21ef3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ef40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x21ef40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21ef44: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x21ef44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x21ef48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21ef48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ef4c: 0x0  nop
    ctx->pc = 0x21ef4cu;
    // NOP
    // 0x21ef50: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x21ef50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x21ef54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21ef54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ef58: 0x0  nop
    ctx->pc = 0x21ef58u;
    // NOP
    // 0x21ef5c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x21ef5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x21ef60: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x21ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x21ef64: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21ef64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21ef68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21ef68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21ef6c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x21ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21ef70: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x21ef70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x21ef74: 0xc040c8c  jal         func_103230
    ctx->pc = 0x21EF74u;
    SET_GPR_U32(ctx, 31, 0x21EF7Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x21EF7Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21EF7Cu) { return; }
    ctx->pc = 0x21EF7Cu;
label_21ef7c:
    // 0x21ef7c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x21ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21ef80: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x21ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21ef84: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x21ef84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21ef88: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x21EF88u;
    SET_GPR_U32(ctx, 31, 0x21EF90u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x21EF90u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21EF90u) { return; }
    ctx->pc = 0x21EF90u;
label_21ef90:
    // 0x21ef90: 0x24043001  addiu       $a0, $zero, 0x3001
    ctx->pc = 0x21ef90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x21ef94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21ef94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ef98: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x21ef98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21ef9c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21ef9cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21efa0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21EFA0u;
    SET_GPR_U32(ctx, 31, 0x21EFA8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21EFA0u, 0x21EFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EFA8u;
label_21efa8:
    // 0x21efa8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21efa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21efac: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21efacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21efb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21efb4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21efb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21efb8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21efbc: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x21efbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x21efc0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21efc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21efc4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21efc8: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x21efc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x21efcc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21efccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21efd0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21efd4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21efd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21efd8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21efd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21efdc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21efe0: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21efe0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21efe4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21efe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21efe8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21efec: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21efecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21eff0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21eff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21eff4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21eff8: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21eff8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21effc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21effcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f000: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f000u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f004: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21f004u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f008: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f00c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f010: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21f010u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f014: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f018: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f018u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f01c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21f01cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f020: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f024: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f028: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21f028u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f02c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f030: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21f030u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f034: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21F034u;
    SET_GPR_U32(ctx, 31, 0x21F03Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21F034u, 0x21F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F03Cu;
label_21f03c:
    // 0x21f03c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f040: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21f040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21f044: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f048: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21f048u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f04c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21f050: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21f050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21f054: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F054u;
    {
        const bool branch_taken_0x21f054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21f054) {
            ctx->pc = 0x21F068u;
            goto label_21f068;
        }
    }
    ctx->pc = 0x21F05Cu;
    // 0x21f05c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21f05cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21F060u;
    {
        const bool branch_taken_0x21f060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f060) {
            ctx->pc = 0x21F084u;
            goto label_21f084;
        }
    }
    ctx->pc = 0x21F068u;
label_21f068:
    // 0x21f068: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f06c: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f070: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f074: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21f074u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f078: 0x24550118  addiu       $s5, $v0, 0x118
    ctx->pc = 0x21f078u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x21f07c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x21f07cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21f080: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x21f080u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_21f084:
    // 0x21f084: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x21f084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21f088: 0x2456a610  addiu       $s6, $v0, -0x59F0
    ctx->pc = 0x21f088u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x21f08c: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x21f08cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f090: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21f090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21f094: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21f094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21f098: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x21F098u;
    {
        const bool branch_taken_0x21f098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x21f098) {
            ctx->pc = 0x21F118u;
            goto label_21f118;
        }
    }
    ctx->pc = 0x21F0A0u;
    // 0x21f0a0: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x21f0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x21f0a4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x21f0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x21f0a8: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x21f0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x21f0ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21f0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f0b4: 0x0  nop
    ctx->pc = 0x21f0b4u;
    // NOP
    // 0x21f0b8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21f0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21f0bc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21f0c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f0c4: 0x0  nop
    ctx->pc = 0x21f0c4u;
    // NOP
    // 0x21f0c8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21f0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21f0cc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21f0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f0d4: 0x0  nop
    ctx->pc = 0x21f0d4u;
    // NOP
    // 0x21f0d8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21f0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21f0dc: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x21f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x21f0e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f0e4: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x21f0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f0e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f0e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f0ec: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21f0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21f0f0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x21f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21f0f4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x21f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x21f0f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f0fc: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x21f0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f100: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21f100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f104: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x21f104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f108: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f10c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21f10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21f110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f114: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x21f114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_21f118:
    // 0x21f118: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x21f118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x21f11c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21f11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21f120: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21f120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21f124: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x21f124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f128: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x21f128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x21f12c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x21F12Cu;
    SET_GPR_U32(ctx, 31, 0x21F134u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x21F134u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F134u) { return; }
    ctx->pc = 0x21F134u;
label_21f134:
    // 0x21f134: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x21f134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21f138: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x21f138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21f13c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x21f13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f140: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x21F140u;
    SET_GPR_U32(ctx, 31, 0x21F148u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x21F148u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F148u) { return; }
    ctx->pc = 0x21F148u;
label_21f148:
    // 0x21f148: 0x24043001  addiu       $a0, $zero, 0x3001
    ctx->pc = 0x21f148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x21f14c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21f14cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f150: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x21f150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21f154: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21f154u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f158: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21F158u;
    SET_GPR_U32(ctx, 31, 0x21F160u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21F158u, 0x21F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F160u;
label_21f160:
    // 0x21f160: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f164: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21f164u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21f168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f16c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f170: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f174: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x21f174u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x21f178: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f17c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f180: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x21f180u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f184: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f188: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f188u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f18c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21f18cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f190: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f194: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f194u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f198: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21f198u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f19c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1a0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f1a4: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21f1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f1a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1ac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f1b0: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21f1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f1b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f1bc: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21f1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f1c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f1c8: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21f1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f1cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f1d4: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21f1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f1d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f1e0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21f1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f1e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1e8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f1ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21F1ECu;
    SET_GPR_U32(ctx, 31, 0x21F1F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21F1ECu, 0x21F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F1F4u;
label_21f1f4:
    // 0x21f1f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f1f8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21f1f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21f1fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f200: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21f200u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f204: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21f204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21f208: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21f20c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F20Cu;
    {
        const bool branch_taken_0x21f20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21f20c) {
            ctx->pc = 0x21F220u;
            goto label_21f220;
        }
    }
    ctx->pc = 0x21F214u;
    // 0x21f214: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21f214u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f218: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21F218u;
    {
        const bool branch_taken_0x21f218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f218) {
            ctx->pc = 0x21F23Cu;
            goto label_21f23c;
        }
    }
    ctx->pc = 0x21F220u;
label_21f220:
    // 0x21f220: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f224: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21f224u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f228: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f22c: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f230: 0x24570118  addiu       $s7, $v0, 0x118
    ctx->pc = 0x21f230u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x21f234: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x21f234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x21f238: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x21f238u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_21f23c:
    // 0x21f23c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x21f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21f240: 0x245ea610  addiu       $fp, $v0, -0x59F0
    ctx->pc = 0x21f240u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x21f244: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x21f244u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f248: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21f248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21f24c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21f24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21f250: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x21F250u;
    {
        const bool branch_taken_0x21f250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x21f250) {
            ctx->pc = 0x21F2D0u;
            goto label_21f2d0;
        }
    }
    ctx->pc = 0x21F258u;
    // 0x21f258: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x21f258u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x21f25c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x21f25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x21f260: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x21f260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x21f264: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21f264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21f268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f26c: 0x0  nop
    ctx->pc = 0x21f26cu;
    // NOP
    // 0x21f270: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21f270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21f274: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21f274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21f278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f27c: 0x0  nop
    ctx->pc = 0x21f27cu;
    // NOP
    // 0x21f280: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21f280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21f284: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21f284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21f288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f28c: 0x0  nop
    ctx->pc = 0x21f28cu;
    // NOP
    // 0x21f290: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21f290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21f294: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x21f294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x21f298: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f29c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x21f29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f2a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f2a4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21f2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21f2a8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x21f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21f2ac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x21f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x21f2b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f2b4: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x21f2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f2b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21f2b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f2bc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x21f2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f2c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f2c4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21f2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21f2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f2cc: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x21f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_21f2d0:
    // 0x21f2d0: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x21f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x21f2d4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x21f2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x21f2d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21f2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21f2dc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x21f2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f2e0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x21f2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x21f2e4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x21F2E4u;
    SET_GPR_U32(ctx, 31, 0x21F2ECu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x21F2ECu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F2ECu) { return; }
    ctx->pc = 0x21F2ECu;
label_21f2ec:
    // 0x21f2ec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x21f2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21f2f0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x21f2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21f2f4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x21f2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f2f8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x21F2F8u;
    SET_GPR_U32(ctx, 31, 0x21F300u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x21F300u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F300u) { return; }
    ctx->pc = 0x21F300u;
label_21f300:
    // 0x21f300: 0x24043001  addiu       $a0, $zero, 0x3001
    ctx->pc = 0x21f300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x21f304: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21f304u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f308: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x21f308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21f30c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21f30cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f310: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21F310u;
    SET_GPR_U32(ctx, 31, 0x21F318u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21F310u, 0x21F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F318u;
label_21f318:
    // 0x21f318: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f31c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21f31cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21f320: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f324: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f328: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21f328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f32c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f330: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f330u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f334: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x21f334u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f338: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f33c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f340: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21f340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f344: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f348: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f348u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f34c: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21f34cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f350: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f354: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f354u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f358: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21f358u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f35c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f360: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f360u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f364: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21f364u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f368: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f36c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f370: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21f370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f374: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f378: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f378u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f37c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21f37cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f380: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f384: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f384u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f388: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21f388u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f38c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f390: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f390u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f394: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21f394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f398: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f39c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f3a0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21F3A0u;
    SET_GPR_U32(ctx, 31, 0x21F3A8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21F3A0u, 0x21F3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3A8u;
label_21f3a8:
    // 0x21f3a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f3ac: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21f3acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21f3b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f3b4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21f3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f3b8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21f3bc: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21f3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21f3c0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F3C0u;
    {
        const bool branch_taken_0x21f3c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21f3c0) {
            ctx->pc = 0x21F3D4u;
            goto label_21f3d4;
        }
    }
    ctx->pc = 0x21F3C8u;
    // 0x21f3c8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x21f3c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f3cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21F3CCu;
    {
        const bool branch_taken_0x21f3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f3cc) {
            ctx->pc = 0x21F3F8u;
            goto label_21f3f8;
        }
    }
    ctx->pc = 0x21F3D4u;
label_21f3d4:
    // 0x21f3d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f3d8: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f3dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f3e0: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f3e4: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x21f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x21f3e8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x21f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x21f3ec: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x21f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21f3f0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x21f3f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21f3f4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x21f3f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_21f3f8:
    // 0x21f3f8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x21f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21f3fc: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x21f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x21f400: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x21f400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x21f404: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x21f404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x21f408: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21f408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21f40c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21f410: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21f410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21f414: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x21F414u;
    {
        const bool branch_taken_0x21f414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x21f414) {
            ctx->pc = 0x21F494u;
            goto label_21f494;
        }
    }
    ctx->pc = 0x21F41Cu;
    // 0x21f41c: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x21f41cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x21f420: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x21f420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x21f424: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x21f424u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x21f428: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21f428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21f42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f430: 0x0  nop
    ctx->pc = 0x21f430u;
    // NOP
    // 0x21f434: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21f434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21f438: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x21f438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x21f43c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f440: 0x0  nop
    ctx->pc = 0x21f440u;
    // NOP
    // 0x21f444: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21f444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21f448: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x21f448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x21f44c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f450: 0x0  nop
    ctx->pc = 0x21f450u;
    // NOP
    // 0x21f454: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21f454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21f458: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x21f458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x21f45c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f460: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x21f460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f464: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f468: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21f468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21f46c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x21f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21f470: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21f470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21f474: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f478: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x21f478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f47c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21f47cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f480: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x21f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f484: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f488: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21f488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21f48c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f490: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x21f490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_21f494:
    // 0x21f494: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21f494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21f498: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21f498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21f49c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x21f49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f4a0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x21f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x21f4a4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x21F4A4u;
    SET_GPR_U32(ctx, 31, 0x21F4ACu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x21F4ACu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F4ACu) { return; }
    ctx->pc = 0x21F4ACu;
label_21f4ac:
    // 0x21f4ac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x21f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21f4b0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x21f4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21f4b4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x21f4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f4b8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x21F4B8u;
    SET_GPR_U32(ctx, 31, 0x21F4C0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x21F4C0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F4C0u) { return; }
    ctx->pc = 0x21F4C0u;
label_21f4c0:
    // 0x21f4c0: 0x24043001  addiu       $a0, $zero, 0x3001
    ctx->pc = 0x21f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x21f4c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21f4c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f4c8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x21f4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21f4cc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21f4ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f4d0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21F4D0u;
    SET_GPR_U32(ctx, 31, 0x21F4D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21F4D0u, 0x21F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4D8u;
label_21f4d8:
    // 0x21f4d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f4dc: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21f4dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21f4e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f4e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f4e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f4ec: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x21f4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x21f4f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f4f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f4f8: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x21f4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f4fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f500: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f504: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21f504u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f508: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f50c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f510: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21f510u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f514: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f518: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f51c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21f51cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f520: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f524: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f524u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f528: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21f528u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f52c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f530: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f530u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f534: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21f534u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f538: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f53c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f540: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21f540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f544: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f548: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f548u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f54c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21f54cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f550: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f554: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f554u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f558: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21f558u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f55c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f560: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21f560u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f564: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21F564u;
    SET_GPR_U32(ctx, 31, 0x21F56Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21F564u, 0x21F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F56Cu;
label_21f56c:
    // 0x21f56c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f570: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21f570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21f574: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f578: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21f578u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f57c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21f580: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21f580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21f584: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F584u;
    {
        const bool branch_taken_0x21f584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21f584) {
            ctx->pc = 0x21F598u;
            goto label_21f598;
        }
    }
    ctx->pc = 0x21F58Cu;
    // 0x21f58c: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x21f58cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f590: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21F590u;
    {
        const bool branch_taken_0x21f590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f590) {
            ctx->pc = 0x21F5BCu;
            goto label_21f5bc;
        }
    }
    ctx->pc = 0x21F598u;
label_21f598:
    // 0x21f598: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f59c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f5a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f5a4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f5a8: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x21f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x21f5ac: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x21f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x21f5b0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x21f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x21f5b4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x21f5b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f5b8: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x21f5b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_21f5bc:
    // 0x21f5bc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21f5c0: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x21f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21f5c4: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x21f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x21f5c8: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x21f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x21f5cc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x21f5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f5d0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21f5d4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21f5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21f5d8: 0x1203001e  beq         $s0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x21F5D8u;
    {
        const bool branch_taken_0x21f5d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f5d8) {
            ctx->pc = 0x21F654u;
            goto label_21f654;
        }
    }
    ctx->pc = 0x21F5E0u;
    // 0x21f5e0: 0x96030118  lhu         $v1, 0x118($s0)
    ctx->pc = 0x21f5e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x21f5e4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x21f5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x21f5e8: 0xa6030118  sh          $v1, 0x118($s0)
    ctx->pc = 0x21f5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x21f5ec: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21f5f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f5f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f5f4: 0x0  nop
    ctx->pc = 0x21f5f4u;
    // NOP
    // 0x21f5f8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21f5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21f5fc: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x21f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x21f600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f604: 0x0  nop
    ctx->pc = 0x21f604u;
    // NOP
    // 0x21f608: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21f608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21f60c: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x21f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x21f610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f614: 0x0  nop
    ctx->pc = 0x21f614u;
    // NOP
    // 0x21f618: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21f618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21f61c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x21f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x21f620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f624: 0x0  nop
    ctx->pc = 0x21f624u;
    // NOP
    // 0x21f628: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21f628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21f62c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x21f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21f630: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x21f630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x21f634: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21f634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f638: 0xc4800104  lwc1        $f0, 0x104($a0)
    ctx->pc = 0x21f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f63c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21f63cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f640: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x21f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f644: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f648: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21f648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21f64c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f650: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x21f650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_21f654:
    // 0x21f654: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x21f654u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21f658: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x21f658u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21f65c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21f65cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21f660: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21f660u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21f664: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21f664u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21f668: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21f668u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f66c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21f66cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f670: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21f670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21f674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21f678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f67c: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x21f67cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x21f680: 0x3e00008  jr          $ra
    ctx->pc = 0x21F680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F688u;
}
