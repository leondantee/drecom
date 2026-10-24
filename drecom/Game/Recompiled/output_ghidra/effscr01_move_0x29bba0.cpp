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

// Function: effscr01_move
// Address: 0x29bba0 - 0x29c674
void effscr01_move_0x29bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("effscr01_move_0x29bba0");
#endif

    switch (ctx->pc) {
        case 0x29be5cu: goto label_29be5c;
        case 0x29be84u: goto label_29be84;
        case 0x29c0d8u: goto label_29c0d8;
        case 0x29c100u: goto label_29c100;
        case 0x29c358u: goto label_29c358;
        case 0x29c380u: goto label_29c380;
        case 0x29c3d4u: goto label_29c3d4;
        case 0x29c3e0u: goto label_29c3e0;
        case 0x29c4fcu: goto label_29c4fc;
        case 0x29c508u: goto label_29c508;
        case 0x29c57cu: goto label_29c57c;
        case 0x29c5f0u: goto label_29c5f0;
        default: break;
    }

    ctx->pc = 0x29bba0u;

    // 0x29bba0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x29bba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x29bba4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x29bba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x29bba8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x29bba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29bbac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29bbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x29bbb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29bbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29bbb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29bbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29bbb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29bbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29bbbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29bbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29bbc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29bbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29bbc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29bbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29bbc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29bbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29bbcc: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x29bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
    // 0x29bbd0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bbd4: 0x8c7001c8  lw          $s0, 0x1C8($v1)
    ctx->pc = 0x29bbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
    // 0x29bbd8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29bbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29bbdc: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x29bbdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x29bbe0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29bbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29bbe4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x29bbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x29bbe8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29BBE8u;
    {
        const bool branch_taken_0x29bbe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bbe8) {
            ctx->pc = 0x29BC10u;
            goto label_29bc10;
        }
    }
    ctx->pc = 0x29BBF0u;
    // 0x29bbf0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x29bbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29bbf4: 0xc4c100dc  lwc1        $f1, 0xDC($a2)
    ctx->pc = 0x29bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bbf8: 0x3c034192  lui         $v1, 0x4192
    ctx->pc = 0x29bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16786 << 16));
    // 0x29bbfc: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x29bbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x29bc00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bc00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bc04: 0x0  nop
    ctx->pc = 0x29bc04u;
    // NOP
    // 0x29bc08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29bc08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29bc0c: 0xe4c000dc  swc1        $f0, 0xDC($a2)
    ctx->pc = 0x29bc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 220), bits); }
label_29bc10:
    // 0x29bc10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29bc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29bc14: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x29bc14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x29bc18: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29bc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29bc1c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x29bc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x29bc20: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29BC20u;
    {
        const bool branch_taken_0x29bc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bc20) {
            ctx->pc = 0x29BC48u;
            goto label_29bc48;
        }
    }
    ctx->pc = 0x29BC28u;
    // 0x29bc28: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x29bc28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29bc2c: 0xc4c101a4  lwc1        $f1, 0x1A4($a2)
    ctx->pc = 0x29bc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bc30: 0x3c034104  lui         $v1, 0x4104
    ctx->pc = 0x29bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16644 << 16));
    // 0x29bc34: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x29bc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x29bc38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bc38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bc3c: 0x0  nop
    ctx->pc = 0x29bc3cu;
    // NOP
    // 0x29bc40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29bc40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29bc44: 0xe4c001a4  swc1        $f0, 0x1A4($a2)
    ctx->pc = 0x29bc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 420), bits); }
label_29bc48:
    // 0x29bc48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29bc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29bc4c: 0x94230084  lhu         $v1, 0x84($at)
    ctx->pc = 0x29bc4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x29bc50: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29bc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29bc54: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x29bc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x29bc58: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x29BC58u;
    {
        const bool branch_taken_0x29bc58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bc58) {
            ctx->pc = 0x29BEC4u;
            goto label_29bec4;
        }
    }
    ctx->pc = 0x29BC60u;
    // 0x29bc60: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29bc60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29bc64: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BC64u;
    {
        const bool branch_taken_0x29bc64 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29bc64) {
            ctx->pc = 0x29BC80u;
            goto label_29bc80;
        }
    }
    ctx->pc = 0x29BC6Cu;
    // 0x29bc6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bc6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bc70: 0x0  nop
    ctx->pc = 0x29bc70u;
    // NOP
    // 0x29bc74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bc74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bc78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BC78u;
    {
        const bool branch_taken_0x29bc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bc78) {
            ctx->pc = 0x29BC9Cu;
            goto label_29bc9c;
        }
    }
    ctx->pc = 0x29BC80u;
label_29bc80:
    // 0x29bc80: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29bc80u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29bc84: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29bc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29bc88: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29bc88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29bc8c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29bc8cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bc90: 0x0  nop
    ctx->pc = 0x29bc90u;
    // NOP
    // 0x29bc94: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bc94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bc98: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29bc98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29bc9c:
    // 0x29bc9c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bca0: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29bca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bca4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29bca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29bca8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x29bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x29bcac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bcacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bcb0: 0x0  nop
    ctx->pc = 0x29bcb0u;
    // NOP
    // 0x29bcb4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29bcb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29bcb8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bcbc: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x29bcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bcc0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x29bcc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bcc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29bcc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29bcc8: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x29bcc8u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bccc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29bcccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bcd0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x29bcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x29bcd4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29bcd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29bcd8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BCD8u;
    {
        const bool branch_taken_0x29bcd8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29bcd8) {
            ctx->pc = 0x29BCF4u;
            goto label_29bcf4;
        }
    }
    ctx->pc = 0x29BCE0u;
    // 0x29bce0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bce4: 0x0  nop
    ctx->pc = 0x29bce4u;
    // NOP
    // 0x29bce8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bcec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BCECu;
    {
        const bool branch_taken_0x29bcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bcec) {
            ctx->pc = 0x29BD10u;
            goto label_29bd10;
        }
    }
    ctx->pc = 0x29BCF4u;
label_29bcf4:
    // 0x29bcf4: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29bcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29bcf8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29bcf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29bcfc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29bcfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29bd00: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29bd00u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bd04: 0x0  nop
    ctx->pc = 0x29bd04u;
    // NOP
    // 0x29bd08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bd08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bd0c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29bd0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29bd10:
    // 0x29bd10: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bd14: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29bd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bd18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29bd18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29bd1c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x29bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x29bd20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bd20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bd24: 0x0  nop
    ctx->pc = 0x29bd24u;
    // NOP
    // 0x29bd28: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29bd28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29bd2c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bd30: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x29bd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bd34: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x29bd34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bd38: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29bd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29bd3c: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x29bd3cu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bd40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29bd40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bd44: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x29bd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x29bd48: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x29bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bd4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29bd4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bd50: 0x0  nop
    ctx->pc = 0x29bd50u;
    // NOP
    // 0x29bd54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29bd54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bd58: 0x0  nop
    ctx->pc = 0x29bd58u;
    // NOP
    // 0x29bd5c: 0x45010059  bc1t        . + 4 + (0x59 << 2)
    ctx->pc = 0x29BD5Cu;
    {
        const bool branch_taken_0x29bd5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bd5c) {
            ctx->pc = 0x29BEC4u;
            goto label_29bec4;
        }
    }
    ctx->pc = 0x29BD64u;
    // 0x29bd64: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29bd64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29bd68: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BD68u;
    {
        const bool branch_taken_0x29bd68 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29bd68) {
            ctx->pc = 0x29BD84u;
            goto label_29bd84;
        }
    }
    ctx->pc = 0x29BD70u;
    // 0x29bd70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bd70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bd74: 0x0  nop
    ctx->pc = 0x29bd74u;
    // NOP
    // 0x29bd78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bd78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bd7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BD7Cu;
    {
        const bool branch_taken_0x29bd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bd7c) {
            ctx->pc = 0x29BDA0u;
            goto label_29bda0;
        }
    }
    ctx->pc = 0x29BD84u;
label_29bd84:
    // 0x29bd84: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29bd84u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29bd88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29bd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29bd8c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29bd8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29bd90: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29bd90u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bd94: 0x0  nop
    ctx->pc = 0x29bd94u;
    // NOP
    // 0x29bd98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bd98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bd9c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29bd9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29bda0:
    // 0x29bda0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bda4: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29bda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bda8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29bda8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29bdac: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x29bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bdb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29bdb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bdb4: 0x0  nop
    ctx->pc = 0x29bdb4u;
    // NOP
    // 0x29bdb8: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x29BDB8u;
    {
        const bool branch_taken_0x29bdb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bdb8) {
            ctx->pc = 0x29BEC4u;
            goto label_29bec4;
        }
    }
    ctx->pc = 0x29BDC0u;
    // 0x29bdc0: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x29bdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bdc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29bdc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bdc8: 0x0  nop
    ctx->pc = 0x29bdc8u;
    // NOP
    // 0x29bdcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29bdccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bdd0: 0x0  nop
    ctx->pc = 0x29bdd0u;
    // NOP
    // 0x29bdd4: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x29BDD4u;
    {
        const bool branch_taken_0x29bdd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bdd4) {
            ctx->pc = 0x29BEC4u;
            goto label_29bec4;
        }
    }
    ctx->pc = 0x29BDDCu;
    // 0x29bddc: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29bddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29bde0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BDE0u;
    {
        const bool branch_taken_0x29bde0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29bde0) {
            ctx->pc = 0x29BDFCu;
            goto label_29bdfc;
        }
    }
    ctx->pc = 0x29BDE8u;
    // 0x29bde8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bde8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bdec: 0x0  nop
    ctx->pc = 0x29bdecu;
    // NOP
    // 0x29bdf0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bdf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bdf4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BDF4u;
    {
        const bool branch_taken_0x29bdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bdf4) {
            ctx->pc = 0x29BE18u;
            goto label_29be18;
        }
    }
    ctx->pc = 0x29BDFCu;
label_29bdfc:
    // 0x29bdfc: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29bdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29be00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29be00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29be04: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29be04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29be08: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29be08u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29be0c: 0x0  nop
    ctx->pc = 0x29be0cu;
    // NOP
    // 0x29be10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29be10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29be14: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29be14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29be18:
    // 0x29be18: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29be18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29be1c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29be1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29be20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29be20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29be24: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x29be24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29be28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29be28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29be2c: 0x0  nop
    ctx->pc = 0x29be2cu;
    // NOP
    // 0x29be30: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x29BE30u;
    {
        const bool branch_taken_0x29be30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29be30) {
            ctx->pc = 0x29BEC4u;
            goto label_29bec4;
        }
    }
    ctx->pc = 0x29BE38u;
    // 0x29be38: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x29be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29be3c: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x29be3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29be40: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29be40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29be44: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29be44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29be48: 0x0  nop
    ctx->pc = 0x29be48u;
    // NOP
    // 0x29be4c: 0x0  nop
    ctx->pc = 0x29be4cu;
    // NOP
    // 0x29be50: 0x0  nop
    ctx->pc = 0x29be50u;
    // NOP
    // 0x29be54: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29BE54u;
    SET_GPR_U32(ctx, 31, 0x29BE5Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29BE54u, 0x29BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE5Cu;
label_29be5c:
    // 0x29be5c: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x29be5cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29be60: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x29be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29be64: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x29be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29be68: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29be6c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29be6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29be70: 0x0  nop
    ctx->pc = 0x29be70u;
    // NOP
    // 0x29be74: 0x0  nop
    ctx->pc = 0x29be74u;
    // NOP
    // 0x29be78: 0x0  nop
    ctx->pc = 0x29be78u;
    // NOP
    // 0x29be7c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29BE7Cu;
    SET_GPR_U32(ctx, 31, 0x29BE84u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29BE7Cu, 0x29BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE84u;
label_29be84:
    // 0x29be84: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x29be84u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29be88: 0x163080  sll         $a2, $s6, 2
    ctx->pc = 0x29be88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x29be8c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29be90: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x29be90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29be94: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29be94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29be98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29be98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29be9c: 0x2e31818  mult        $v1, $s7, $v1
    ctx->pc = 0x29be9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29bea0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29bea4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x29bea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29bea8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x29bea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29beac: 0x3c034124  lui         $v1, 0x4124
    ctx->pc = 0x29beacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16676 << 16));
    // 0x29beb0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x29beb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x29beb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29beb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29beb8: 0x0  nop
    ctx->pc = 0x29beb8u;
    // NOP
    // 0x29bebc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29bebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29bec0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x29bec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_29bec4:
    // 0x29bec4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29bec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29bec8: 0x94230080  lhu         $v1, 0x80($at)
    ctx->pc = 0x29bec8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0080u));
    // 0x29becc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29beccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29bed0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x29bed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x29bed4: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x29BED4u;
    {
        const bool branch_taken_0x29bed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bed4) {
            ctx->pc = 0x29C144u;
            goto label_29c144;
        }
    }
    ctx->pc = 0x29BEDCu;
    // 0x29bedc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29bedcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29bee0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BEE0u;
    {
        const bool branch_taken_0x29bee0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29bee0) {
            ctx->pc = 0x29BEFCu;
            goto label_29befc;
        }
    }
    ctx->pc = 0x29BEE8u;
    // 0x29bee8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29beec: 0x0  nop
    ctx->pc = 0x29beecu;
    // NOP
    // 0x29bef0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bef4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BEF4u;
    {
        const bool branch_taken_0x29bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bef4) {
            ctx->pc = 0x29BF18u;
            goto label_29bf18;
        }
    }
    ctx->pc = 0x29BEFCu;
label_29befc:
    // 0x29befc: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29befcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29bf00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29bf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29bf04: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29bf04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29bf08: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29bf08u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bf0c: 0x0  nop
    ctx->pc = 0x29bf0cu;
    // NOP
    // 0x29bf10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bf10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bf14: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29bf14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29bf18:
    // 0x29bf18: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bf1c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29bf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bf20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29bf20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29bf24: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x29bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x29bf28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bf28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bf2c: 0x0  nop
    ctx->pc = 0x29bf2cu;
    // NOP
    // 0x29bf30: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29bf30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29bf34: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bf38: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x29bf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bf3c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x29bf3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bf40: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29bf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29bf44: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x29bf44u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bf48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29bf48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bf4c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x29bf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x29bf50: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29bf50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29bf54: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BF54u;
    {
        const bool branch_taken_0x29bf54 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29bf54) {
            ctx->pc = 0x29BF70u;
            goto label_29bf70;
        }
    }
    ctx->pc = 0x29BF5Cu;
    // 0x29bf5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bf5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bf60: 0x0  nop
    ctx->pc = 0x29bf60u;
    // NOP
    // 0x29bf64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bf64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bf68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BF68u;
    {
        const bool branch_taken_0x29bf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bf68) {
            ctx->pc = 0x29BF8Cu;
            goto label_29bf8c;
        }
    }
    ctx->pc = 0x29BF70u;
label_29bf70:
    // 0x29bf70: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29bf70u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29bf74: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29bf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29bf78: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29bf78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29bf7c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29bf7cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bf80: 0x0  nop
    ctx->pc = 0x29bf80u;
    // NOP
    // 0x29bf84: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bf84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bf88: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29bf88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29bf8c:
    // 0x29bf8c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bf90: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29bf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bf94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29bf94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29bf98: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x29bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x29bf9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bf9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bfa0: 0x0  nop
    ctx->pc = 0x29bfa0u;
    // NOP
    // 0x29bfa4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29bfa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29bfa8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bfac: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x29bfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bfb0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x29bfb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bfb4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29bfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29bfb8: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x29bfb8u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bfbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29bfbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bfc0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x29bfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x29bfc4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x29bfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bfc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29bfc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bfcc: 0x0  nop
    ctx->pc = 0x29bfccu;
    // NOP
    // 0x29bfd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29bfd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bfd4: 0x0  nop
    ctx->pc = 0x29bfd4u;
    // NOP
    // 0x29bfd8: 0x4501005a  bc1t        . + 4 + (0x5A << 2)
    ctx->pc = 0x29BFD8u;
    {
        const bool branch_taken_0x29bfd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bfd8) {
            ctx->pc = 0x29C144u;
            goto label_29c144;
        }
    }
    ctx->pc = 0x29BFE0u;
    // 0x29bfe0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29bfe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29bfe4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BFE4u;
    {
        const bool branch_taken_0x29bfe4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29bfe4) {
            ctx->pc = 0x29C000u;
            goto label_29c000;
        }
    }
    ctx->pc = 0x29BFECu;
    // 0x29bfec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bfecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bff0: 0x0  nop
    ctx->pc = 0x29bff0u;
    // NOP
    // 0x29bff4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bff8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BFF8u;
    {
        const bool branch_taken_0x29bff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bff8) {
            ctx->pc = 0x29C01Cu;
            goto label_29c01c;
        }
    }
    ctx->pc = 0x29C000u;
label_29c000:
    // 0x29c000: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29c000u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29c004: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29c008: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29c008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29c00c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29c00cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c010: 0x0  nop
    ctx->pc = 0x29c010u;
    // NOP
    // 0x29c014: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c018: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29c018u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29c01c:
    // 0x29c01c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c020: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29c020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c024: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c024u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c028: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x29c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c02c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29c02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c030: 0x0  nop
    ctx->pc = 0x29c030u;
    // NOP
    // 0x29c034: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x29C034u;
    {
        const bool branch_taken_0x29c034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c034) {
            ctx->pc = 0x29C144u;
            goto label_29c144;
        }
    }
    ctx->pc = 0x29C03Cu;
    // 0x29c03c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x29c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29c040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c044: 0x0  nop
    ctx->pc = 0x29c044u;
    // NOP
    // 0x29c048: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29c048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c04c: 0x0  nop
    ctx->pc = 0x29c04cu;
    // NOP
    // 0x29c050: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x29C050u;
    {
        const bool branch_taken_0x29c050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c050) {
            ctx->pc = 0x29C144u;
            goto label_29c144;
        }
    }
    ctx->pc = 0x29C058u;
    // 0x29c058: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29c058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c05c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C05Cu;
    {
        const bool branch_taken_0x29c05c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29c05c) {
            ctx->pc = 0x29C078u;
            goto label_29c078;
        }
    }
    ctx->pc = 0x29C064u;
    // 0x29c064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c068: 0x0  nop
    ctx->pc = 0x29c068u;
    // NOP
    // 0x29c06c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c06cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c070: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29C070u;
    {
        const bool branch_taken_0x29c070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c070) {
            ctx->pc = 0x29C094u;
            goto label_29c094;
        }
    }
    ctx->pc = 0x29C078u;
label_29c078:
    // 0x29c078: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29c078u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29c07c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29c080: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29c080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29c084: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29c084u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c088: 0x0  nop
    ctx->pc = 0x29c088u;
    // NOP
    // 0x29c08c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c08cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c090: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29c090u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29c094:
    // 0x29c094: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29c094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c098: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29c098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c09c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c09cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c0a0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x29c0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c0a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29c0a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c0a8: 0x0  nop
    ctx->pc = 0x29c0a8u;
    // NOP
    // 0x29c0ac: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x29C0ACu;
    {
        const bool branch_taken_0x29c0ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c0ac) {
            ctx->pc = 0x29C144u;
            goto label_29c144;
        }
    }
    ctx->pc = 0x29C0B4u;
    // 0x29c0b4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x29c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c0b8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x29c0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c0bc: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29c0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c0c0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29c0c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29c0c4: 0x0  nop
    ctx->pc = 0x29c0c4u;
    // NOP
    // 0x29c0c8: 0x0  nop
    ctx->pc = 0x29c0c8u;
    // NOP
    // 0x29c0cc: 0x0  nop
    ctx->pc = 0x29c0ccu;
    // NOP
    // 0x29c0d0: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29C0D0u;
    SET_GPR_U32(ctx, 31, 0x29C0D8u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29C0D0u, 0x29C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C0D8u;
label_29c0d8:
    // 0x29c0d8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x29c0d8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29c0dc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x29c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c0e0: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x29c0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c0e4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29c0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c0e8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29c0e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29c0ec: 0x0  nop
    ctx->pc = 0x29c0ecu;
    // NOP
    // 0x29c0f0: 0x0  nop
    ctx->pc = 0x29c0f0u;
    // NOP
    // 0x29c0f4: 0x0  nop
    ctx->pc = 0x29c0f4u;
    // NOP
    // 0x29c0f8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29C0F8u;
    SET_GPR_U32(ctx, 31, 0x29C100u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29C0F8u, 0x29C100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C100u;
label_29c100:
    // 0x29c100: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x29c100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x29c104: 0x1e3080  sll         $a2, $fp, 2
    ctx->pc = 0x29c104u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x29c108: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29c108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29c10c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x29c10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29c110: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c114: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x29c114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c118: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x29c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x29c11c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x29c11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29c120: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29c120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c124: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x29c124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x29c128: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x29c128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c12c: 0x3c034144  lui         $v1, 0x4144
    ctx->pc = 0x29c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16708 << 16));
    // 0x29c130: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x29c130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x29c134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c138: 0x0  nop
    ctx->pc = 0x29c138u;
    // NOP
    // 0x29c13c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29c13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29c140: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x29c140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_29c144:
    // 0x29c144: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29c144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29c148: 0x94230080  lhu         $v1, 0x80($at)
    ctx->pc = 0x29c148u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0080u));
    // 0x29c14c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29c14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29c150: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x29c150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x29c154: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x29C154u;
    {
        const bool branch_taken_0x29c154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c154) {
            ctx->pc = 0x29C3C8u;
            goto label_29c3c8;
        }
    }
    ctx->pc = 0x29C15Cu;
    // 0x29c15c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c160: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C160u;
    {
        const bool branch_taken_0x29c160 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29c160) {
            ctx->pc = 0x29C17Cu;
            goto label_29c17c;
        }
    }
    ctx->pc = 0x29C168u;
    // 0x29c168: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c16c: 0x0  nop
    ctx->pc = 0x29c16cu;
    // NOP
    // 0x29c170: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c174: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29C174u;
    {
        const bool branch_taken_0x29c174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c174) {
            ctx->pc = 0x29C198u;
            goto label_29c198;
        }
    }
    ctx->pc = 0x29C17Cu;
label_29c17c:
    // 0x29c17c: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29c17cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29c180: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29c184: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29c184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29c188: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29c188u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c18c: 0x0  nop
    ctx->pc = 0x29c18cu;
    // NOP
    // 0x29c190: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c194: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29c194u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29c198:
    // 0x29c198: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29c198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c19c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29c19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c1a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c1a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c1a4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x29c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x29c1a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c1a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c1ac: 0x0  nop
    ctx->pc = 0x29c1acu;
    // NOP
    // 0x29c1b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29c1b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29c1b4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c1b8: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x29c1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c1bc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x29c1bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c1c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29c1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29c1c4: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x29c1c4u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c1c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29c1c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c1cc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x29c1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x29c1d0: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29c1d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c1d4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C1D4u;
    {
        const bool branch_taken_0x29c1d4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29c1d4) {
            ctx->pc = 0x29C1F0u;
            goto label_29c1f0;
        }
    }
    ctx->pc = 0x29C1DCu;
    // 0x29c1dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c1dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c1e0: 0x0  nop
    ctx->pc = 0x29c1e0u;
    // NOP
    // 0x29c1e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c1e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c1e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29C1E8u;
    {
        const bool branch_taken_0x29c1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c1e8) {
            ctx->pc = 0x29C20Cu;
            goto label_29c20c;
        }
    }
    ctx->pc = 0x29C1F0u;
label_29c1f0:
    // 0x29c1f0: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29c1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29c1f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29c1f8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29c1f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29c1fc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29c1fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c200: 0x0  nop
    ctx->pc = 0x29c200u;
    // NOP
    // 0x29c204: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c208: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29c208u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29c20c:
    // 0x29c20c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29c20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c210: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c214: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c218: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x29c218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x29c21c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c21cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c220: 0x0  nop
    ctx->pc = 0x29c220u;
    // NOP
    // 0x29c224: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29c224u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29c228: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29c228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c22c: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x29c22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c230: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x29c230u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c234: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29c234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29c238: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x29c238u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c23c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29c23cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c240: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x29c240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x29c244: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x29c244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29c248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c24c: 0x0  nop
    ctx->pc = 0x29c24cu;
    // NOP
    // 0x29c250: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29c250u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c254: 0x0  nop
    ctx->pc = 0x29c254u;
    // NOP
    // 0x29c258: 0x4501005b  bc1t        . + 4 + (0x5B << 2)
    ctx->pc = 0x29C258u;
    {
        const bool branch_taken_0x29c258 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c258) {
            ctx->pc = 0x29C3C8u;
            goto label_29c3c8;
        }
    }
    ctx->pc = 0x29C260u;
    // 0x29c260: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c264: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C264u;
    {
        const bool branch_taken_0x29c264 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29c264) {
            ctx->pc = 0x29C280u;
            goto label_29c280;
        }
    }
    ctx->pc = 0x29C26Cu;
    // 0x29c26c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c270: 0x0  nop
    ctx->pc = 0x29c270u;
    // NOP
    // 0x29c274: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c278: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29C278u;
    {
        const bool branch_taken_0x29c278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c278) {
            ctx->pc = 0x29C29Cu;
            goto label_29c29c;
        }
    }
    ctx->pc = 0x29C280u;
label_29c280:
    // 0x29c280: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29c280u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29c284: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29c288: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29c288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29c28c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29c28cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c290: 0x0  nop
    ctx->pc = 0x29c290u;
    // NOP
    // 0x29c294: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c298: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29c298u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29c29c:
    // 0x29c29c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c2a0: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29c2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c2a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c2a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c2a8: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x29c2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c2ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29c2acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c2b0: 0x0  nop
    ctx->pc = 0x29c2b0u;
    // NOP
    // 0x29c2b4: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x29C2B4u;
    {
        const bool branch_taken_0x29c2b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c2b4) {
            ctx->pc = 0x29C3C8u;
            goto label_29c3c8;
        }
    }
    ctx->pc = 0x29C2BCu;
    // 0x29c2bc: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x29c2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c2c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29c2c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c2c4: 0x0  nop
    ctx->pc = 0x29c2c4u;
    // NOP
    // 0x29c2c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29c2c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c2cc: 0x0  nop
    ctx->pc = 0x29c2ccu;
    // NOP
    // 0x29c2d0: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x29C2D0u;
    {
        const bool branch_taken_0x29c2d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c2d0) {
            ctx->pc = 0x29C3C8u;
            goto label_29c3c8;
        }
    }
    ctx->pc = 0x29C2D8u;
    // 0x29c2d8: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29c2d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c2dc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C2DCu;
    {
        const bool branch_taken_0x29c2dc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29c2dc) {
            ctx->pc = 0x29C2F8u;
            goto label_29c2f8;
        }
    }
    ctx->pc = 0x29C2E4u;
    // 0x29c2e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c2e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c2e8: 0x0  nop
    ctx->pc = 0x29c2e8u;
    // NOP
    // 0x29c2ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c2ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c2f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29C2F0u;
    {
        const bool branch_taken_0x29c2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c2f0) {
            ctx->pc = 0x29C314u;
            goto label_29c314;
        }
    }
    ctx->pc = 0x29C2F8u;
label_29c2f8:
    // 0x29c2f8: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29c2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29c2fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29c300: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29c300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29c304: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29c304u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c308: 0x0  nop
    ctx->pc = 0x29c308u;
    // NOP
    // 0x29c30c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c30cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c310: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29c310u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29c314:
    // 0x29c314: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29c314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c318: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29c318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c31c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c31cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c320: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x29c320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c324: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29c324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c328: 0x0  nop
    ctx->pc = 0x29c328u;
    // NOP
    // 0x29c32c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x29C32Cu;
    {
        const bool branch_taken_0x29c32c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c32c) {
            ctx->pc = 0x29C3C8u;
            goto label_29c3c8;
        }
    }
    ctx->pc = 0x29C334u;
    // 0x29c334: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x29c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c338: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x29c338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c33c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29c33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c340: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29c340u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29c344: 0x0  nop
    ctx->pc = 0x29c344u;
    // NOP
    // 0x29c348: 0x0  nop
    ctx->pc = 0x29c348u;
    // NOP
    // 0x29c34c: 0x0  nop
    ctx->pc = 0x29c34cu;
    // NOP
    // 0x29c350: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29C350u;
    SET_GPR_U32(ctx, 31, 0x29C358u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29C350u, 0x29C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C358u;
label_29c358:
    // 0x29c358: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x29c358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x29c35c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x29c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c360: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x29c360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c364: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29c364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c368: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29c368u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29c36c: 0x0  nop
    ctx->pc = 0x29c36cu;
    // NOP
    // 0x29c370: 0x0  nop
    ctx->pc = 0x29c370u;
    // NOP
    // 0x29c374: 0x0  nop
    ctx->pc = 0x29c374u;
    // NOP
    // 0x29c378: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29C378u;
    SET_GPR_U32(ctx, 31, 0x29C380u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29C378u, 0x29C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C380u;
label_29c380:
    // 0x29c380: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x29c380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x29c384: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x29c384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x29c388: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x29c388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c38c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29c390: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x29c390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29c394: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c398: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x29c398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c39c: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x29c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x29c3a0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x29c3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29c3a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c3a8: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x29c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29c3ac: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x29c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c3b0: 0x3c034271  lui         $v1, 0x4271
    ctx->pc = 0x29c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17009 << 16));
    // 0x29c3b4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x29c3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x29c3b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c3b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c3bc: 0x0  nop
    ctx->pc = 0x29c3bcu;
    // NOP
    // 0x29c3c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29c3c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29c3c4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x29c3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_29c3c8:
    // 0x29c3c8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x29c3c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c3cc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x29C3CCu;
    {
        const bool branch_taken_0x29c3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c3cc) {
            ctx->pc = 0x29C4D8u;
            goto label_29c4d8;
        }
    }
    ctx->pc = 0x29C3D4u;
label_29c3d4:
    // 0x29c3d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29c3d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c3d8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x29C3D8u;
    {
        const bool branch_taken_0x29c3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c3d8) {
            ctx->pc = 0x29C4B8u;
            goto label_29c4b8;
        }
    }
    ctx->pc = 0x29C3E0u;
label_29c3e0:
    // 0x29c3e0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c3e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c3e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c3e8: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x29c3e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29c3ec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x29c3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c3f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29c3f4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x29c3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29c3f8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x29c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29c3fc: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x29c3fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29c400: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c404: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c408: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x29c408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29c40c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x29c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c410: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29c410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29c414: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x29c414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29c418: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x29c418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29c41c: 0x83a021  addu        $s4, $a0, $v1
    ctx->pc = 0x29c41cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29c420: 0xc621fffc  lwc1        $f1, -0x4($s1)
    ctx->pc = 0x29c420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c424: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x29c424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c428: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29c428u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29c42c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29c42cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c430: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c434: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29c434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c438: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x29c438u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29c43c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c440: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29c440u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29c444: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29c444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c448: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c44c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c450: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x29c450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29c454: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29c454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c458: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x29c458u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29c45c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x29c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x29c460: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29c460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c464: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29c464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c468: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29c468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c46c: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x29c46cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x29c470: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x29c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c474: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29c474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29c478: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x29c478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x29c47c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x29c47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29c480: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x29c480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x29c484: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x29c484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x29c488: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29c488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c48c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x29c48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c490: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29c490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c494: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x29c494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29c498: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x29c498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x29c49c: 0x3c033f6b  lui         $v1, 0x3F6B
    ctx->pc = 0x29c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
    // 0x29c4a0: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x29c4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x29c4a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29c4a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c4a8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x29c4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c4ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29c4acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29c4b0: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x29c4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x29c4b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29c4b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29c4b8:
    // 0x29c4b8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c4bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c4c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29c4c4: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x29c4c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29c4c8: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x29C4C8u;
    {
        const bool branch_taken_0x29c4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c4c8) {
            ctx->pc = 0x29C3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c3e0;
        }
    }
    ctx->pc = 0x29C4D0u;
    // 0x29c4d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29c4d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29c4d4: 0x0  nop
    ctx->pc = 0x29c4d4u;
    // NOP
label_29c4d8:
    // 0x29c4d8: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29c4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c4dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c4e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29c4e4: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x29c4e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29c4e8: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x29C4E8u;
    {
        const bool branch_taken_0x29c4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c4e8) {
            ctx->pc = 0x29C3D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c3d4;
        }
    }
    ctx->pc = 0x29C4F0u;
    // 0x29c4f0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x29c4f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c4f4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x29C4F4u;
    {
        const bool branch_taken_0x29c4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c4f4) {
            ctx->pc = 0x29C628u;
            goto label_29c628;
        }
    }
    ctx->pc = 0x29C4FCu;
label_29c4fc:
    // 0x29c4fc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29c4fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c500: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x29C500u;
    {
        const bool branch_taken_0x29c500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c500) {
            ctx->pc = 0x29C608u;
            goto label_29c608;
        }
    }
    ctx->pc = 0x29C508u;
label_29c508:
    // 0x29c508: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29c508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c50c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c510: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x29c510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29c514: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29c514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29c518: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29c51c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29c520: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29c520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29c524: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x29c524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29c528: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29c528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c52c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c530: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x29c530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29c534: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29c534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29c538: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29c53c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29c540: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29c540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29c544: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x29c544u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29c548: 0xc621fffc  lwc1        $f1, -0x4($s1)
    ctx->pc = 0x29c548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c54c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29c54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c550: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29c550u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29c554: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x29c554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x29c558: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x29c558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c55c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x29c55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c560: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c564: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29c564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29c568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29c568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c56c: 0x0  nop
    ctx->pc = 0x29c56cu;
    // NOP
    // 0x29c570: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x29c570u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29c574: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x29C574u;
    SET_GPR_U32(ctx, 31, 0x29C57Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x29C574u, 0x29C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C57Cu;
label_29c57c:
    // 0x29c57c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x29c57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c580: 0x0  nop
    ctx->pc = 0x29c580u;
    // NOP
    // 0x29c584: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x29c584u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29c588: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x29c588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x29c58c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29c58cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c590: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c594: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x29c594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29c598: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29c598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29c59c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29c5a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29c5a4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29c5a8: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x29c5a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29c5ac: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x29c5acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c5b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c5b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29c5b8: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x29c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29c5bc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x29c5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c5c0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29c5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c5c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29c5c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29c5c8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x29c5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x29c5cc: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x29c5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c5d0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x29c5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c5d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c5d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29c5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29c5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c5e0: 0x0  nop
    ctx->pc = 0x29c5e0u;
    // NOP
    // 0x29c5e4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x29c5e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29c5e8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x29C5E8u;
    SET_GPR_U32(ctx, 31, 0x29C5F0u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x29C5E8u, 0x29C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C5F0u;
label_29c5f0:
    // 0x29c5f0: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x29c5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c5f4: 0x0  nop
    ctx->pc = 0x29c5f4u;
    // NOP
    // 0x29c5f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x29c5f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29c5fc: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x29c5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x29c600: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29c600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29c604: 0x0  nop
    ctx->pc = 0x29c604u;
    // NOP
label_29c608:
    // 0x29c608: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c60c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c610: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29c610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29c614: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x29c614u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29c618: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x29C618u;
    {
        const bool branch_taken_0x29c618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c618) {
            ctx->pc = 0x29C508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c508;
        }
    }
    ctx->pc = 0x29C620u;
    // 0x29c620: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29c620u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29c624: 0x0  nop
    ctx->pc = 0x29c624u;
    // NOP
label_29c628:
    // 0x29c628: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29c628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c62c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c630: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29c630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29c634: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x29c634u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29c638: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
    ctx->pc = 0x29C638u;
    {
        const bool branch_taken_0x29c638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c638) {
            ctx->pc = 0x29C4FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c4fc;
        }
    }
    ctx->pc = 0x29C640u;
    // 0x29c640: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x29c640u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29c644: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29c644u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29c648: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29c648u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29c64c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29c64cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29c650: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29c650u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29c654: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29c654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c658: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29c658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c65c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29c65cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c668: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x29c668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29c66c: 0x3e00008  jr          $ra
    ctx->pc = 0x29C66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C674u;
}
