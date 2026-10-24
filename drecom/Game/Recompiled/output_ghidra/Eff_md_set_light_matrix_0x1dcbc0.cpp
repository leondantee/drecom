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

// Function: Eff_md_set_light_matrix
// Address: 0x1dcbc0 - 0x1dd9c4
void Eff_md_set_light_matrix_0x1dcbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_set_light_matrix_0x1dcbc0");
#endif

    switch (ctx->pc) {
        case 0x1dcc4cu: goto label_1dcc4c;
        case 0x1dcc70u: goto label_1dcc70;
        case 0x1dcd58u: goto label_1dcd58;
        case 0x1dcd74u: goto label_1dcd74;
        case 0x1dcdc0u: goto label_1dcdc0;
        case 0x1dce9cu: goto label_1dce9c;
        case 0x1dd078u: goto label_1dd078;
        case 0x1dd094u: goto label_1dd094;
        case 0x1dd0b0u: goto label_1dd0b0;
        case 0x1dd188u: goto label_1dd188;
        case 0x1dd19cu: goto label_1dd19c;
        case 0x1dd1ccu: goto label_1dd1cc;
        case 0x1dd1e0u: goto label_1dd1e0;
        case 0x1dd210u: goto label_1dd210;
        case 0x1dd22cu: goto label_1dd22c;
        case 0x1dd284u: goto label_1dd284;
        case 0x1dd31cu: goto label_1dd31c;
        case 0x1dd3b4u: goto label_1dd3b4;
        case 0x1dd3e4u: goto label_1dd3e4;
        case 0x1dd3fcu: goto label_1dd3fc;
        case 0x1dd458u: goto label_1dd458;
        case 0x1dd53cu: goto label_1dd53c;
        case 0x1dd724u: goto label_1dd724;
        case 0x1dd748u: goto label_1dd748;
        case 0x1dd76cu: goto label_1dd76c;
        case 0x1dd828u: goto label_1dd828;
        case 0x1dd848u: goto label_1dd848;
        case 0x1dd85cu: goto label_1dd85c;
        case 0x1dd8a8u: goto label_1dd8a8;
        case 0x1dd8ccu: goto label_1dd8cc;
        case 0x1dd924u: goto label_1dd924;
        case 0x1dd944u: goto label_1dd944;
        case 0x1dd95cu: goto label_1dd95c;
        default: break;
    }

    ctx->pc = 0x1dcbc0u;

    // 0x1dcbc0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1dcbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1dcbc4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1dcbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1dcbc8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1dcbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1dcbcc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1dcbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1dcbd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1dcbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1dcbd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1dcbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1dcbd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dcbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dcbdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dcbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dcbe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dcbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dcbe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dcbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dcbe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dcbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dcbec: 0xafa40188  sw          $a0, 0x188($sp)
    ctx->pc = 0x1dcbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 4));
    // 0x1dcbf0: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dcbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dcbf4: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x1dcbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1dcbf8: 0xafa40158  sw          $a0, 0x158($sp)
    ctx->pc = 0x1dcbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 4));
    // 0x1dcbfc: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x1dcbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1dcc00: 0x24b70008  addiu       $s7, $a1, 0x8
    ctx->pc = 0x1dcc00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1dcc04: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x1dcc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1dcc08: 0x90760000  lbu         $s6, 0x0($v1)
    ctx->pc = 0x1dcc08u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dcc0c: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x1dcc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1dcc10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1dcc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1dcc14: 0x2e3b021  addu        $s6, $s7, $v1
    ctx->pc = 0x1dcc14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1dcc18: 0x72c0f628  paddub      $fp, $s6, $zero
    ctx->pc = 0x1dcc18u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1dcc1c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dcc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1dcc20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dcc20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcc24: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1dcc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dcc28: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x1dcc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    // 0x1dcc2c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x1dcc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dcc30: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1dcc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1dcc34: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1dcc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dcc38: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1dcc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1dcc3c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1dcc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1dcc40: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x1dcc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1dcc44: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1DCC44u;
    SET_GPR_U32(ctx, 31, 0x1DCC4Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1DCC4Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DCC4Cu) { return; }
    ctx->pc = 0x1DCC4Cu;
label_1dcc4c:
    // 0x1dcc4c: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1dcc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dcc50: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x1dcc50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dcc54: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1dcc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dcc58: 0x30430040  andi        $v1, $v0, 0x40
    ctx->pc = 0x1dcc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1dcc5c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCC5Cu;
    {
        const bool branch_taken_0x1dcc5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcc5c) {
            ctx->pc = 0x1DCC78u;
            goto label_1dcc78;
        }
    }
    ctx->pc = 0x1DCC64u;
    // 0x1dcc64: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1dcc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dcc68: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1DCC68u;
    SET_GPR_U32(ctx, 31, 0x1DCC70u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1DCC68u, 0x1DCC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC70u;
label_1dcc70:
    // 0x1dcc70: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1dcc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dcc74: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1dcc74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_1dcc78:
    // 0x1dcc78: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1dcc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcc7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dcc7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcc80: 0x0  nop
    ctx->pc = 0x1dcc80u;
    // NOP
    // 0x1dcc84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dcc84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcc88: 0x0  nop
    ctx->pc = 0x1dcc88u;
    // NOP
    // 0x1dcc8c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCC8Cu;
    {
        const bool branch_taken_0x1dcc8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcc8c) {
            ctx->pc = 0x1DCCA8u;
            goto label_1dcca8;
        }
    }
    ctx->pc = 0x1DCC94u;
    // 0x1dcc94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dcc94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcc98: 0x0  nop
    ctx->pc = 0x1dcc98u;
    // NOP
    // 0x1dcc9c: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1dcc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1dcca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCCA0u;
    {
        const bool branch_taken_0x1dcca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcca0) {
            ctx->pc = 0x1DCCB0u;
            goto label_1dccb0;
        }
    }
    ctx->pc = 0x1DCCA8u;
label_1dcca8:
    // 0x1dcca8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1dcca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dccac: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1dccacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1dccb0:
    // 0x1dccb0: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x1dccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dccb4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1dccb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1dccb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dccbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dccbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dccc0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1dccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dccc4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1dccc4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1dccc8: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1dccc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1dcccc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dccccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dccd0: 0xc420bd3c  lwc1        $f0, -0x42C4($at)
    ctx->pc = 0x1dccd0u;
    { uint32_t bits = FAST_READ32(0x47BD3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dccd4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1dccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1dccd8: 0xc7a20140  lwc1        $f2, 0x140($sp)
    ctx->pc = 0x1dccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dccdc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dccdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dcce0: 0xc421bd4c  lwc1        $f1, -0x42B4($at)
    ctx->pc = 0x1dcce0u;
    { uint32_t bits = FAST_READ32(0x47BD4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcce4: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1dcce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcce8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dcce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dccec: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1dccecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1dccf0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1dccf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1dccf4: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x1dccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dccf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dccf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dccfc: 0x0  nop
    ctx->pc = 0x1dccfcu;
    // NOP
    // 0x1dcd00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dcd00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcd04: 0x0  nop
    ctx->pc = 0x1dcd04u;
    // NOP
    // 0x1dcd08: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCD08u;
    {
        const bool branch_taken_0x1dcd08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcd08) {
            ctx->pc = 0x1DCD1Cu;
            goto label_1dcd1c;
        }
    }
    ctx->pc = 0x1DCD10u;
    // 0x1dcd10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dcd10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcd14: 0x0  nop
    ctx->pc = 0x1dcd14u;
    // NOP
    // 0x1dcd18: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1dcd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1dcd1c:
    // 0x1dcd1c: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x1dcd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcd20: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1dcd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1dcd24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dcd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcd28: 0x0  nop
    ctx->pc = 0x1dcd28u;
    // NOP
    // 0x1dcd2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dcd2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcd30: 0x0  nop
    ctx->pc = 0x1dcd30u;
    // NOP
    // 0x1dcd34: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCD34u;
    {
        const bool branch_taken_0x1dcd34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcd34) {
            ctx->pc = 0x1DCD4Cu;
            goto label_1dcd4c;
        }
    }
    ctx->pc = 0x1DCD3Cu;
    // 0x1dcd3c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1dcd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1dcd40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dcd40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcd44: 0x0  nop
    ctx->pc = 0x1dcd44u;
    // NOP
    // 0x1dcd48: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1dcd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1dcd4c:
    // 0x1dcd4c: 0xc7ac0140  lwc1        $f12, 0x140($sp)
    ctx->pc = 0x1dcd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dcd50: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1DCD50u;
    SET_GPR_U32(ctx, 31, 0x1DCD58u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1DCD50u, 0x1DCD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD58u;
label_1dcd58:
    // 0x1dcd58: 0xa7a2017e  sh          $v0, 0x17E($sp)
    ctx->pc = 0x1dcd58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 382), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dcd5c: 0x97a6017e  lhu         $a2, 0x17E($sp)
    ctx->pc = 0x1dcd5cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 382)));
    // 0x1dcd60: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x1dcd60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1dcd64: 0xa7a7017e  sh          $a3, 0x17E($sp)
    ctx->pc = 0x1dcd64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 382), (uint16_t)GPR_U32(ctx, 7));
    // 0x1dcd68: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dcd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dcd6c: 0x8c560058  lw          $s6, 0x58($v0)
    ctx->pc = 0x1dcd6cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dcd70: 0x0  nop
    ctx->pc = 0x1dcd70u;
    // NOP
label_1dcd74:
    // 0x1dcd74: 0x97a4017e  lhu         $a0, 0x17E($sp)
    ctx->pc = 0x1dcd74u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 382)));
    // 0x1dcd78: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1dcd78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1dcd7c: 0xaec5006c  sw          $a1, 0x6C($s6)
    ctx->pc = 0x1dcd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 5));
    // 0x1dcd80: 0x26d60090  addiu       $s6, $s6, 0x90
    ctx->pc = 0x1dcd80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x1dcd84: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1dcd84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1dcd88: 0x2fe102b  sltu        $v0, $s7, $fp
    ctx->pc = 0x1dcd88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1dcd8c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DCD8Cu;
    {
        const bool branch_taken_0x1dcd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcd8c) {
            ctx->pc = 0x1DCD74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcd74;
        }
    }
    ctx->pc = 0x1DCD94u;
    // 0x1dcd94: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1dcd94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcd98: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x1dcd98u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1dcd9c: 0x72809628  paddub      $s2, $s4, $zero
    ctx->pc = 0x1dcd9cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1dcda0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dcda0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcda4: 0x0  nop
    ctx->pc = 0x1dcda4u;
    // NOP
    // 0x1dcda8: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1dcda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1dcdac: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1dcdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1dcdb0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dcdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dcdb4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1dcdb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dcdb8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1DCDB8u;
    {
        const bool branch_taken_0x1dcdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcdb8) {
            ctx->pc = 0x1DCF58u;
            goto label_1dcf58;
        }
    }
    ctx->pc = 0x1DCDC0u;
label_1dcdc0:
    // 0x1dcdc0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1dcdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dcdc4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dcdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dcdc8: 0x9423cc88  lhu         $v1, -0x3378($at)
    ctx->pc = 0x1dcdc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x1dcdcc: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x1dcdccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dcdd0: 0x1456000b  bne         $v0, $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x1DCDD0u;
    {
        const bool branch_taken_0x1dcdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1dcdd0) {
            ctx->pc = 0x1DCE00u;
            goto label_1dce00;
        }
    }
    ctx->pc = 0x1DCDD8u;
    // 0x1dcdd8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dcdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dcddc: 0x9423cc8a  lhu         $v1, -0x3376($at)
    ctx->pc = 0x1dcddcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x1dcde0: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x1dcde0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dcde4: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1dcde4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dcde8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dcde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dcdec: 0x9423cc8e  lhu         $v1, -0x3372($at)
    ctx->pc = 0x1dcdecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1dcdf0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dcdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dcdf4: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x1DCDF4u;
    {
        const bool branch_taken_0x1dcdf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dcdf4) {
            ctx->pc = 0x1DCF78u;
            goto label_1dcf78;
        }
    }
    ctx->pc = 0x1DCDFCu;
    // 0x1dcdfc: 0x0  nop
    ctx->pc = 0x1dcdfcu;
    // NOP
label_1dce00:
    // 0x1dce00: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dce00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dce04: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dce04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dce08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dce0c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dce10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dce10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dce14: 0x2444bd00  addiu       $a0, $v0, -0x4300
    ctx->pc = 0x1dce14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dce18: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1dce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dce1c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1dce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1dce20: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1dce20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1dce24: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dce24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dce28: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x1dce28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dce2c: 0x14800046  bnez        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1DCE2Cu;
    {
        const bool branch_taken_0x1dce2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dce2c) {
            ctx->pc = 0x1DCF48u;
            goto label_1dcf48;
        }
    }
    ctx->pc = 0x1DCE34u;
    // 0x1dce34: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dce34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dce38: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dce38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dce3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dce40: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1dce40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dce44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dce44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dce48: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1dce48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dce4c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1dce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dce50: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dce54: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1dce54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dce58: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1dce58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dce5c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1dce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1dce60: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dce60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dce64: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dce64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dce68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dce6c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dce70: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dce70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dce74: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dce78: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dce78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dce7c: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x1dce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dce80: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1dce80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1dce84: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dce88: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dce8c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1dce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dce90: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1dce90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dce94: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DCE94u;
    SET_GPR_U32(ctx, 31, 0x1DCE9Cu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DCE94u, 0x1DCE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE9Cu;
label_1dce9c:
    // 0x1dce9c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1dce9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1dcea0: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x1dcea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcea4: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dcea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcea8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dcea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dceac: 0x0  nop
    ctx->pc = 0x1dceacu;
    // NOP
    // 0x1dceb0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCEB0u;
    {
        const bool branch_taken_0x1dceb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dceb0) {
            ctx->pc = 0x1DCEC8u;
            goto label_1dcec8;
        }
    }
    ctx->pc = 0x1DCEB8u;
    // 0x1dceb8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcebc: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dcebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dcec0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dcec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dcec4: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1dcec4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1dcec8:
    // 0x1dcec8: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x1dcec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcecc: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1dceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dced0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dced0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dced4: 0x0  nop
    ctx->pc = 0x1dced4u;
    // NOP
    // 0x1dced8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1DCED8u;
    {
        const bool branch_taken_0x1dced8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dced8) {
            ctx->pc = 0x1DCF08u;
            goto label_1dcf08;
        }
    }
    ctx->pc = 0x1DCEE0u;
    // 0x1dcee0: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1dcee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcee4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1dcee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1dcee8: 0x72409e28  paddub      $s3, $s2, $zero
    ctx->pc = 0x1dcee8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1dceec: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1dceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcef0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dcef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dcef4: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x1dcef4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dcef8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dcef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcefc: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1dcefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1dcf00: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x1dcf00u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dcf04: 0x0  nop
    ctx->pc = 0x1dcf04u;
    // NOP
label_1dcf08:
    // 0x1dcf08: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x1dcf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcf0c: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1dcf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcf10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dcf10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcf14: 0x0  nop
    ctx->pc = 0x1dcf14u;
    // NOP
    // 0x1dcf18: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1DCF18u;
    {
        const bool branch_taken_0x1dcf18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcf18) {
            ctx->pc = 0x1DCF48u;
            goto label_1dcf48;
        }
    }
    ctx->pc = 0x1DCF20u;
    // 0x1dcf20: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1dcf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcf24: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1dcf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1dcf28: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x1dcf28u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dcf2c: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1dcf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcf30: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1dcf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1dcf34: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x1dcf34u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1dcf38: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dcf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcf3c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1dcf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1dcf40: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x1dcf40u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dcf44: 0x0  nop
    ctx->pc = 0x1dcf44u;
    // NOP
label_1dcf48:
    // 0x1dcf48: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1dcf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dcf4c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1dcf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dcf50: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1dcf50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcf54: 0x0  nop
    ctx->pc = 0x1dcf54u;
    // NOP
label_1dcf58:
    // 0x1dcf58: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1dcf58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dcf5c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dcf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dcf60: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x1dcf60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1dcf64: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1dcf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dcf68: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1dcf68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dcf6c: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x1DCF6Cu;
    {
        const bool branch_taken_0x1dcf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf6c) {
            ctx->pc = 0x1DCDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcdc0;
        }
    }
    ctx->pc = 0x1DCF74u;
    // 0x1dcf74: 0x0  nop
    ctx->pc = 0x1dcf74u;
    // NOP
label_1dcf78:
    // 0x1dcf78: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCF78u;
    {
        const bool branch_taken_0x1dcf78 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1dcf78) {
            ctx->pc = 0x1DCF90u;
            goto label_1dcf90;
        }
    }
    ctx->pc = 0x1DCF80u;
    // 0x1dcf80: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1dcf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dcf84: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x1dcf84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x1dcf88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCF88u;
    {
        const bool branch_taken_0x1dcf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf88) {
            ctx->pc = 0x1DCF94u;
            goto label_1dcf94;
        }
    }
    ctx->pc = 0x1DCF90u;
label_1dcf90:
    // 0x1dcf90: 0xafb20164  sw          $s2, 0x164($sp)
    ctx->pc = 0x1dcf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 18));
label_1dcf94:
    // 0x1dcf94: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x1dcf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x1dcf98: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1dcf98u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcf9c: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCF9Cu;
    {
        const bool branch_taken_0x1dcf9c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1dcf9c) {
            ctx->pc = 0x1DCFB4u;
            goto label_1dcfb4;
        }
    }
    ctx->pc = 0x1DCFA4u;
    // 0x1dcfa4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1dcfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dcfa8: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x1dcfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x1dcfac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCFACu;
    {
        const bool branch_taken_0x1dcfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcfac) {
            ctx->pc = 0x1DCFB8u;
            goto label_1dcfb8;
        }
    }
    ctx->pc = 0x1DCFB4u;
label_1dcfb4:
    // 0x1dcfb4: 0xafb10168  sw          $s1, 0x168($sp)
    ctx->pc = 0x1dcfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 17));
label_1dcfb8:
    // 0x1dcfb8: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x1dcfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1dcfbc: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1dcfbcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1dcfc0: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCFC0u;
    {
        const bool branch_taken_0x1dcfc0 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x1dcfc0) {
            ctx->pc = 0x1DCFD8u;
            goto label_1dcfd8;
        }
    }
    ctx->pc = 0x1DCFC8u;
    // 0x1dcfc8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1dcfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dcfcc: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x1dcfccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x1dcfd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCFD0u;
    {
        const bool branch_taken_0x1dcfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcfd0) {
            ctx->pc = 0x1DCFDCu;
            goto label_1dcfdc;
        }
    }
    ctx->pc = 0x1DCFD8u;
label_1dcfd8:
    // 0x1dcfd8: 0xafb4016c  sw          $s4, 0x16C($sp)
    ctx->pc = 0x1dcfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 20));
label_1dcfdc:
    // 0x1dcfdc: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x1dcfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x1dcfe0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1dcfe0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcfe4: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x1dcfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1dcfe8: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x1dcfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1dcfec: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1dcfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1dcff0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dcff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dcff4: 0x2450bd00  addiu       $s0, $v0, -0x4300
    ctx->pc = 0x1dcff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dcff8: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1dcff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1dcffc: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x1dcffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1dd000: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dd000u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd004: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1dd004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd008: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd008u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dd00c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dd010: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dd010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dd014: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd018: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd01c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd024: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dd024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dd028: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1dd028u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd02c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x1dd02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd030: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1dd030u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1dd034: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1dd034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1dd038: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1dd038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1dd03c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1dd03cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd040: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd044: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1dd044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd048: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1dd048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd04c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dd04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dd050: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1dd050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd054: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x1dd054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd058: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1dd058u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1dd05c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd060: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dd060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd064: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1dd064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd068: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1dd068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dd06c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1dd06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd070: 0xc040c80  jal         func_103200
    ctx->pc = 0x1DD070u;
    SET_GPR_U32(ctx, 31, 0x1DD078u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1DD078u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD078u) { return; }
    ctx->pc = 0x1DD078u;
label_1dd078:
    // 0x1dd078: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd07c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd080: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1dd080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd084: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1dd084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dd088: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1dd088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd08c: 0xc040c80  jal         func_103200
    ctx->pc = 0x1DD08Cu;
    SET_GPR_U32(ctx, 31, 0x1DD094u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1DD094u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD094u) { return; }
    ctx->pc = 0x1DD094u;
label_1dd094:
    // 0x1dd094: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd098: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dd098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd09c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1dd09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd0a0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1dd0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dd0a4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1dd0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd0a8: 0xc040c80  jal         func_103200
    ctx->pc = 0x1DD0A8u;
    SET_GPR_U32(ctx, 31, 0x1DD0B0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1DD0B0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD0B0u) { return; }
    ctx->pc = 0x1DD0B0u;
label_1dd0b0:
    // 0x1dd0b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd0b8: 0x0  nop
    ctx->pc = 0x1dd0b8u;
    // NOP
    // 0x1dd0bc: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1dd0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1dd0c0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1dd0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd0c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1dd0c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd0c8: 0x0  nop
    ctx->pc = 0x1dd0c8u;
    // NOP
    // 0x1dd0cc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1dd0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1dd0d0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1dd0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd0d4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1dd0d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd0d8: 0x0  nop
    ctx->pc = 0x1dd0d8u;
    // NOP
    // 0x1dd0dc: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1dd0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1dd0e0: 0x123040  sll         $a2, $s2, 1
    ctx->pc = 0x1dd0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1dd0e4: 0xd21021  addu        $v0, $a2, $s2
    ctx->pc = 0x1dd0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1dd0e8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1dd0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd0ec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1dd0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1dd0f0: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x1dd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1dd0f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd0f8: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x1dd0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1dd0fc: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x1dd0fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dd100: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1dd100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd104: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1dd104u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1dd108: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dd108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dd10c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dd110: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd114: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd118: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd11c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dd11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd120: 0x24850070  addiu       $a1, $a0, 0x70
    ctx->pc = 0x1dd120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1dd124: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x1dd124u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd128: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1dd128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd12c: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x1dd12cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x1dd130: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1dd130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1dd134: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1dd134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1dd138: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd13c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd140: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd144: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dd144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd148: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x1dd148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1dd14c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dd14cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd150: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1dd150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd154: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd154u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dd158: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd15c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1dd15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd160: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1dd160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1dd164: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1dd164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1dd168: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1dd168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd16c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1dd16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1dd170: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x1dd170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1dd174: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd178: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x1dd178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1dd17c: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x1dd17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dd180: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DD180u;
    SET_GPR_U32(ctx, 31, 0x1DD188u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DD180u, 0x1DD188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD188u;
label_1dd188:
    // 0x1dd188: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1dd188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd18c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1dd18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd190: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1dd190u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd194: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1DD194u;
    SET_GPR_U32(ctx, 31, 0x1DD19Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1DD19Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD19Cu) { return; }
    ctx->pc = 0x1DD19Cu;
label_1dd19c:
    // 0x1dd19c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd1a0: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1dd1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd1a4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dd1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dd1a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dd1ac: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1dd1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd1b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd1b4: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1dd1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd1b8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1dd1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd1bc: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x1dd1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1dd1c0: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x1dd1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dd1c4: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DD1C4u;
    SET_GPR_U32(ctx, 31, 0x1DD1CCu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DD1C4u, 0x1DD1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1CCu;
label_1dd1cc:
    // 0x1dd1cc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1dd1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd1d0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1dd1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd1d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1dd1d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd1d8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1DD1D8u;
    SET_GPR_U32(ctx, 31, 0x1DD1E0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1DD1E0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD1E0u) { return; }
    ctx->pc = 0x1DD1E0u;
label_1dd1e0:
    // 0x1dd1e0: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd1e4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x1dd1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd1e8: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x1dd1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1dd1ec: 0xb41021  addu        $v0, $a1, $s4
    ctx->pc = 0x1dd1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x1dd1f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd1f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd1f8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd1fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd200: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1dd200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1dd204: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x1dd204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dd208: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DD208u;
    SET_GPR_U32(ctx, 31, 0x1DD210u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DD208u, 0x1DD210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD210u;
label_1dd210:
    // 0x1dd210: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1dd210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd214: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1dd214u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1dd218: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1dd218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd21c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x1dd21cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1dd220: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1dd220u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd224: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1DD224u;
    SET_GPR_U32(ctx, 31, 0x1DD22Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1DD22Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD22Cu) { return; }
    ctx->pc = 0x1DD22Cu;
label_1dd22c:
    // 0x1dd22c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd234: 0x0  nop
    ctx->pc = 0x1dd234u;
    // NOP
    // 0x1dd238: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1dd238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1dd23c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1dd23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd240: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1dd240u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd244: 0x0  nop
    ctx->pc = 0x1dd244u;
    // NOP
    // 0x1dd248: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dd248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1dd24c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1dd24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd250: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1dd250u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd254: 0x0  nop
    ctx->pc = 0x1dd254u;
    // NOP
    // 0x1dd258: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1dd258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1dd25c: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x1dd25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd260: 0x90c70013  lbu         $a3, 0x13($a2)
    ctx->pc = 0x1dd260u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 19)));
    // 0x1dd264: 0x30f200ff  andi        $s2, $a3, 0xFF
    ctx->pc = 0x1dd264u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1dd268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd26c: 0x0  nop
    ctx->pc = 0x1dd26cu;
    // NOP
    // 0x1dd270: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dd274: 0x24080037  addiu       $t0, $zero, 0x37
    ctx->pc = 0x1dd274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1dd278: 0x3110ffff  andi        $s0, $t0, 0xFFFF
    ctx->pc = 0x1dd278u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1dd27c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1DD27Cu;
    {
        const bool branch_taken_0x1dd27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd27c) {
            ctx->pc = 0x1DD358u;
            goto label_1dd358;
        }
    }
    ctx->pc = 0x1DD284u;
label_1dd284:
    // 0x1dd284: 0x3216ffff  andi        $s6, $s0, 0xFFFF
    ctx->pc = 0x1dd284u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd288: 0x16a840  sll         $s5, $s6, 1
    ctx->pc = 0x1dd288u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1dd28c: 0x2b6b821  addu        $s7, $s5, $s6
    ctx->pc = 0x1dd28cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x1dd290: 0x172100  sll         $a0, $s7, 4
    ctx->pc = 0x1dd290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1dd294: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1dd294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1dd298: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1dd298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1dd29c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd2a0: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x1dd2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1dd2a4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1dd2a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd2a8: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1dd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dd2ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd2acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dd2b0: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1dd2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd2b4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1dd2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1dd2b8: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1dd2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1dd2bc: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1dd2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1dd2c0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1dd2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1dd2c4: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1dd2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1dd2c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1dd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd2cc: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x1dd2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd2d0: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1dd2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1dd2d4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1dd2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd2d8: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1dd2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1dd2dc: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1dd2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dd2e0: 0x5b900  sll         $s7, $a1, 4
    ctx->pc = 0x1dd2e0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1dd2e4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1dd2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1dd2e8: 0x2476bd00  addiu       $s6, $v1, -0x4300
    ctx->pc = 0x1dd2e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1dd2ec: 0x2d71821  addu        $v1, $s6, $s7
    ctx->pc = 0x1dd2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x1dd2f0: 0x8c63007c  lw          $v1, 0x7C($v1)
    ctx->pc = 0x1dd2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1dd2f4: 0x30760001  andi        $s6, $v1, 0x1
    ctx->pc = 0x1dd2f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1dd2f8: 0x16c00013  bnez        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DD2F8u;
    {
        const bool branch_taken_0x1dd2f8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd2f8) {
            ctx->pc = 0x1DD348u;
            goto label_1dd348;
        }
    }
    ctx->pc = 0x1DD300u;
    // 0x1dd300: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1dd300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd304: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1dd304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1dd308: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x1dd308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1dd30c: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1dd30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dd310: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1dd310u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1dd314: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DD314u;
    SET_GPR_U32(ctx, 31, 0x1DD31Cu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DD314u, 0x1DD31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD31Cu;
label_1dd31c:
    // 0x1dd31c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1dd320: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x1dd320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd324: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd328: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dd328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd32c: 0x0  nop
    ctx->pc = 0x1dd32cu;
    // NOP
    // 0x1dd330: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD330u;
    {
        const bool branch_taken_0x1dd330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd330) {
            ctx->pc = 0x1DD348u;
            goto label_1dd348;
        }
    }
    ctx->pc = 0x1DD338u;
    // 0x1dd338: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd33c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dd340: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1dd340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd344: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x1dd344u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1dd348:
    // 0x1dd348: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1dd348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dd34c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1dd34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dd350: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1dd350u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1dd354: 0x0  nop
    ctx->pc = 0x1dd354u;
    // NOP
label_1dd358:
    // 0x1dd358: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x1dd358u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd35c: 0x28c2003f  slti        $v0, $a2, 0x3F
    ctx->pc = 0x1dd35cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x1dd360: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1DD360u;
    {
        const bool branch_taken_0x1dd360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd360) {
            ctx->pc = 0x1DD284u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd284;
        }
    }
    ctx->pc = 0x1DD368u;
    // 0x1dd368: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1dd368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1dd36c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd370: 0xa0430013  sb          $v1, 0x13($v0)
    ctx->pc = 0x1dd370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dd374: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dd374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dd378: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dd378u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dd37c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dd37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd380: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd384: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dd384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd388: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1dd388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1dd38c: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1dd38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1dd390: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1dd390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1dd394: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1dd394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1dd398: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1dd398u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd39c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1dd39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd3a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1dd3a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd3a4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1dd3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd3a8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1dd3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd3ac: 0xc040dac  jal         func_1036B0
    ctx->pc = 0x1DD3ACu;
    SET_GPR_U32(ctx, 31, 0x1DD3B4u);
    ctx->pc = 0x1036B0u;
    {
        ctx->pc = 0x1DD3B4u;
        ps2_stubs::sceVu0NormalLightMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD3B4u) { return; }
    ctx->pc = 0x1DD3B4u;
label_1dd3b4:
    // 0x1dd3b4: 0x8fb60154  lw          $s6, 0x154($sp)
    ctx->pc = 0x1dd3b4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1dd3b8: 0x26c40030  addiu       $a0, $s6, 0x30
    ctx->pc = 0x1dd3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x1dd3bc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1dd3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd3c0: 0x27b600c0  addiu       $s6, $sp, 0xC0
    ctx->pc = 0x1dd3c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd3c4: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x1dd3c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1dd3c8: 0x27b700d0  addiu       $s7, $sp, 0xD0
    ctx->pc = 0x1dd3c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd3cc: 0x72e03e28  paddub      $a3, $s7, $zero
    ctx->pc = 0x1dd3ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1dd3d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd3d4: 0x2454bd10  addiu       $s4, $v0, -0x42F0
    ctx->pc = 0x1dd3d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950160));
    // 0x1dd3d8: 0x72804628  paddub      $t0, $s4, $zero
    ctx->pc = 0x1dd3d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1dd3dc: 0xc040ddc  jal         func_103770
    ctx->pc = 0x1DD3DCu;
    SET_GPR_U32(ctx, 31, 0x1DD3E4u);
    ctx->pc = 0x103770u;
    {
        ctx->pc = 0x1DD3E4u;
        ps2_stubs::sceVu0LightColorMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD3E4u) { return; }
    ctx->pc = 0x1DD3E4u;
label_1dd3e4:
    // 0x1dd3e4: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1dd3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd3e8: 0x8c760058  lw          $s6, 0x58($v1)
    ctx->pc = 0x1dd3e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dd3ec: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x1dd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1dd3f0: 0x24700008  addiu       $s0, $v1, 0x8
    ctx->pc = 0x1dd3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dd3f4: 0x7200be28  paddub      $s7, $s0, $zero
    ctx->pc = 0x1dd3f4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dd3f8: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x1dd3f8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1dd3fc:
    // 0x1dd3fc: 0x92c40000  lbu         $a0, 0x0($s6)
    ctx->pc = 0x1dd3fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1dd400: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1dd400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1dd404: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1dd404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1dd408: 0x10600131  beqz        $v1, . + 4 + (0x131 << 2)
    ctx->pc = 0x1DD408u;
    {
        const bool branch_taken_0x1dd408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd408) {
            ctx->pc = 0x1DD8D0u;
            goto label_1dd8d0;
        }
    }
    ctx->pc = 0x1DD410u;
    // 0x1dd410: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dd410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dd414: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dd414u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dd418: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1dd418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd41c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1dd41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1dd420: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1dd420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dd424: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x1dd424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x1dd428: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dd428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd42c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1dd42cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd430: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1dd430u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd434: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1dd434u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd43c: 0x0  nop
    ctx->pc = 0x1dd43cu;
    // NOP
    // 0x1dd440: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1dd440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1dd444: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1dd444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1dd448: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dd44c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1dd44cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dd450: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1DD450u;
    {
        const bool branch_taken_0x1dd450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd450) {
            ctx->pc = 0x1DD5F0u;
            goto label_1dd5f0;
        }
    }
    ctx->pc = 0x1DD458u;
label_1dd458:
    // 0x1dd458: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1dd458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd45c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dd45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dd460: 0x9422cc88  lhu         $v0, -0x3378($at)
    ctx->pc = 0x1dd460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x1dd464: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1dd464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dd468: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DD468u;
    {
        const bool branch_taken_0x1dd468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd468) {
            ctx->pc = 0x1DD498u;
            goto label_1dd498;
        }
    }
    ctx->pc = 0x1DD470u;
    // 0x1dd470: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dd470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dd474: 0x9422cc8a  lhu         $v0, -0x3376($at)
    ctx->pc = 0x1dd474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x1dd478: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1dd478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dd47c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1dd47cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd480: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1dd480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd484: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dd484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dd488: 0x9423cc8e  lhu         $v1, -0x3372($at)
    ctx->pc = 0x1dd488u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1dd48c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1dd48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dd490: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1DD490u;
    {
        const bool branch_taken_0x1dd490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dd490) {
            ctx->pc = 0x1DD610u;
            goto label_1dd610;
        }
    }
    ctx->pc = 0x1DD498u;
label_1dd498:
    // 0x1dd498: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1dd498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd49c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1dd49cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1dd4a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1dd4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dd4a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd4a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd4ac: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd4b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd4b4: 0x8c44007c  lw          $a0, 0x7C($v0)
    ctx->pc = 0x1dd4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1dd4b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1dd4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1dd4bc: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x1dd4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dd4c0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1dd4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1dd4c4: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1DD4C4u;
    {
        const bool branch_taken_0x1dd4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd4c4) {
            ctx->pc = 0x1DD5E8u;
            goto label_1dd5e8;
        }
    }
    ctx->pc = 0x1DD4CCu;
    // 0x1dd4cc: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dd4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd4d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dd4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dd4d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd4d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd4dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd4e0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd4e4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dd4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd4e8: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x1dd4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1dd4ec: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1dd4ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd4f0: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1dd4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dd4f4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dd4f8: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1dd4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd4fc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1dd4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1dd500: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1dd500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dd504: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd508: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd50c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd514: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x1dd514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd518: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1dd518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1dd51c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd520: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x1dd520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x1dd524: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dd524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd52c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1dd52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dd530: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1dd530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dd534: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DD534u;
    SET_GPR_U32(ctx, 31, 0x1DD53Cu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DD534u, 0x1DD53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD53Cu;
label_1dd53c:
    // 0x1dd53c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1dd540: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x1dd540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd544: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd548: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dd548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd54c: 0x0  nop
    ctx->pc = 0x1dd54cu;
    // NOP
    // 0x1dd550: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD550u;
    {
        const bool branch_taken_0x1dd550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd550) {
            ctx->pc = 0x1DD568u;
            goto label_1dd568;
        }
    }
    ctx->pc = 0x1DD558u;
    // 0x1dd558: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd55c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dd560: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dd560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd564: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1dd564u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1dd568:
    // 0x1dd568: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x1dd568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd56c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd570: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dd570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd574: 0x0  nop
    ctx->pc = 0x1dd574u;
    // NOP
    // 0x1dd578: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1DD578u;
    {
        const bool branch_taken_0x1dd578 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd578) {
            ctx->pc = 0x1DD5A8u;
            goto label_1dd5a8;
        }
    }
    ctx->pc = 0x1DD580u;
    // 0x1dd580: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd584: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1dd588: 0x72409e28  paddub      $s3, $s2, $zero
    ctx->pc = 0x1dd588u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1dd58c: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1dd58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd590: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dd594: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x1dd594u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dd598: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd59c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1dd59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1dd5a0: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x1dd5a0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dd5a4: 0x0  nop
    ctx->pc = 0x1dd5a4u;
    // NOP
label_1dd5a8:
    // 0x1dd5a8: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x1dd5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd5ac: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1dd5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd5b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dd5b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd5b4: 0x0  nop
    ctx->pc = 0x1dd5b4u;
    // NOP
    // 0x1dd5b8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1DD5B8u;
    {
        const bool branch_taken_0x1dd5b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd5b8) {
            ctx->pc = 0x1DD5E8u;
            goto label_1dd5e8;
        }
    }
    ctx->pc = 0x1DD5C0u;
    // 0x1dd5c0: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1dd5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd5c4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1dd5c8: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x1dd5c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dd5cc: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1dd5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd5d0: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1dd5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1dd5d4: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x1dd5d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1dd5d8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd5dc: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1dd5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1dd5e0: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x1dd5e0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dd5e4: 0x0  nop
    ctx->pc = 0x1dd5e4u;
    // NOP
label_1dd5e8:
    // 0x1dd5e8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1dd5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dd5ec: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1dd5ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1dd5f0:
    // 0x1dd5f0: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1dd5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd5f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dd5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dd5f8: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x1dd5f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1dd5fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1dd5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dd600: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1dd600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dd604: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x1DD604u;
    {
        const bool branch_taken_0x1dd604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd604) {
            ctx->pc = 0x1DD458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd458;
        }
    }
    ctx->pc = 0x1DD60Cu;
    // 0x1dd60c: 0x0  nop
    ctx->pc = 0x1dd60cu;
    // NOP
label_1dd610:
    // 0x1dd610: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD610u;
    {
        const bool branch_taken_0x1dd610 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1dd610) {
            ctx->pc = 0x1DD628u;
            goto label_1dd628;
        }
    }
    ctx->pc = 0x1DD618u;
    // 0x1dd618: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1dd618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dd61c: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1dd61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x1dd620: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD620u;
    {
        const bool branch_taken_0x1dd620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd620) {
            ctx->pc = 0x1DD630u;
            goto label_1dd630;
        }
    }
    ctx->pc = 0x1DD628u;
label_1dd628:
    // 0x1dd628: 0xafb20170  sw          $s2, 0x170($sp)
    ctx->pc = 0x1dd628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 18));
    // 0x1dd62c: 0x0  nop
    ctx->pc = 0x1dd62cu;
    // NOP
label_1dd630:
    // 0x1dd630: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1dd630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1dd634: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1dd634u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd638: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD638u;
    {
        const bool branch_taken_0x1dd638 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1dd638) {
            ctx->pc = 0x1DD650u;
            goto label_1dd650;
        }
    }
    ctx->pc = 0x1DD640u;
    // 0x1dd640: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1dd640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dd644: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x1dd644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
    // 0x1dd648: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD648u;
    {
        const bool branch_taken_0x1dd648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd648) {
            ctx->pc = 0x1DD658u;
            goto label_1dd658;
        }
    }
    ctx->pc = 0x1DD650u;
label_1dd650:
    // 0x1dd650: 0xafb10174  sw          $s1, 0x174($sp)
    ctx->pc = 0x1dd650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 17));
    // 0x1dd654: 0x0  nop
    ctx->pc = 0x1dd654u;
    // NOP
label_1dd658:
    // 0x1dd658: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x1dd658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1dd65c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1dd65cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd660: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD660u;
    {
        const bool branch_taken_0x1dd660 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x1dd660) {
            ctx->pc = 0x1DD678u;
            goto label_1dd678;
        }
    }
    ctx->pc = 0x1DD668u;
    // 0x1dd668: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1dd668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dd66c: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x1dd66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x1dd670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD670u;
    {
        const bool branch_taken_0x1dd670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd670) {
            ctx->pc = 0x1DD680u;
            goto label_1dd680;
        }
    }
    ctx->pc = 0x1DD678u;
label_1dd678:
    // 0x1dd678: 0xafb40178  sw          $s4, 0x178($sp)
    ctx->pc = 0x1dd678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 20));
    // 0x1dd67c: 0x0  nop
    ctx->pc = 0x1dd67cu;
    // NOP
label_1dd680:
    // 0x1dd680: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x1dd680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1dd684: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1dd684u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd688: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1dd688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1dd68c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1dd68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1dd690: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd694: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd698: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd69c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dd69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd6a0: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x1dd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1dd6a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dd6a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd6a8: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1dd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd6ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd6acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dd6b0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dd6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dd6b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dd6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dd6b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd6bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd6c0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd6c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dd6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd6c8: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x1dd6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1dd6cc: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x1dd6ccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd6d0: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1dd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd6d4: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x1dd6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x1dd6d8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1dd6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1dd6dc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1dd6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1dd6e0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1dd6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd6e4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1dd6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1dd6e8: 0x24a6bd00  addiu       $a2, $a1, -0x4300
    ctx->pc = 0x1dd6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x1dd6ec: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x1dd6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1dd6f0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dd6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dd6f4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1dd6f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd6f8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1dd6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd6fc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1dd6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1dd700: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x1dd700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd704: 0x153180  sll         $a2, $s5, 6
    ctx->pc = 0x1dd704u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x1dd708: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x1dd708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x1dd70c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1dd70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dd710: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1dd710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd714: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1dd714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dd718: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1dd718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd71c: 0xc040c80  jal         func_103200
    ctx->pc = 0x1DD71Cu;
    SET_GPR_U32(ctx, 31, 0x1DD724u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1DD724u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD724u) { return; }
    ctx->pc = 0x1DD724u;
label_1dd724:
    // 0x1dd724: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x1dd724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd728: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x1dd728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x1dd72c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x1dd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1dd730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd734: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1dd734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd738: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1dd738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dd73c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1dd73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd740: 0xc040c80  jal         func_103200
    ctx->pc = 0x1DD740u;
    SET_GPR_U32(ctx, 31, 0x1DD748u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1DD748u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD748u) { return; }
    ctx->pc = 0x1DD748u;
label_1dd748:
    // 0x1dd748: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd74c: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x1dd74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x1dd750: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dd750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd758: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1dd758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd75c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1dd75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dd760: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1dd760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd764: 0xc040c80  jal         func_103200
    ctx->pc = 0x1DD764u;
    SET_GPR_U32(ctx, 31, 0x1DD76Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1DD76Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD76Cu) { return; }
    ctx->pc = 0x1DD76Cu;
label_1dd76c:
    // 0x1dd76c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd774: 0x0  nop
    ctx->pc = 0x1dd774u;
    // NOP
    // 0x1dd778: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1dd778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1dd77c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd784: 0x0  nop
    ctx->pc = 0x1dd784u;
    // NOP
    // 0x1dd788: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1dd788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1dd78c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dd78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd790: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dd790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd794: 0x0  nop
    ctx->pc = 0x1dd794u;
    // NOP
    // 0x1dd798: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1dd798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1dd79c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1dd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1dd7a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1dd7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1dd7a4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1dd7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd7a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd7ac: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1dd7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd7b0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1dd7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd7b4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1dd7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1dd7b8: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x1dd7b8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd7bc: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1dd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd7c0: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x1dd7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x1dd7c4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dd7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dd7c8: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1dd7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dd7cc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1dd7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1dd7d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd7d4: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd7d8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dd7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd7dc: 0x24850070  addiu       $a1, $a0, 0x70
    ctx->pc = 0x1dd7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1dd7e0: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x1dd7e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd7e4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1dd7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd7e8: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1dd7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1dd7ec: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1dd7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1dd7f0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1dd7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1dd7f4: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1dd7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd7f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd7fc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd800: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1dd800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dd804: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x1dd804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1dd808: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dd808u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd80c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1dd80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd810: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd810u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dd814: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1dd814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd818: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1dd818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd81c: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x1dd81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd820: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1DD820u;
    SET_GPR_U32(ctx, 31, 0x1DD828u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1DD828u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD828u) { return; }
    ctx->pc = 0x1DD828u;
label_1dd828:
    // 0x1dd828: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1dd828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd82c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1dd82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd830: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1dd830u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1dd834: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1dd834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd838: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1dd838u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd83c: 0xc7ac0148  lwc1        $f12, 0x148($sp)
    ctx->pc = 0x1dd83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd840: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1DD840u;
    SET_GPR_U32(ctx, 31, 0x1DD848u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1DD848u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD848u) { return; }
    ctx->pc = 0x1DD848u;
label_1dd848:
    // 0x1dd848: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1dd848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd84c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1dd84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd850: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x1dd850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd854: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1DD854u;
    SET_GPR_U32(ctx, 31, 0x1DD85Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1DD85Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD85Cu) { return; }
    ctx->pc = 0x1DD85Cu;
label_1dd85c:
    // 0x1dd85c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dd85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dd860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd864: 0x0  nop
    ctx->pc = 0x1dd864u;
    // NOP
    // 0x1dd868: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1dd868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1dd86c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd874: 0x0  nop
    ctx->pc = 0x1dd874u;
    // NOP
    // 0x1dd878: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dd878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1dd87c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd884: 0x0  nop
    ctx->pc = 0x1dd884u;
    // NOP
    // 0x1dd888: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1dd888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1dd88c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x1dd88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1dd890: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1dd890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1dd894: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1dd894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd898: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1dd898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd89c: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1dd89cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd8a0: 0xc040dac  jal         func_1036B0
    ctx->pc = 0x1DD8A0u;
    SET_GPR_U32(ctx, 31, 0x1DD8A8u);
    ctx->pc = 0x1036B0u;
    {
        ctx->pc = 0x1DD8A8u;
        ps2_stubs::sceVu0NormalLightMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD8A8u) { return; }
    ctx->pc = 0x1DD8A8u;
label_1dd8a8:
    // 0x1dd8a8: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x1dd8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1dd8ac: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1dd8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1dd8b0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1dd8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd8b4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1dd8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd8b8: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1dd8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd8bc: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x1dd8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x1dd8c0: 0x2648bd10  addiu       $t0, $s2, -0x42F0
    ctx->pc = 0x1dd8c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950160));
    // 0x1dd8c4: 0xc040ddc  jal         func_103770
    ctx->pc = 0x1DD8C4u;
    SET_GPR_U32(ctx, 31, 0x1DD8CCu);
    ctx->pc = 0x103770u;
    {
        ctx->pc = 0x1DD8CCu;
        ps2_stubs::sceVu0LightColorMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD8CCu) { return; }
    ctx->pc = 0x1DD8CCu;
label_1dd8cc:
    // 0x1dd8cc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1dd8ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1dd8d0:
    // 0x1dd8d0: 0x26d60090  addiu       $s6, $s6, 0x90
    ctx->pc = 0x1dd8d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x1dd8d4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1dd8d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1dd8d8: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1dd8d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1dd8dc: 0x2fe202b  sltu        $a0, $s7, $fp
    ctx->pc = 0x1dd8dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1dd8e0: 0x1480fec6  bnez        $a0, . + 4 + (-0x13A << 2)
    ctx->pc = 0x1DD8E0u;
    {
        const bool branch_taken_0x1dd8e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd8e0) {
            ctx->pc = 0x1DD3FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd3fc;
        }
    }
    ctx->pc = 0x1DD8E8u;
    // 0x1dd8e8: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x1dd8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1dd8ec: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1dd8ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1dd8f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dd8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dd8f4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1dd8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1dd8f8: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1DD8F8u;
    {
        const bool branch_taken_0x1dd8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd8f8) {
            ctx->pc = 0x1DD990u;
            goto label_1dd990;
        }
    }
    ctx->pc = 0x1DD900u;
    // 0x1dd900: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dd900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dd904: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x1dd904u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1dd908: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dd908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dd90c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1dd90cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1dd910: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1dd910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1dd914: 0x24650190  addiu       $a1, $v1, 0x190
    ctx->pc = 0x1dd914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x1dd918: 0x244601a0  addiu       $a2, $v0, 0x1A0
    ctx->pc = 0x1dd918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x1dd91c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1DD91Cu;
    SET_GPR_U32(ctx, 31, 0x1DD924u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1DD91Cu, 0x1DD924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD924u;
label_1dd924:
    // 0x1dd924: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd92c: 0x0  nop
    ctx->pc = 0x1dd92cu;
    // NOP
    // 0x1dd930: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1dd930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1dd934: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1dd934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1dd938: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1dd938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1dd93c: 0xc040c24  jal         func_103090
    ctx->pc = 0x1DD93Cu;
    SET_GPR_U32(ctx, 31, 0x1DD944u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1DD944u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD944u) { return; }
    ctx->pc = 0x1DD944u;
label_1dd944:
    // 0x1dd944: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1dd944u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd948: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1dd948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd94c: 0x8c760058  lw          $s6, 0x58($v1)
    ctx->pc = 0x1dd94cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dd950: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x1dd950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1dd954: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1dd954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dd958: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x1dd958u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1dd95c:
    // 0x1dd95c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1dd95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd960: 0xe6c00070  swc1        $f0, 0x70($s6)
    ctx->pc = 0x1dd960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 112), bits); }
    // 0x1dd964: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x1dd964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd968: 0xe6c00074  swc1        $f0, 0x74($s6)
    ctx->pc = 0x1dd968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 116), bits); }
    // 0x1dd96c: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1dd96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd970: 0xe6c00078  swc1        $f0, 0x78($s6)
    ctx->pc = 0x1dd970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 120), bits); }
    // 0x1dd974: 0x26d60090  addiu       $s6, $s6, 0x90
    ctx->pc = 0x1dd974u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x1dd978: 0x26e30010  addiu       $v1, $s7, 0x10
    ctx->pc = 0x1dd978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1dd97c: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x1dd97cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1dd980: 0x7e182b  sltu        $v1, $v1, $fp
    ctx->pc = 0x1dd980u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1dd984: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1DD984u;
    {
        const bool branch_taken_0x1dd984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd984) {
            ctx->pc = 0x1DD95Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd95c;
        }
    }
    ctx->pc = 0x1DD98Cu;
    // 0x1dd98c: 0x0  nop
    ctx->pc = 0x1dd98cu;
    // NOP
label_1dd990:
    // 0x1dd990: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1dd990u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dd994: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1dd994u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dd998: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1dd998u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dd99c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1dd99cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dd9a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dd9a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dd9a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dd9a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dd9a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dd9a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd9ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dd9acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd9b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd9b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd9b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dd9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9b8: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x1dd9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1dd9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9C4u;
}
