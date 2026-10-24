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

// Function: Eff_md_set_light_matrix_p
// Address: 0x1dd9d0 - 0x1de7d0
void Eff_md_set_light_matrix_p_0x1dd9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_set_light_matrix_p_0x1dd9d0");
#endif

    switch (ctx->pc) {
        case 0x1dda64u: goto label_1dda64;
        case 0x1dda8cu: goto label_1dda8c;
        case 0x1ddb78u: goto label_1ddb78;
        case 0x1ddb90u: goto label_1ddb90;
        case 0x1ddc48u: goto label_1ddc48;
        case 0x1ddde8u: goto label_1ddde8;
        case 0x1de0c8u: goto label_1de0c8;
        case 0x1de1a4u: goto label_1de1a4;
        case 0x1de1f8u: goto label_1de1f8;
        case 0x1de2dcu: goto label_1de2dc;
        case 0x1de33cu: goto label_1de33c;
        case 0x1de440u: goto label_1de440;
        case 0x1de6c4u: goto label_1de6c4;
        default: break;
    }

    ctx->pc = 0x1dd9d0u;

    // 0x1dd9d0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1dd9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1dd9d4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1dd9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1dd9d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1dd9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1dd9dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1dd9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1dd9e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1dd9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1dd9e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1dd9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1dd9e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dd9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dd9ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dd9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dd9f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dd9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dd9f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dd9f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dd9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd9fc: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x1dd9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x1dda00: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1dda00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1dda04: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x1dda04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1dda08: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x1dda08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x1dda0c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1dda0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1dda10: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1dda10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dda14: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x1dda14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x1dda18: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1dda18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1dda1c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1dda1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dda20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dda20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dda24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1dda24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1dda28: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1dda28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dda2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1dda2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dda30: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x1dda30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x1dda34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dda34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1dda38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dda38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dda3c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1dda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1dda40: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x1dda40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    // 0x1dda44: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1dda44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1dda48: 0x8c660130  lw          $a2, 0x130($v1)
    ctx->pc = 0x1dda48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1dda4c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1dda4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dda50: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1dda50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1dda54: 0x2465e550  addiu       $a1, $v1, -0x1AB0
    ctx->pc = 0x1dda54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960464));
    // 0x1dda58: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x1dda58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x1dda5c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1DDA5Cu;
    SET_GPR_U32(ctx, 31, 0x1DDA64u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1DDA64u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DDA64u) { return; }
    ctx->pc = 0x1DDA64u;
label_1dda64:
    // 0x1dda64: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1dda64u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dda68: 0x8fb70108  lw          $s7, 0x108($sp)
    ctx->pc = 0x1dda68u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1dda6c: 0x96e3000c  lhu         $v1, 0xC($s7)
    ctx->pc = 0x1dda6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x1dda70: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dda70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dda74: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1dda74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1dda78: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDA78u;
    {
        const bool branch_taken_0x1dda78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dda78) {
            ctx->pc = 0x1DDA98u;
            goto label_1dda98;
        }
    }
    ctx->pc = 0x1DDA80u;
    // 0x1dda80: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1dda80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dda84: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1DDA84u;
    SET_GPR_U32(ctx, 31, 0x1DDA8Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1DDA84u, 0x1DDA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA8Cu;
label_1dda8c:
    // 0x1dda8c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1dda8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dda90: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1dda90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1dda94: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x1dda94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_1dda98:
    // 0x1dda98: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1dda98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dda9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dda9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddaa0: 0x0  nop
    ctx->pc = 0x1ddaa0u;
    // NOP
    // 0x1ddaa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ddaa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddaa8: 0x0  nop
    ctx->pc = 0x1ddaa8u;
    // NOP
    // 0x1ddaac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDAACu;
    {
        const bool branch_taken_0x1ddaac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ddaac) {
            ctx->pc = 0x1DDAC8u;
            goto label_1ddac8;
        }
    }
    ctx->pc = 0x1DDAB4u;
    // 0x1ddab4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddab8: 0x0  nop
    ctx->pc = 0x1ddab8u;
    // NOP
    // 0x1ddabc: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1ddabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1ddac0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDAC0u;
    {
        const bool branch_taken_0x1ddac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddac0) {
            ctx->pc = 0x1DDAD0u;
            goto label_1ddad0;
        }
    }
    ctx->pc = 0x1DDAC8u;
label_1ddac8:
    // 0x1ddac8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1ddac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddacc: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1ddaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1ddad0:
    // 0x1ddad0: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1ddad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddad4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1ddad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1ddad8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ddad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ddadc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ddadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ddae0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1ddae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddae4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ddae4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ddae8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1ddae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1ddaec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ddaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ddaf0: 0xc420bd3c  lwc1        $f0, -0x42C4($at)
    ctx->pc = 0x1ddaf0u;
    { uint32_t bits = FAST_READ32(0x47BD3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddaf4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1ddaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1ddaf8: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x1ddaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ddafc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ddafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ddb00: 0xc421bd4c  lwc1        $f1, -0x42B4($at)
    ctx->pc = 0x1ddb00u;
    { uint32_t bits = FAST_READ32(0x47BD4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddb04: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1ddb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddb08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ddb08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ddb0c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ddb0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ddb10: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1ddb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1ddb14: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1ddb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddb18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddb18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddb1c: 0x0  nop
    ctx->pc = 0x1ddb1cu;
    // NOP
    // 0x1ddb20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ddb20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddb24: 0x0  nop
    ctx->pc = 0x1ddb24u;
    // NOP
    // 0x1ddb28: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDB28u;
    {
        const bool branch_taken_0x1ddb28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ddb28) {
            ctx->pc = 0x1DDB3Cu;
            goto label_1ddb3c;
        }
    }
    ctx->pc = 0x1DDB30u;
    // 0x1ddb30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddb30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddb34: 0x0  nop
    ctx->pc = 0x1ddb34u;
    // NOP
    // 0x1ddb38: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1ddb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1ddb3c:
    // 0x1ddb3c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1ddb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddb40: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1ddb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1ddb44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddb44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddb48: 0x0  nop
    ctx->pc = 0x1ddb48u;
    // NOP
    // 0x1ddb4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ddb4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddb50: 0x0  nop
    ctx->pc = 0x1ddb50u;
    // NOP
    // 0x1ddb54: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDB54u;
    {
        const bool branch_taken_0x1ddb54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ddb54) {
            ctx->pc = 0x1DDB6Cu;
            goto label_1ddb6c;
        }
    }
    ctx->pc = 0x1DDB5Cu;
    // 0x1ddb5c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1ddb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1ddb60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddb64: 0x0  nop
    ctx->pc = 0x1ddb64u;
    // NOP
    // 0x1ddb68: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1ddb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1ddb6c:
    // 0x1ddb6c: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x1ddb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ddb70: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1DDB70u;
    SET_GPR_U32(ctx, 31, 0x1DDB78u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1DDB70u, 0x1DDB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB78u;
label_1ddb78:
    // 0x1ddb78: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x1ddb78u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddb7c: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x1ddb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1ddb80: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x1ddb80u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddb84: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1ddb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1ddb88: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x1ddb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1ddb8c: 0x7080be28  paddub      $s7, $a0, $zero
    ctx->pc = 0x1ddb8cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1ddb90:
    // 0x1ddb90: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x1ddb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x1ddb94: 0xaee2006c  sw          $v0, 0x6C($s7)
    ctx->pc = 0x1ddb94u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 108), GPR_U32(ctx, 2));
    // 0x1ddb98: 0x26e50090  addiu       $a1, $s7, 0x90
    ctx->pc = 0x1ddb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
    // 0x1ddb9c: 0x70a0be28  paddub      $s7, $a1, $zero
    ctx->pc = 0x1ddb9cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ddba0: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x1ddba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ddba4: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x1ddba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1ddba8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1ddba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1ddbac: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x1ddbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1ddbb0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1ddbb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ddbb4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DDBB4u;
    {
        const bool branch_taken_0x1ddbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbb4) {
            ctx->pc = 0x1DDB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddb90;
        }
    }
    ctx->pc = 0x1DDBBCu;
    // 0x1ddbbc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1ddbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1ddbc0: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x1ddbc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ddbc4: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x1ddbc4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddbc8: 0x33c20020  andi        $v0, $fp, 0x20
    ctx->pc = 0x1ddbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)32);
    // 0x1ddbcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DDBCCu;
    {
        const bool branch_taken_0x1ddbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbcc) {
            ctx->pc = 0x1DDBF0u;
            goto label_1ddbf0;
        }
    }
    ctx->pc = 0x1DDBD4u;
    // 0x1ddbd4: 0x8fbe0108  lw          $fp, 0x108($sp)
    ctx->pc = 0x1ddbd4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1ddbd8: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x1ddbd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1ddbdc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ddbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddbe0: 0x3053f000  andi        $s3, $v0, 0xF000
    ctx->pc = 0x1ddbe0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1ddbe4: 0x131303  sra         $v0, $s3, 12
    ctx->pc = 0x1ddbe4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 12));
    // 0x1ddbe8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1ddbe8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ddbec: 0xa3b100fe  sb          $s1, 0xFE($sp)
    ctx->pc = 0x1ddbecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 254), (uint8_t)GPR_U32(ctx, 17));
label_1ddbf0:
    // 0x1ddbf0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ddbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ddbf4: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x1ddbf4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddbf8: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x1ddbf8u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x1ddbfc: 0x72809e28  paddub      $s3, $s4, $zero
    ctx->pc = 0x1ddbfcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1ddc00: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1ddc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddc04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddc04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ddc08: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1ddc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ddc0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddc0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddc10: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1ddc10u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddc14: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1ddc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ddc18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddc18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddc1c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ddc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddc20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddc20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddc24: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1ddc24u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddc28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddc28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddc2c: 0x0  nop
    ctx->pc = 0x1ddc2cu;
    // NOP
    // 0x1ddc30: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1ddc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1ddc34: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1ddc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1ddc38: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1ddc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1ddc3c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ddc3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ddc40: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1DDC40u;
    {
        const bool branch_taken_0x1ddc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc40) {
            ctx->pc = 0x1DDEC8u;
            goto label_1ddec8;
        }
    }
    ctx->pc = 0x1DDC48u;
label_1ddc48:
    // 0x1ddc48: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1ddc48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ddc4c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ddc4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ddc50: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ddc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ddc54: 0x9422cc88  lhu         $v0, -0x3378($at)
    ctx->pc = 0x1ddc54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x1ddc58: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1ddc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddc5c: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DDC5Cu;
    {
        const bool branch_taken_0x1ddc5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ddc5c) {
            ctx->pc = 0x1DDCA0u;
            goto label_1ddca0;
        }
    }
    ctx->pc = 0x1DDC64u;
    // 0x1ddc64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ddc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ddc68: 0x9422cc8a  lhu         $v0, -0x3376($at)
    ctx->pc = 0x1ddc68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x1ddc6c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ddc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddc70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddc70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddc74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ddc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddc78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddc78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddc7c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1ddc7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddc80: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1ddc80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ddc84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ddc84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ddc88: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ddc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ddc8c: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x1ddc8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1ddc90: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1ddc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddc94: 0x10830094  beq         $a0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x1DDC94u;
    {
        const bool branch_taken_0x1ddc94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ddc94) {
            ctx->pc = 0x1DDEE8u;
            goto label_1ddee8;
        }
    }
    ctx->pc = 0x1DDC9Cu;
    // 0x1ddc9c: 0x0  nop
    ctx->pc = 0x1ddc9cu;
    // NOP
label_1ddca0:
    // 0x1ddca0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1ddca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1ddca4: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x1ddca4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ddca8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ddca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddcac: 0x30440020  andi        $a0, $v0, 0x20
    ctx->pc = 0x1ddcacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1ddcb0: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1DDCB0u;
    {
        const bool branch_taken_0x1ddcb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddcb0) {
            ctx->pc = 0x1DDD40u;
            goto label_1ddd40;
        }
    }
    ctx->pc = 0x1DDCB8u;
    // 0x1ddcb8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1ddcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ddcbc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddcbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ddcc0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ddcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ddcc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddcc8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ddcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ddccc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1ddcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1ddcd0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1ddcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1ddcd4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ddcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddcd8: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x1ddcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1ddcdc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1ddcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1ddce0: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1DDCE0u;
    {
        const bool branch_taken_0x1ddce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddce0) {
            ctx->pc = 0x1DDEB8u;
            goto label_1ddeb8;
        }
    }
    ctx->pc = 0x1DDCE8u;
    // 0x1ddce8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1ddce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ddcec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddcecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ddcf0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ddcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ddcf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddcf8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1ddcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ddcfc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1ddcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1ddd00: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x1ddd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1ddd04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ddd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ddd08: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1ddd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1ddd0c: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x1ddd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x1ddd10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ddd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ddd14: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1ddd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1ddd18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ddd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ddd1c: 0xa3a300ff  sb          $v1, 0xFF($sp)
    ctx->pc = 0x1ddd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 255), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ddd20: 0x93a200ff  lbu         $v0, 0xFF($sp)
    ctx->pc = 0x1ddd20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 255)));
    // 0x1ddd24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ddd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ddd28: 0x93a200fe  lbu         $v0, 0xFE($sp)
    ctx->pc = 0x1ddd28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 254)));
    // 0x1ddd2c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1ddd2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ddd30: 0x14640061  bne         $v1, $a0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1DDD30u;
    {
        const bool branch_taken_0x1ddd30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ddd30) {
            ctx->pc = 0x1DDEB8u;
            goto label_1ddeb8;
        }
    }
    ctx->pc = 0x1DDD38u;
    // 0x1ddd38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DDD38u;
    {
        const bool branch_taken_0x1ddd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd38) {
            ctx->pc = 0x1DDD78u;
            goto label_1ddd78;
        }
    }
    ctx->pc = 0x1DDD40u;
label_1ddd40:
    // 0x1ddd40: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x1ddd40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ddd44: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ddd44u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ddd48: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1ddd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ddd4c: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x1ddd4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ddd50: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1ddd50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ddd54: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1ddd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1ddd58: 0x2452bd00  addiu       $s2, $v0, -0x4300
    ctx->pc = 0x1ddd58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1ddd5c: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1ddd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1ddd60: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1ddd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1ddd64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ddd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ddd68: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1ddd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1ddd6c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x1ddd6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ddd70: 0x14800051  bnez        $a0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1DDD70u;
    {
        const bool branch_taken_0x1ddd70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd70) {
            ctx->pc = 0x1DDEB8u;
            goto label_1ddeb8;
        }
    }
    ctx->pc = 0x1DDD78u;
label_1ddd78:
    // 0x1ddd78: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1ddd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ddd7c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddd7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ddd80: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ddd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ddd84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddd88: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ddd88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ddd8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1ddd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1ddd90: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1ddd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1ddd94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddd98: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1ddd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1ddd9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1ddd9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddda0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1ddda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ddda4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1ddda4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1ddda8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1ddda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1dddac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1dddacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1dddb0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dddb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dddb8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dddbc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dddc0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dddc4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dddc8: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x1dddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dddcc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1dddccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1dddd0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1dddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1dddd4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dddd8: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1dddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1ddddc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1ddddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ddde0: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DDDE0u;
    SET_GPR_U32(ctx, 31, 0x1DDDE8u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DDDE0u, 0x1DDDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDDE8u;
label_1ddde8:
    // 0x1ddde8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1ddde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1dddec: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1dddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dddf0: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1dddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dddf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dddf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dddf8: 0x0  nop
    ctx->pc = 0x1dddf8u;
    // NOP
    // 0x1dddfc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDDFCu;
    {
        const bool branch_taken_0x1dddfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dddfc) {
            ctx->pc = 0x1DDE18u;
            goto label_1dde18;
        }
    }
    ctx->pc = 0x1DDE04u;
    // 0x1dde04: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1dde04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde08: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1dde08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1dde0c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1dde0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1dde10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1dde10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1dde14: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1dde14u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1dde18:
    // 0x1dde18: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1dde18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dde1c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1dde1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dde20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dde24: 0x0  nop
    ctx->pc = 0x1dde24u;
    // NOP
    // 0x1dde28: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1DDE28u;
    {
        const bool branch_taken_0x1dde28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dde28) {
            ctx->pc = 0x1DDE68u;
            goto label_1dde68;
        }
    }
    ctx->pc = 0x1DDE30u;
    // 0x1dde30: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1dde30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde34: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1dde34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1dde38: 0x13943c  dsll32      $s2, $s3, 16
    ctx->pc = 0x1dde38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1dde3c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1dde3cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1dde40: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dde40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde44: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1dde44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1dde48: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x1dde48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1dde4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1dde4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1dde50: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1dde50u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1dde54: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1dde54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde58: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dde58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1dde5c: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x1dde5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1dde60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1dde60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1dde64: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1dde64u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1dde68:
    // 0x1dde68: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1dde68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dde6c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dde6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dde70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dde74: 0x0  nop
    ctx->pc = 0x1dde74u;
    // NOP
    // 0x1dde78: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1DDE78u;
    {
        const bool branch_taken_0x1dde78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dde78) {
            ctx->pc = 0x1DDEB8u;
            goto label_1ddeb8;
        }
    }
    ctx->pc = 0x1DDE80u;
    // 0x1dde80: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dde80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde84: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1dde84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1dde88: 0x11943c  dsll32      $s2, $s1, 16
    ctx->pc = 0x1dde88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1dde8c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1dde8cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1dde90: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1dde90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde94: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dde94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1dde98: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x1dde98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1dde9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1dde9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddea0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1ddea0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddea4: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1ddea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddea8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1ddea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1ddeac: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x1ddeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1ddeb0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddeb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddeb4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1ddeb4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ddeb8:
    // 0x1ddeb8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1ddeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ddebc: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x1ddebcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddec0: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x1ddec0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x1ddec4: 0x0  nop
    ctx->pc = 0x1ddec4u;
    // NOP
label_1ddec8:
    // 0x1ddec8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1ddec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ddecc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddeccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1dded0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dded0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dded4: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x1dded4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1dded8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1dded8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddedc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1ddedcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ddee0: 0x1460ff59  bnez        $v1, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x1DDEE0u;
    {
        const bool branch_taken_0x1ddee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddee0) {
            ctx->pc = 0x1DDC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddc48;
        }
    }
    ctx->pc = 0x1DDEE8u;
label_1ddee8:
    // 0x1ddee8: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x1ddee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1ddeec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddeecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddef0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDEF0u;
    {
        const bool branch_taken_0x1ddef0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ddef0) {
            ctx->pc = 0x1DDF08u;
            goto label_1ddf08;
        }
    }
    ctx->pc = 0x1DDEF8u;
    // 0x1ddef8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1ddef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ddefc: 0xa7a200f2  sh          $v0, 0xF2($sp)
    ctx->pc = 0x1ddefcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ddf00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDF00u;
    {
        const bool branch_taken_0x1ddf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddf00) {
            ctx->pc = 0x1DDF0Cu;
            goto label_1ddf0c;
        }
    }
    ctx->pc = 0x1DDF08u;
label_1ddf08:
    // 0x1ddf08: 0xa7b400f2  sh          $s4, 0xF2($sp)
    ctx->pc = 0x1ddf08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 242), (uint16_t)GPR_U32(ctx, 20));
label_1ddf0c:
    // 0x1ddf0c: 0x87a200f2  lh          $v0, 0xF2($sp)
    ctx->pc = 0x1ddf0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 242)));
    // 0x1ddf10: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ddf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddf14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddf14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddf18: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1ddf18u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddf1c: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x1ddf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1ddf20: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddf20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ddf24: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDF24u;
    {
        const bool branch_taken_0x1ddf24 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ddf24) {
            ctx->pc = 0x1DDF3Cu;
            goto label_1ddf3c;
        }
    }
    ctx->pc = 0x1DDF2Cu;
    // 0x1ddf2c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1ddf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ddf30: 0xa7a200f4  sh          $v0, 0xF4($sp)
    ctx->pc = 0x1ddf30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ddf34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDF34u;
    {
        const bool branch_taken_0x1ddf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddf34) {
            ctx->pc = 0x1DDF40u;
            goto label_1ddf40;
        }
    }
    ctx->pc = 0x1DDF3Cu;
label_1ddf3c:
    // 0x1ddf3c: 0xa7b100f4  sh          $s1, 0xF4($sp)
    ctx->pc = 0x1ddf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 244), (uint16_t)GPR_U32(ctx, 17));
label_1ddf40:
    // 0x1ddf40: 0x87a200f4  lh          $v0, 0xF4($sp)
    ctx->pc = 0x1ddf40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1ddf44: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1ddf44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddf48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddf48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ddf4c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1ddf4cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1ddf50: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1ddf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1ddf54: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x1ddf54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ddf58: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1ddf58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddf5c: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1ddf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1ddf60: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DDF60u;
    {
        const bool branch_taken_0x1ddf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddf60) {
            ctx->pc = 0x1DDFBCu;
            goto label_1ddfbc;
        }
    }
    ctx->pc = 0x1DDF68u;
    // 0x1ddf68: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x1ddf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1ddf6c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddf6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ddf70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1ddf70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1ddf74: 0x8c22f174  lw          $v0, -0xE8C($at)
    ctx->pc = 0x1ddf74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF174u));
    // 0x1ddf78: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1DDF78u;
    {
        const bool branch_taken_0x1ddf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ddf78) {
            ctx->pc = 0x1DDFF0u;
            goto label_1ddff0;
        }
    }
    ctx->pc = 0x1DDF80u;
    // 0x1ddf80: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1ddf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1ddf84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddf84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddf88: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1ddf88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1ddf8c: 0x8c23f174  lw          $v1, -0xE8C($at)
    ctx->pc = 0x1ddf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF174u));
    // 0x1ddf90: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DDF90u;
    {
        const bool branch_taken_0x1ddf90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ddf90) {
            ctx->pc = 0x1DDFF0u;
            goto label_1ddff0;
        }
    }
    ctx->pc = 0x1DDF98u;
    // 0x1ddf98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1ddf98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1ddf9c: 0x8c22f174  lw          $v0, -0xE8C($at)
    ctx->pc = 0x1ddf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF174u));
    // 0x1ddfa0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ddfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddfa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddfa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddfa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ddfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddfac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddfacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddfb0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1ddfb0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddfb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DDFB4u;
    {
        const bool branch_taken_0x1ddfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddfb4) {
            ctx->pc = 0x1DDFF0u;
            goto label_1ddff0;
        }
    }
    ctx->pc = 0x1DDFBCu;
label_1ddfbc:
    // 0x1ddfbc: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x1ddfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1ddfc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddfc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddfc4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDFC4u;
    {
        const bool branch_taken_0x1ddfc4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ddfc4) {
            ctx->pc = 0x1DDFDCu;
            goto label_1ddfdc;
        }
    }
    ctx->pc = 0x1DDFCCu;
    // 0x1ddfcc: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1ddfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ddfd0: 0xa7a300f6  sh          $v1, 0xF6($sp)
    ctx->pc = 0x1ddfd0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 246), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ddfd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDFD4u;
    {
        const bool branch_taken_0x1ddfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddfd4) {
            ctx->pc = 0x1DDFE0u;
            goto label_1ddfe0;
        }
    }
    ctx->pc = 0x1DDFDCu;
label_1ddfdc:
    // 0x1ddfdc: 0xa7b300f6  sh          $s3, 0xF6($sp)
    ctx->pc = 0x1ddfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 246), (uint16_t)GPR_U32(ctx, 19));
label_1ddfe0:
    // 0x1ddfe0: 0x87a200f6  lh          $v0, 0xF6($sp)
    ctx->pc = 0x1ddfe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 246)));
    // 0x1ddfe4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ddfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddfe8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddfe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddfec: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1ddfecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ddff0:
    // 0x1ddff0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ddff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ddff4: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x1ddff4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ddff8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1ddff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ddffc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1ddffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1de000: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1de000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1de004: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x1de004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1de008: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x1de008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x1de00c: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x1de00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1de010: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de010u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de014: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1de014u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1de018: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1de018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1de01c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1de01cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de020: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de024: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1de024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1de028: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1de028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de02c: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x1de02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1de030: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1de030u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de034: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1de034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de038: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1de038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1de03c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de03cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de040: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x1de040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1de044: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de044u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de048: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de04c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de050: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1de050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de054: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de058: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x1de058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1de05c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1de05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1de060: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x1de060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1de064: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1de064u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de068: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1de068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de06c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1de06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1de070: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x1de070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1de074: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1de074u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1de078: 0x13243c  dsll32      $a0, $s3, 16
    ctx->pc = 0x1de078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1de07c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de07cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de080: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de084: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de088: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1de088u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de08c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1de08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1de090: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1de090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1de094: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1de094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1de098: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x1de098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1de09c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1de09cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de0a0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1de0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de0a4: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x1de0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1de0a8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1de0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1de0ac: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1de0acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1de0b0: 0x8fb700d8  lw          $s7, 0xD8($sp)
    ctx->pc = 0x1de0b0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de0b4: 0x8fb600d8  lw          $s6, 0xD8($sp)
    ctx->pc = 0x1de0b4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de0b8: 0x26e40070  addiu       $a0, $s7, 0x70
    ctx->pc = 0x1de0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
    // 0x1de0bc: 0x26c50070  addiu       $a1, $s6, 0x70
    ctx->pc = 0x1de0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
    // 0x1de0c0: 0xc05da30  jal         func_1768C0
    ctx->pc = 0x1DE0C0u;
    SET_GPR_U32(ctx, 31, 0x1DE0C8u);
    ctx->pc = 0x1768C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768C0u, 0x1DE0C0u, 0x1DE0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0C8u;
label_1de0c8:
    // 0x1de0c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1de0c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de0cc: 0x14243c  dsll32      $a0, $s4, 16
    ctx->pc = 0x1de0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1de0d0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de0d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de0d4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de0d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de0dc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1de0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de0e0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de0e4: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1de0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1de0e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de0ec: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1de0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1de0f0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1de0f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de0f4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1de0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de0f8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1de0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1de0fc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de100: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x1de100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1de104: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de104u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de108: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de10c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de110: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1de110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de114: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de118: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1de118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1de11c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de120: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1de120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1de124: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1de124u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de128: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1de128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de12c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1de12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1de130: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1de130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1de134: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de134u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de138: 0x13243c  dsll32      $a0, $s3, 16
    ctx->pc = 0x1de138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1de13c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de13cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de140: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de144: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de148: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1de148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de14c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de150: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1de150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1de154: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de158: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1de158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1de15c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1de15cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de160: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1de160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de164: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1de164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1de168: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1de168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1de16c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de16cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de170: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de174: 0x2466bd10  addiu       $a2, $v1, -0x42F0
    ctx->pc = 0x1de174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950160));
    // 0x1de178: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x1de178u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47BD10u));
    // 0x1de17c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1de17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1de180: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1de180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1de184: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x1de184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1de188: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x1de188u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x1de18c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1de18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1de190: 0x8c770058  lw          $s7, 0x58($v1)
    ctx->pc = 0x1de190u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1de194: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1de194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1de198: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1de198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1de19c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x1de19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x1de1a0: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1de1a0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1de1a4:
    // 0x1de1a4: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x1de1a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1de1a8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1de1a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1de1ac: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x1de1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x1de1b0: 0x10600171  beqz        $v1, . + 4 + (0x171 << 2)
    ctx->pc = 0x1DE1B0u;
    {
        const bool branch_taken_0x1de1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de1b0) {
            ctx->pc = 0x1DE778u;
            goto label_1de778;
        }
    }
    ctx->pc = 0x1DE1B8u;
    // 0x1de1b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1de1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1de1bc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1de1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1de1c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1de1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1de1c4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1de1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1de1c8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1de1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1de1cc: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1de1ccu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de1d0: 0x8fbe0108  lw          $fp, 0x108($sp)
    ctx->pc = 0x1de1d0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1de1d4: 0x161180  sll         $v0, $s6, 6
    ctx->pc = 0x1de1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1de1d8: 0x8fde0130  lw          $fp, 0x130($fp)
    ctx->pc = 0x1de1d8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 304)));
    // 0x1de1dc: 0x3c21821  addu        $v1, $fp, $v0
    ctx->pc = 0x1de1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1de1e0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1de1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1de1e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1de1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1de1e8: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1de1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1de1ec: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x1de1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1de1f0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1DE1F0u;
    SET_GPR_U32(ctx, 31, 0x1DE1F8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1DE1F8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DE1F8u) { return; }
    ctx->pc = 0x1DE1F8u;
label_1de1f8:
    // 0x1de1f8: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1de1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de1fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de1fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de200: 0x0  nop
    ctx->pc = 0x1de200u;
    // NOP
    // 0x1de204: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de208: 0x0  nop
    ctx->pc = 0x1de208u;
    // NOP
    // 0x1de20c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE20Cu;
    {
        const bool branch_taken_0x1de20c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de20c) {
            ctx->pc = 0x1DE228u;
            goto label_1de228;
        }
    }
    ctx->pc = 0x1DE214u;
    // 0x1de214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de218: 0x0  nop
    ctx->pc = 0x1de218u;
    // NOP
    // 0x1de21c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1de21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1de220: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE220u;
    {
        const bool branch_taken_0x1de220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de220) {
            ctx->pc = 0x1DE230u;
            goto label_1de230;
        }
    }
    ctx->pc = 0x1DE228u;
label_1de228:
    // 0x1de228: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1de228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de22c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1de22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1de230:
    // 0x1de230: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1de230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de234: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1de234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1de238: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1de238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1de23c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de240: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1de240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de244: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1de244u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1de248: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1de248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1de24c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1de24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1de250: 0xc420bd3c  lwc1        $f0, -0x42C4($at)
    ctx->pc = 0x1de250u;
    { uint32_t bits = FAST_READ32(0x47BD3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de254: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1de254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1de258: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x1de258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de25c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1de25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1de260: 0xc421bd4c  lwc1        $f1, -0x42B4($at)
    ctx->pc = 0x1de260u;
    { uint32_t bits = FAST_READ32(0x47BD4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de264: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1de264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de268: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1de268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1de26c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1de26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1de270: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1de270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1de274: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1de274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de278: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de27c: 0x0  nop
    ctx->pc = 0x1de27cu;
    // NOP
    // 0x1de280: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de284: 0x0  nop
    ctx->pc = 0x1de284u;
    // NOP
    // 0x1de288: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE288u;
    {
        const bool branch_taken_0x1de288 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de288) {
            ctx->pc = 0x1DE2A0u;
            goto label_1de2a0;
        }
    }
    ctx->pc = 0x1DE290u;
    // 0x1de290: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de294: 0x0  nop
    ctx->pc = 0x1de294u;
    // NOP
    // 0x1de298: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1de298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1de29c: 0x0  nop
    ctx->pc = 0x1de29cu;
    // NOP
label_1de2a0:
    // 0x1de2a0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1de2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de2a4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1de2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1de2a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de2ac: 0x0  nop
    ctx->pc = 0x1de2acu;
    // NOP
    // 0x1de2b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1de2b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de2b4: 0x0  nop
    ctx->pc = 0x1de2b4u;
    // NOP
    // 0x1de2b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE2B8u;
    {
        const bool branch_taken_0x1de2b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de2b8) {
            ctx->pc = 0x1DE2D0u;
            goto label_1de2d0;
        }
    }
    ctx->pc = 0x1DE2C0u;
    // 0x1de2c0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1de2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1de2c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de2c8: 0x0  nop
    ctx->pc = 0x1de2c8u;
    // NOP
    // 0x1de2cc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1de2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1de2d0:
    // 0x1de2d0: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x1de2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1de2d4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1DE2D4u;
    SET_GPR_U32(ctx, 31, 0x1DE2DCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1DE2D4u, 0x1DE2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2DCu;
label_1de2dc:
    // 0x1de2dc: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x1de2dcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de2e0: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x1de2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1de2e4: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x1de2e4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de2e8: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x1de2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x1de2ec: 0xaee2006c  sw          $v0, 0x6C($s7)
    ctx->pc = 0x1de2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 108), GPR_U32(ctx, 2));
    // 0x1de2f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1de2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de2f4: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x1de2f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de2f8: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x1de2f8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x1de2fc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1de2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de300: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de300u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de304: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1de304u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de308: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1de308u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1de30c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1de30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de310: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de310u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de314: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x1de314u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de318: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x1de318u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x1de31c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de320: 0x0  nop
    ctx->pc = 0x1de320u;
    // NOP
    // 0x1de324: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1de324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1de328: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1de328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1de32c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1de32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1de330: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1de330u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de334: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1DE334u;
    {
        const bool branch_taken_0x1de334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de334) {
            ctx->pc = 0x1DE520u;
            goto label_1de520;
        }
    }
    ctx->pc = 0x1DE33Cu;
label_1de33c:
    // 0x1de33c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1de33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1de340: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de340u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de344: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1de344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1de348: 0x9422cc88  lhu         $v0, -0x3378($at)
    ctx->pc = 0x1de348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x1de34c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1de34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de350: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DE350u;
    {
        const bool branch_taken_0x1de350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de350) {
            ctx->pc = 0x1DE390u;
            goto label_1de390;
        }
    }
    ctx->pc = 0x1DE358u;
    // 0x1de358: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1de358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1de35c: 0x9422cc8a  lhu         $v0, -0x3376($at)
    ctx->pc = 0x1de35cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x1de360: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1de360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de364: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de364u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de368: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x1de368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1de36c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de36cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de370: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1de370u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de374: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1de374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1de378: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de378u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de37c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1de37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1de380: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x1de380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1de384: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1de384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de388: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1DE388u;
    {
        const bool branch_taken_0x1de388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1de388) {
            ctx->pc = 0x1DE540u;
            goto label_1de540;
        }
    }
    ctx->pc = 0x1DE390u;
label_1de390:
    // 0x1de390: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1de390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1de394: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de398: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1de398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1de39c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1de39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1de3a0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1de3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1de3a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1de3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1de3a8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1de3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1de3ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de3b0: 0x8c44007c  lw          $a0, 0x7C($v0)
    ctx->pc = 0x1de3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1de3b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1de3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1de3b8: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x1de3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1de3bc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1de3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1de3c0: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1DE3C0u;
    {
        const bool branch_taken_0x1de3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de3c0) {
            ctx->pc = 0x1DE510u;
            goto label_1de510;
        }
    }
    ctx->pc = 0x1DE3C8u;
    // 0x1de3c8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1de3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1de3cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de3ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de3d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1de3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1de3d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de3d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1de3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1de3dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1de3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1de3e0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1de3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1de3e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1de3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de3e8: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x1de3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1de3ec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1de3ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de3f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1de3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1de3f4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1de3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1de3f8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1de3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1de3fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de3fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de400: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1de400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1de404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de408: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1de408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1de40c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1de40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1de410: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1de410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1de414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de418: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x1de418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de41c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1de41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1de420: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1de420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1de424: 0x161180  sll         $v0, $s6, 6
    ctx->pc = 0x1de424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1de428: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1de428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1de42c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1de42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1de430: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1de430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1de434: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1de434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1de438: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DE438u;
    SET_GPR_U32(ctx, 31, 0x1DE440u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DE438u, 0x1DE440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE440u;
label_1de440:
    // 0x1de440: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1de440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1de444: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1de444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de448: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1de448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de44c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de450: 0x0  nop
    ctx->pc = 0x1de450u;
    // NOP
    // 0x1de454: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE454u;
    {
        const bool branch_taken_0x1de454 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de454) {
            ctx->pc = 0x1DE470u;
            goto label_1de470;
        }
    }
    ctx->pc = 0x1DE45Cu;
    // 0x1de45c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1de45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de460: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1de460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1de464: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1de464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1de468: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de468u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de46c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1de46cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1de470:
    // 0x1de470: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1de470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de474: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1de474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de478: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de47c: 0x0  nop
    ctx->pc = 0x1de47cu;
    // NOP
    // 0x1de480: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1DE480u;
    {
        const bool branch_taken_0x1de480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de480) {
            ctx->pc = 0x1DE4C0u;
            goto label_1de4c0;
        }
    }
    ctx->pc = 0x1DE488u;
    // 0x1de488: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1de488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de48c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1de48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1de490: 0x13943c  dsll32      $s2, $s3, 16
    ctx->pc = 0x1de490u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1de494: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1de494u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1de498: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1de498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de49c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1de49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1de4a0: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x1de4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1de4a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de4a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de4a8: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1de4a8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1de4ac: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1de4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de4b0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1de4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1de4b4: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x1de4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1de4b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de4b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de4bc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1de4bcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1de4c0:
    // 0x1de4c0: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1de4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de4c4: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1de4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de4c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de4c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de4cc: 0x0  nop
    ctx->pc = 0x1de4ccu;
    // NOP
    // 0x1de4d0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1DE4D0u;
    {
        const bool branch_taken_0x1de4d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de4d0) {
            ctx->pc = 0x1DE510u;
            goto label_1de510;
        }
    }
    ctx->pc = 0x1DE4D8u;
    // 0x1de4d8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1de4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de4dc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1de4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1de4e0: 0x11943c  dsll32      $s2, $s1, 16
    ctx->pc = 0x1de4e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1de4e4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1de4e4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1de4e8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1de4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de4ec: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1de4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1de4f0: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x1de4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1de4f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de4f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de4f8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1de4f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de4fc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1de4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de500: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1de500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1de504: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x1de504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1de508: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de508u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de50c: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x1de50cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1de510:
    // 0x1de510: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1de510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1de514: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1de514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de518: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de51c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1de51cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1de520:
    // 0x1de520: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1de520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1de524: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de524u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de528: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1de528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1de52c: 0x9423cc8e  lhu         $v1, -0x3372($at)
    ctx->pc = 0x1de52cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1de530: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1de530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1de534: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1de534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1de538: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x1DE538u;
    {
        const bool branch_taken_0x1de538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de538) {
            ctx->pc = 0x1DE33Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de33c;
        }
    }
    ctx->pc = 0x1DE540u;
label_1de540:
    // 0x1de540: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x1de540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1de544: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de544u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de548: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE548u;
    {
        const bool branch_taken_0x1de548 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1de548) {
            ctx->pc = 0x1DE560u;
            goto label_1de560;
        }
    }
    ctx->pc = 0x1DE550u;
    // 0x1de550: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1de550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1de554: 0xa7a200f8  sh          $v0, 0xF8($sp)
    ctx->pc = 0x1de554u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 248), (uint16_t)GPR_U32(ctx, 2));
    // 0x1de558: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE558u;
    {
        const bool branch_taken_0x1de558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de558) {
            ctx->pc = 0x1DE568u;
            goto label_1de568;
        }
    }
    ctx->pc = 0x1DE560u;
label_1de560:
    // 0x1de560: 0xa7b400f8  sh          $s4, 0xF8($sp)
    ctx->pc = 0x1de560u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 248), (uint16_t)GPR_U32(ctx, 20));
    // 0x1de564: 0x0  nop
    ctx->pc = 0x1de564u;
    // NOP
label_1de568:
    // 0x1de568: 0x87a200f8  lh          $v0, 0xF8($sp)
    ctx->pc = 0x1de568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1de56c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1de56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de570: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de570u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de574: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1de574u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de578: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1de578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1de57c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de57cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de580: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE580u;
    {
        const bool branch_taken_0x1de580 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1de580) {
            ctx->pc = 0x1DE598u;
            goto label_1de598;
        }
    }
    ctx->pc = 0x1DE588u;
    // 0x1de588: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1de588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1de58c: 0xa7a300fa  sh          $v1, 0xFA($sp)
    ctx->pc = 0x1de58cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 250), (uint16_t)GPR_U32(ctx, 3));
    // 0x1de590: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE590u;
    {
        const bool branch_taken_0x1de590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de590) {
            ctx->pc = 0x1DE5A0u;
            goto label_1de5a0;
        }
    }
    ctx->pc = 0x1DE598u;
label_1de598:
    // 0x1de598: 0xa7b100fa  sh          $s1, 0xFA($sp)
    ctx->pc = 0x1de598u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 250), (uint16_t)GPR_U32(ctx, 17));
    // 0x1de59c: 0x0  nop
    ctx->pc = 0x1de59cu;
    // NOP
label_1de5a0:
    // 0x1de5a0: 0x87a200fa  lh          $v0, 0xFA($sp)
    ctx->pc = 0x1de5a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 250)));
    // 0x1de5a4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1de5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de5a8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de5a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de5ac: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1de5acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1de5b0: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x1de5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1de5b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de5b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de5b8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE5B8u;
    {
        const bool branch_taken_0x1de5b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1de5b8) {
            ctx->pc = 0x1DE5D0u;
            goto label_1de5d0;
        }
    }
    ctx->pc = 0x1DE5C0u;
    // 0x1de5c0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1de5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1de5c4: 0xa7a200fc  sh          $v0, 0xFC($sp)
    ctx->pc = 0x1de5c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 252), (uint16_t)GPR_U32(ctx, 2));
    // 0x1de5c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE5C8u;
    {
        const bool branch_taken_0x1de5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de5c8) {
            ctx->pc = 0x1DE5D8u;
            goto label_1de5d8;
        }
    }
    ctx->pc = 0x1DE5D0u;
label_1de5d0:
    // 0x1de5d0: 0xa7b300fc  sh          $s3, 0xFC($sp)
    ctx->pc = 0x1de5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 252), (uint16_t)GPR_U32(ctx, 19));
    // 0x1de5d4: 0x0  nop
    ctx->pc = 0x1de5d4u;
    // NOP
label_1de5d8:
    // 0x1de5d8: 0x87a300fc  lh          $v1, 0xFC($sp)
    ctx->pc = 0x1de5d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1de5dc: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1de5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1de5e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de5e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de5e4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1de5e4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de5e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1de5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1de5ec: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1de5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1de5f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1de5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1de5f4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1de5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1de5f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de5fc: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x1de5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1de600: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x1de600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
    // 0x1de604: 0x142c3c  dsll32      $a1, $s4, 16
    ctx->pc = 0x1de604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1de608: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1de608u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1de60c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1de60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1de610: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x1de610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1de614: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1de614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1de618: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1de618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1de61c: 0x2452bd00  addiu       $s2, $v0, -0x4300
    ctx->pc = 0x1de61cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1de620: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1de620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1de624: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1de624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1de628: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1de628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de62c: 0x26b00080  addiu       $s0, $s5, 0x80
    ctx->pc = 0x1de62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1de630: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1de630u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1de634: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x1de634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1de638: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de638u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de63c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1de63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1de640: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de644: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1de644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1de648: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1de648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1de64c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1de64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1de650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de654: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1de654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1de658: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1de658u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de65c: 0x26a20080  addiu       $v0, $s5, 0x80
    ctx->pc = 0x1de65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1de660: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1de660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1de664: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1de664u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1de668: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x1de668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1de66c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de66cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de670: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1de670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1de674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de678: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1de678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1de67c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1de67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1de680: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1de680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1de684: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1de684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de688: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1de688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1de68c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1de68cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de690: 0x26a20080  addiu       $v0, $s5, 0x80
    ctx->pc = 0x1de690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1de694: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1de694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1de698: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1de698u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1de69c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1de69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1de6a0: 0x2442c930  addiu       $v0, $v0, -0x36D0
    ctx->pc = 0x1de6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
    // 0x1de6a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1de6a4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x47C930u));
    // 0x1de6a8: 0x26a20080  addiu       $v0, $s5, 0x80
    ctx->pc = 0x1de6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1de6ac: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1de6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1de6b0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1de6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1de6b4: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x1de6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1de6b8: 0x26a50080  addiu       $a1, $s5, 0x80
    ctx->pc = 0x1de6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1de6bc: 0xc05da30  jal         func_1768C0
    ctx->pc = 0x1DE6BCu;
    SET_GPR_U32(ctx, 31, 0x1DE6C4u);
    ctx->pc = 0x1768C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768C0u, 0x1DE6BCu, 0x1DE6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6C4u;
label_1de6c4:
    // 0x1de6c4: 0x14243c  dsll32      $a0, $s4, 16
    ctx->pc = 0x1de6c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1de6c8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de6c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de6cc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de6d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de6d4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1de6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de6d8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de6dc: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x1de6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1de6e0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1de6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1de6e4: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1de6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1de6e8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1de6e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de6ec: 0x26a30040  addiu       $v1, $s5, 0x40
    ctx->pc = 0x1de6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1de6f0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de6f4: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x1de6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1de6f8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de6f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de6fc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de700: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de704: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1de704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de708: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de70c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1de70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1de710: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1de710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de714: 0x24a30080  addiu       $v1, $a1, 0x80
    ctx->pc = 0x1de714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1de718: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1de718u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de71c: 0x26a30040  addiu       $v1, $s5, 0x40
    ctx->pc = 0x1de71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1de720: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1de720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1de724: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de724u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de728: 0x13243c  dsll32      $a0, $s3, 16
    ctx->pc = 0x1de728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1de72c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de72cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de730: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1de730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1de734: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de738: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1de738u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de73c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1de73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1de740: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1de740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1de744: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1de744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1de748: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x1de748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1de74c: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x1de74cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1de750: 0x26a30040  addiu       $v1, $s5, 0x40
    ctx->pc = 0x1de750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1de754: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1de754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1de758: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de758u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de75c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de760: 0x2465bd10  addiu       $a1, $v1, -0x42F0
    ctx->pc = 0x1de760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950160));
    // 0x1de764: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x1de764u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47BD10u));
    // 0x1de768: 0x26a30040  addiu       $v1, $s5, 0x40
    ctx->pc = 0x1de768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1de76c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1de76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1de770: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1de770u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1de774: 0x0  nop
    ctx->pc = 0x1de774u;
    // NOP
label_1de778:
    // 0x1de778: 0x26f70090  addiu       $s7, $s7, 0x90
    ctx->pc = 0x1de778u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
    // 0x1de77c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1de77cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1de780: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1de780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1de784: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x1de784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1de788: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x1de788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x1de78c: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x1de78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1de790: 0xa3202b  sltu        $a0, $a1, $v1
    ctx->pc = 0x1de790u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1de794: 0x1480fe83  bnez        $a0, . + 4 + (-0x17D << 2)
    ctx->pc = 0x1DE794u;
    {
        const bool branch_taken_0x1de794 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de794) {
            ctx->pc = 0x1DE1A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de1a4;
        }
    }
    ctx->pc = 0x1DE79Cu;
    // 0x1de79c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1de79cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1de7a0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1de7a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1de7a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1de7a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1de7a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1de7a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1de7ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1de7acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1de7b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1de7b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de7b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1de7b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de7b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1de7b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de7bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de7c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de7c4: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x1de7c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1de7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE7D0u;
}
