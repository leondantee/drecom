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

// Function: Shw_trans_tag_up
// Address: 0x1e7560 - 0x1e81c8
void Shw_trans_tag_up_0x1e7560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shw_trans_tag_up_0x1e7560");
#endif

    switch (ctx->pc) {
        case 0x1e75c4u: goto label_1e75c4;
        case 0x1e7618u: goto label_1e7618;
        case 0x1e762cu: goto label_1e762c;
        case 0x1e765cu: goto label_1e765c;
        case 0x1e7678u: goto label_1e7678;
        case 0x1e769cu: goto label_1e769c;
        case 0x1e76b8u: goto label_1e76b8;
        case 0x1e76d4u: goto label_1e76d4;
        case 0x1e76e8u: goto label_1e76e8;
        case 0x1e76fcu: goto label_1e76fc;
        case 0x1e7710u: goto label_1e7710;
        case 0x1e7720u: goto label_1e7720;
        case 0x1e7788u: goto label_1e7788;
        case 0x1e77b0u: goto label_1e77b0;
        case 0x1e77d4u: goto label_1e77d4;
        case 0x1e77f8u: goto label_1e77f8;
        case 0x1e781cu: goto label_1e781c;
        case 0x1e7840u: goto label_1e7840;
        case 0x1e7afcu: goto label_1e7afc;
        case 0x1e7b50u: goto label_1e7b50;
        case 0x1e7b78u: goto label_1e7b78;
        case 0x1e7ba0u: goto label_1e7ba0;
        case 0x1e7bc8u: goto label_1e7bc8;
        case 0x1e7becu: goto label_1e7bec;
        case 0x1e7c10u: goto label_1e7c10;
        case 0x1e7cacu: goto label_1e7cac;
        case 0x1e7cc8u: goto label_1e7cc8;
        case 0x1e7cecu: goto label_1e7cec;
        case 0x1e7d0cu: goto label_1e7d0c;
        case 0x1e7df0u: goto label_1e7df0;
        case 0x1e7e14u: goto label_1e7e14;
        case 0x1e7e30u: goto label_1e7e30;
        case 0x1e7e48u: goto label_1e7e48;
        case 0x1e7f30u: goto label_1e7f30;
        case 0x1e7f54u: goto label_1e7f54;
        case 0x1e7f74u: goto label_1e7f74;
        case 0x1e7f90u: goto label_1e7f90;
        case 0x1e806cu: goto label_1e806c;
        case 0x1e808cu: goto label_1e808c;
        case 0x1e80b0u: goto label_1e80b0;
        case 0x1e80d0u: goto label_1e80d0;
        default: break;
    }

    ctx->pc = 0x1e7560u;

    // 0x1e7560: 0x27bdfc10  addiu       $sp, $sp, -0x3F0
    ctx->pc = 0x1e7560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966288));
    // 0x1e7564: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1e7564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1e7568: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e7568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e756c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e7570: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e7570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e7574: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e7574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e7578: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e7578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e757c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e7580: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e7584: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e758c: 0xafa503d0  sw          $a1, 0x3D0($sp)
    ctx->pc = 0x1e758cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 5));
    // 0x1e7590: 0xafa603d8  sw          $a2, 0x3D8($sp)
    ctx->pc = 0x1e7590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 984), GPR_U32(ctx, 6));
    // 0x1e7594: 0xafa703e0  sw          $a3, 0x3E0($sp)
    ctx->pc = 0x1e7594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 7));
    // 0x1e7598: 0xe7ac03e8  swc1        $f12, 0x3E8($sp)
    ctx->pc = 0x1e7598u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1000), bits); }
    // 0x1e759c: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x1e759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1e75a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e75a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e75a4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e75a4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e75a8: 0x8fa203d8  lw          $v0, 0x3D8($sp)
    ctx->pc = 0x1e75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
    // 0x1e75ac: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1e75acu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e75b0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e75b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e75b4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e75b8: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e75b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e75bc: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1E75BCu;
    SET_GPR_U32(ctx, 31, 0x1E75C4u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1E75C4u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E75C4u) { return; }
    ctx->pc = 0x1E75C4u;
label_1e75c4:
    // 0x1e75c4: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x1e75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1e75c8: 0xafa203bc  sw          $v0, 0x3BC($sp)
    ctx->pc = 0x1e75c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 956), GPR_U32(ctx, 2));
    // 0x1e75cc: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x1e75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1e75d0: 0x24500060  addiu       $s0, $v0, 0x60
    ctx->pc = 0x1e75d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1e75d4: 0xafb003e0  sw          $s0, 0x3E0($sp)
    ctx->pc = 0x1e75d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 16));
    // 0x1e75d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e75d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e75dc: 0x0  nop
    ctx->pc = 0x1e75dcu;
    // NOP
    // 0x1e75e0: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x1e75e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x1e75e4: 0xc7a003e8  lwc1        $f0, 0x3E8($sp)
    ctx->pc = 0x1e75e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e75e8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e75e8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e75ec: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e75ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x1e75f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e75f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e75f4: 0x0  nop
    ctx->pc = 0x1e75f4u;
    // NOP
    // 0x1e75f8: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x1e75f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x1e75fc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1e75fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7600: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e7600u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7604: 0x0  nop
    ctx->pc = 0x1e7604u;
    // NOP
    // 0x1e7608: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x1e7608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x1e760c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e760cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7610: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E7610u;
    SET_GPR_U32(ctx, 31, 0x1E7618u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E7618u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7618u) { return; }
    ctx->pc = 0x1E7618u;
label_1e7618:
    // 0x1e7618: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e7618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e761c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e761cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7620: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x1e7620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e7624: 0xc040c92  jal         func_103248
    ctx->pc = 0x1E7624u;
    SET_GPR_U32(ctx, 31, 0x1E762Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x1E762Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E762Cu) { return; }
    ctx->pc = 0x1E762Cu;
label_1e762c:
    // 0x1e762c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e762cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7630: 0x0  nop
    ctx->pc = 0x1e7630u;
    // NOP
    // 0x1e7634: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1e7634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1e7638: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1e7638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1e763c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1e763cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1e7640: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1e7640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1e7644: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e7644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7648: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e7648u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e764c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e764cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e7650: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e7650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7654: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E7654u;
    SET_GPR_U32(ctx, 31, 0x1E765Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E765Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E765Cu) { return; }
    ctx->pc = 0x1E765Cu;
label_1e765c:
    // 0x1e765c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1e765cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7660: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e7660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7664: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1e7664u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7668: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x1e7668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1e766c: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x1e766cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1e7670: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7674: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x1e7674u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e7678:
    // 0x1e7678: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1e7678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e767c: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1e767cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7680: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1e7680u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7684: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7688: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1e7688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e768c: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x1e768cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e7690: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e7690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e7694: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7694u;
    SET_GPR_U32(ctx, 31, 0x1E769Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E769Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E769Cu) { return; }
    ctx->pc = 0x1E769Cu;
label_1e769c:
    // 0x1e769c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1e769cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e76a0: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x1e76a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e76a4: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x1e76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1e76a8: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x1e76a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e76ac: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1e76acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e76b0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E76B0u;
    SET_GPR_U32(ctx, 31, 0x1E76B8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E76B8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E76B8u) { return; }
    ctx->pc = 0x1E76B8u;
label_1e76b8:
    // 0x1e76b8: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1e76b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e76bc: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x1e76bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e76c0: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x1e76c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1e76c4: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x1e76c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e76c8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1e76c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e76cc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E76CCu;
    SET_GPR_U32(ctx, 31, 0x1E76D4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E76D4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E76D4u) { return; }
    ctx->pc = 0x1E76D4u;
label_1e76d4:
    // 0x1e76d4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e76d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e76d8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1e76d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e76dc: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1e76dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e76e0: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E76E0u;
    SET_GPR_U32(ctx, 31, 0x1E76E8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E76E8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E76E8u) { return; }
    ctx->pc = 0x1E76E8u;
label_1e76e8:
    // 0x1e76e8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1e76e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e76ec: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1e76ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e76f0: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1e76f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e76f4: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E76F4u;
    SET_GPR_U32(ctx, 31, 0x1E76FCu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E76FCu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E76FCu) { return; }
    ctx->pc = 0x1E76FCu;
label_1e76fc:
    // 0x1e76fc: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1e76fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e7700: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1e7700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e7704: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e7704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e7708: 0xc040c12  jal         func_103048
    ctx->pc = 0x1E7708u;
    SET_GPR_U32(ctx, 31, 0x1E7710u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x1E7710u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7710u) { return; }
    ctx->pc = 0x1E7710u;
label_1e7710:
    // 0x1e7710: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1e7710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e7714: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1e7714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e7718: 0xc040c1a  jal         func_103068
    ctx->pc = 0x1E7718u;
    SET_GPR_U32(ctx, 31, 0x1E7720u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x1E7720u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7720u) { return; }
    ctx->pc = 0x1E7720u;
label_1e7720:
    // 0x1e7720: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e7720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7724: 0x0  nop
    ctx->pc = 0x1e7724u;
    // NOP
    // 0x1e7728: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e7728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e772c: 0x0  nop
    ctx->pc = 0x1e772cu;
    // NOP
    // 0x1e7730: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7730u;
    {
        const bool branch_taken_0x1e7730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7730) {
            ctx->pc = 0x1E774Cu;
            goto label_1e774c;
        }
    }
    ctx->pc = 0x1E7738u;
    // 0x1e7738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e773c: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1e773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1e7740: 0xa0620220  sb          $v0, 0x220($v1)
    ctx->pc = 0x1e7740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e7744: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7744u;
    {
        const bool branch_taken_0x1e7744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7744) {
            ctx->pc = 0x1E7764u;
            goto label_1e7764;
        }
    }
    ctx->pc = 0x1E774Cu;
label_1e774c:
    // 0x1e774c: 0x25d8021  addu        $s0, $s2, $sp
    ctx->pc = 0x1e774cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1e7750: 0xa2000220  sb          $zero, 0x220($s0)
    ctx->pc = 0x1e7750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7754: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1e7754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e7758: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1e7758u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e775c: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1E775Cu;
    {
        const bool branch_taken_0x1e775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e775c) {
            ctx->pc = 0x1E7AB8u;
            goto label_1e7ab8;
        }
    }
    ctx->pc = 0x1E7764u;
label_1e7764:
    // 0x1e7764: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1e7764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7768: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1e7768u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e776c: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1e776cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e7770: 0x2853021  addu        $a2, $s4, $a1
    ctx->pc = 0x1e7770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1e7774: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1e7774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e7778: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e7778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e777c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e777cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7780: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7780u;
    SET_GPR_U32(ctx, 31, 0x1E7788u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7788u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7788u) { return; }
    ctx->pc = 0x1E7788u;
label_1e7788:
    // 0x1e7788: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e7788u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e778c: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x1e778cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e7790: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1e7790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1e7794: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e7794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e7798: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x1e7798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1e779c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1e779cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e77a0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e77a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e77a4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e77a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e77a8: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E77A8u;
    SET_GPR_U32(ctx, 31, 0x1E77B0u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E77B0u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E77B0u) { return; }
    ctx->pc = 0x1E77B0u;
label_1e77b0:
    // 0x1e77b0: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1e77b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e77b4: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x1e77b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e77b8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1e77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1e77bc: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x1e77bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e77c0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1e77c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e77c4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e77c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e77c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e77c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e77cc: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E77CCu;
    SET_GPR_U32(ctx, 31, 0x1E77D4u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E77D4u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E77D4u) { return; }
    ctx->pc = 0x1E77D4u;
label_1e77d4:
    // 0x1e77d4: 0x96360000  lhu         $s6, 0x0($s1)
    ctx->pc = 0x1e77d4u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e77d8: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x1e77d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x1e77dc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1e77dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e77e0: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x1e77e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e77e4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1e77e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e77e8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e77e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e77ec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e77ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e77f0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E77F0u;
    SET_GPR_U32(ctx, 31, 0x1E77F8u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E77F8u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E77F8u) { return; }
    ctx->pc = 0x1E77F8u;
label_1e77f8:
    // 0x1e77f8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1e77f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e77fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1e77fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e7800: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1e7800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e7804: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x1e7804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e7808: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1e7808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e780c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e780cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7810: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7810u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7814: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7814u;
    SET_GPR_U32(ctx, 31, 0x1E781Cu);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E781Cu;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E781Cu) { return; }
    ctx->pc = 0x1E781Cu;
label_1e781c:
    // 0x1e781c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1e781cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e7820: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e7820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e7824: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x1e7824u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e7828: 0x2903021  addu        $a2, $s4, $s0
    ctx->pc = 0x1e7828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1e782c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1e782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e7830: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e7830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7834: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7834u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7838: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7838u;
    SET_GPR_U32(ctx, 31, 0x1E7840u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7840u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7840u) { return; }
    ctx->pc = 0x1E7840u;
label_1e7840:
    // 0x1e7840: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x1e7840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1e7844: 0x4a00010  bltz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E7844u;
    {
        const bool branch_taken_0x1e7844 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1e7844) {
            ctx->pc = 0x1E7888u;
            goto label_1e7888;
        }
    }
    ctx->pc = 0x1E784Cu;
    // 0x1e784c: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x1e784cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x1e7850: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E7850u;
    {
        const bool branch_taken_0x1e7850 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e7850) {
            ctx->pc = 0x1E7888u;
            goto label_1e7888;
        }
    }
    ctx->pc = 0x1E7858u;
    // 0x1e7858: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x1e7858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e785c: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E785Cu;
    {
        const bool branch_taken_0x1e785c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e785c) {
            ctx->pc = 0x1E7888u;
            goto label_1e7888;
        }
    }
    ctx->pc = 0x1E7864u;
    // 0x1e7864: 0x8fb001f8  lw          $s0, 0x1F8($sp)
    ctx->pc = 0x1e7864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e7868: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7868u;
    {
        const bool branch_taken_0x1e7868 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1e7868) {
            ctx->pc = 0x1E7888u;
            goto label_1e7888;
        }
    }
    ctx->pc = 0x1E7870u;
    // 0x1e7870: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x1e7870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1e7874: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7874u;
    {
        const bool branch_taken_0x1e7874 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1e7874) {
            ctx->pc = 0x1E7888u;
            goto label_1e7888;
        }
    }
    ctx->pc = 0x1E787Cu;
    // 0x1e787c: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x1e787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1e7880: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7880u;
    {
        const bool branch_taken_0x1e7880 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e7880) {
            ctx->pc = 0x1E78A0u;
            goto label_1e78a0;
        }
    }
    ctx->pc = 0x1E7888u;
label_1e7888:
    // 0x1e7888: 0x25d8021  addu        $s0, $s2, $sp
    ctx->pc = 0x1e7888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1e788c: 0xa2000220  sb          $zero, 0x220($s0)
    ctx->pc = 0x1e788cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7890: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1e7890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e7894: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1e7894u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7898: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1E7898u;
    {
        const bool branch_taken_0x1e7898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7898) {
            ctx->pc = 0x1E7AB8u;
            goto label_1e7ab8;
        }
    }
    ctx->pc = 0x1E78A0u;
label_1e78a0:
    // 0x1e78a0: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1e78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e78a4: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E78A4u;
    {
        const bool branch_taken_0x1e78a4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e78a4) {
            ctx->pc = 0x1E78E0u;
            goto label_1e78e0;
        }
    }
    ctx->pc = 0x1E78ACu;
    // 0x1e78ac: 0x8fb001c0  lw          $s0, 0x1C0($sp)
    ctx->pc = 0x1e78acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e78b0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e78b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e78b4: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x1e78b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e78b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E78B8u;
    {
        const bool branch_taken_0x1e78b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e78b8) {
            ctx->pc = 0x1E78E0u;
            goto label_1e78e0;
        }
    }
    ctx->pc = 0x1E78C0u;
    // 0x1e78c0: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x1e78c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e78c4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E78C4u;
    {
        const bool branch_taken_0x1e78c4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e78c4) {
            ctx->pc = 0x1E78E0u;
            goto label_1e78e0;
        }
    }
    ctx->pc = 0x1E78CCu;
    // 0x1e78cc: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x1e78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e78d0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e78d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e78d4: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e78d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e78d8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E78D8u;
    {
        const bool branch_taken_0x1e78d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e78d8) {
            ctx->pc = 0x1E78F8u;
            goto label_1e78f8;
        }
    }
    ctx->pc = 0x1E78E0u;
label_1e78e0:
    // 0x1e78e0: 0x25d2021  addu        $a0, $s2, $sp
    ctx->pc = 0x1e78e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1e78e4: 0xa0800220  sb          $zero, 0x220($a0)
    ctx->pc = 0x1e78e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e78e8: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e78e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e78ec: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e78ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e78f0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1E78F0u;
    {
        const bool branch_taken_0x1e78f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e78f0) {
            ctx->pc = 0x1E7AB8u;
            goto label_1e7ab8;
        }
    }
    ctx->pc = 0x1E78F8u;
label_1e78f8:
    // 0x1e78f8: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1e78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e78fc: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E78FCu;
    {
        const bool branch_taken_0x1e78fc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e78fc) {
            ctx->pc = 0x1E7938u;
            goto label_1e7938;
        }
    }
    ctx->pc = 0x1E7904u;
    // 0x1e7904: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1e7904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e7908: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e790c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e790cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7910: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7910u;
    {
        const bool branch_taken_0x1e7910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7910) {
            ctx->pc = 0x1E7938u;
            goto label_1e7938;
        }
    }
    ctx->pc = 0x1E7918u;
    // 0x1e7918: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e7918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e791c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E791Cu;
    {
        const bool branch_taken_0x1e791c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e791c) {
            ctx->pc = 0x1E7938u;
            goto label_1e7938;
        }
    }
    ctx->pc = 0x1E7924u;
    // 0x1e7924: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e7924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e7928: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7928u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e792c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e792cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7930: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7930u;
    {
        const bool branch_taken_0x1e7930 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7930) {
            ctx->pc = 0x1E7950u;
            goto label_1e7950;
        }
    }
    ctx->pc = 0x1E7938u;
label_1e7938:
    // 0x1e7938: 0x25d2021  addu        $a0, $s2, $sp
    ctx->pc = 0x1e7938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1e793c: 0xa0800220  sb          $zero, 0x220($a0)
    ctx->pc = 0x1e793cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7940: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e7940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e7944: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e7944u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7948: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1E7948u;
    {
        const bool branch_taken_0x1e7948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7948) {
            ctx->pc = 0x1E7AB8u;
            goto label_1e7ab8;
        }
    }
    ctx->pc = 0x1E7950u;
label_1e7950:
    // 0x1e7950: 0x8fb301e0  lw          $s3, 0x1E0($sp)
    ctx->pc = 0x1e7950u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7954: 0x660000e  bltz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x1E7954u;
    {
        const bool branch_taken_0x1e7954 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x1e7954) {
            ctx->pc = 0x1E7990u;
            goto label_1e7990;
        }
    }
    ctx->pc = 0x1E795Cu;
    // 0x1e795c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1e795cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7960: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e7964: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x1e7964u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7968: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7968u;
    {
        const bool branch_taken_0x1e7968 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7968) {
            ctx->pc = 0x1E7990u;
            goto label_1e7990;
        }
    }
    ctx->pc = 0x1E7970u;
    // 0x1e7970: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x1e7970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7974: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7974u;
    {
        const bool branch_taken_0x1e7974 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e7974) {
            ctx->pc = 0x1E7990u;
            goto label_1e7990;
        }
    }
    ctx->pc = 0x1E797Cu;
    // 0x1e797c: 0x8fb501e4  lw          $s5, 0x1E4($sp)
    ctx->pc = 0x1e797cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7980: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e7984: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x1e7984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7988: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7988u;
    {
        const bool branch_taken_0x1e7988 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7988) {
            ctx->pc = 0x1E79A8u;
            goto label_1e79a8;
        }
    }
    ctx->pc = 0x1E7990u;
label_1e7990:
    // 0x1e7990: 0x25d2021  addu        $a0, $s2, $sp
    ctx->pc = 0x1e7990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1e7994: 0xa0800220  sb          $zero, 0x220($a0)
    ctx->pc = 0x1e7994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7998: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e7998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e799c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e799cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e79a0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1E79A0u;
    {
        const bool branch_taken_0x1e79a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e79a0) {
            ctx->pc = 0x1E7AB8u;
            goto label_1e7ab8;
        }
    }
    ctx->pc = 0x1E79A8u;
label_1e79a8:
    // 0x1e79a8: 0x8fb601f0  lw          $s6, 0x1F0($sp)
    ctx->pc = 0x1e79a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e79ac: 0x6c0000e  bltz        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x1E79ACu;
    {
        const bool branch_taken_0x1e79ac = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x1e79ac) {
            ctx->pc = 0x1E79E8u;
            goto label_1e79e8;
        }
    }
    ctx->pc = 0x1E79B4u;
    // 0x1e79b4: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1e79b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e79b8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e79b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e79bc: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x1e79bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e79c0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E79C0u;
    {
        const bool branch_taken_0x1e79c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e79c0) {
            ctx->pc = 0x1E79E8u;
            goto label_1e79e8;
        }
    }
    ctx->pc = 0x1E79C8u;
    // 0x1e79c8: 0x8fa301f4  lw          $v1, 0x1F4($sp)
    ctx->pc = 0x1e79c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1e79cc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E79CCu;
    {
        const bool branch_taken_0x1e79cc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e79cc) {
            ctx->pc = 0x1E79E8u;
            goto label_1e79e8;
        }
    }
    ctx->pc = 0x1E79D4u;
    // 0x1e79d4: 0x8fb701f4  lw          $s7, 0x1F4($sp)
    ctx->pc = 0x1e79d4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1e79d8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e79d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e79dc: 0x2e1082a  slt         $at, $s7, $at
    ctx->pc = 0x1e79dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e79e0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E79E0u;
    {
        const bool branch_taken_0x1e79e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e79e0) {
            ctx->pc = 0x1E7A00u;
            goto label_1e7a00;
        }
    }
    ctx->pc = 0x1E79E8u;
label_1e79e8:
    // 0x1e79e8: 0x25d2021  addu        $a0, $s2, $sp
    ctx->pc = 0x1e79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1e79ec: 0xa0800220  sb          $zero, 0x220($a0)
    ctx->pc = 0x1e79ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e79f0: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e79f4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e79f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e79f8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1E79F8u;
    {
        const bool branch_taken_0x1e79f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e79f8) {
            ctx->pc = 0x1E7AB8u;
            goto label_1e7ab8;
        }
    }
    ctx->pc = 0x1E7A00u;
label_1e7a00:
    // 0x1e7a00: 0x8fb30200  lw          $s3, 0x200($sp)
    ctx->pc = 0x1e7a00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e7a04: 0x660000e  bltz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x1E7A04u;
    {
        const bool branch_taken_0x1e7a04 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x1e7a04) {
            ctx->pc = 0x1E7A40u;
            goto label_1e7a40;
        }
    }
    ctx->pc = 0x1E7A0Cu;
    // 0x1e7a0c: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x1e7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e7a10: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7a10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e7a14: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e7a14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7a18: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7A18u;
    {
        const bool branch_taken_0x1e7a18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a18) {
            ctx->pc = 0x1E7A40u;
            goto label_1e7a40;
        }
    }
    ctx->pc = 0x1E7A20u;
    // 0x1e7a20: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x1e7a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1e7a24: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7A24u;
    {
        const bool branch_taken_0x1e7a24 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1e7a24) {
            ctx->pc = 0x1E7A40u;
            goto label_1e7a40;
        }
    }
    ctx->pc = 0x1E7A2Cu;
    // 0x1e7a2c: 0x8fa30204  lw          $v1, 0x204($sp)
    ctx->pc = 0x1e7a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1e7a30: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e7a34: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e7a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7a38: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7A38u;
    {
        const bool branch_taken_0x1e7a38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a38) {
            ctx->pc = 0x1E7A58u;
            goto label_1e7a58;
        }
    }
    ctx->pc = 0x1E7A40u;
label_1e7a40:
    // 0x1e7a40: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1e7a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1e7a44: 0xa0600220  sb          $zero, 0x220($v1)
    ctx->pc = 0x1e7a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7a48: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e7a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e7a4c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e7a4cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7a50: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1E7A50u;
    {
        const bool branch_taken_0x1e7a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a50) {
            ctx->pc = 0x1E7AB8u;
            goto label_1e7ab8;
        }
    }
    ctx->pc = 0x1E7A58u;
label_1e7a58:
    // 0x1e7a58: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x1e7a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1e7a5c: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E7A5Cu;
    {
        const bool branch_taken_0x1e7a5c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1e7a5c) {
            ctx->pc = 0x1E7A98u;
            goto label_1e7a98;
        }
    }
    ctx->pc = 0x1E7A64u;
    // 0x1e7a64: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x1e7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1e7a68: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7a68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e7a6c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e7a6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7a70: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7A70u;
    {
        const bool branch_taken_0x1e7a70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a70) {
            ctx->pc = 0x1E7A98u;
            goto label_1e7a98;
        }
    }
    ctx->pc = 0x1E7A78u;
    // 0x1e7a78: 0x8fa30214  lw          $v1, 0x214($sp)
    ctx->pc = 0x1e7a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x1e7a7c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7A7Cu;
    {
        const bool branch_taken_0x1e7a7c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e7a7c) {
            ctx->pc = 0x1E7A98u;
            goto label_1e7a98;
        }
    }
    ctx->pc = 0x1E7A84u;
    // 0x1e7a84: 0x8fa30214  lw          $v1, 0x214($sp)
    ctx->pc = 0x1e7a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x1e7a88: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7a88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e7a8c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e7a8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7a90: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7A90u;
    {
        const bool branch_taken_0x1e7a90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a90) {
            ctx->pc = 0x1E7AB0u;
            goto label_1e7ab0;
        }
    }
    ctx->pc = 0x1E7A98u;
label_1e7a98:
    // 0x1e7a98: 0x25d8021  addu        $s0, $s2, $sp
    ctx->pc = 0x1e7a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1e7a9c: 0xa2000220  sb          $zero, 0x220($s0)
    ctx->pc = 0x1e7a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7aa0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1e7aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e7aa4: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1e7aa4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7aa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7AA8u;
    {
        const bool branch_taken_0x1e7aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7aa8) {
            ctx->pc = 0x1E7AB8u;
            goto label_1e7ab8;
        }
    }
    ctx->pc = 0x1E7AB0u;
label_1e7ab0:
    // 0x1e7ab0: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e7ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e7ab4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e7ab4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e7ab8:
    // 0x1e7ab8: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x1e7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1e7abc: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x1e7abcu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7ac0: 0x1460feed  bnez        $v1, . + 4 + (-0x113 << 2)
    ctx->pc = 0x1E7AC0u;
    {
        const bool branch_taken_0x1e7ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ac0) {
            ctx->pc = 0x1E7678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7678;
        }
    }
    ctx->pc = 0x1E7AC8u;
    // 0x1e7ac8: 0x8fb003e0  lw          $s0, 0x3E0($sp)
    ctx->pc = 0x1e7ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1e7acc: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e7accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7ad0: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e7ad0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7ad4: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x1e7ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1e7ad8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1e7ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e7adc: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e7adcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7ae0: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x1e7ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1e7ae4: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x1e7ae4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e7ae8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1e7ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1e7aec: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x1e7aecu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7af0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1e7af0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7af4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e7af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7af8: 0xafa303b8  sw          $v1, 0x3B8($sp)
    ctx->pc = 0x1e7af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 952), GPR_U32(ctx, 3));
label_1e7afc:
    // 0x1e7afc: 0x8fa503b8  lw          $a1, 0x3B8($sp)
    ctx->pc = 0x1e7afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
    // 0x1e7b00: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1e7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e7b04: 0xafa303b8  sw          $v1, 0x3B8($sp)
    ctx->pc = 0x1e7b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 952), GPR_U32(ctx, 3));
    // 0x1e7b08: 0x8fa303b8  lw          $v1, 0x3B8($sp)
    ctx->pc = 0x1e7b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
    // 0x1e7b0c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1e7b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e7b10: 0x90630220  lbu         $v1, 0x220($v1)
    ctx->pc = 0x1e7b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x1e7b14: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7B14u;
    {
        const bool branch_taken_0x1e7b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7b14) {
            ctx->pc = 0x1E7B2Cu;
            goto label_1e7b2c;
        }
    }
    ctx->pc = 0x1E7B1Cu;
    // 0x1e7b1c: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e7b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e7b20: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e7b20u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7b24: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x1E7B24u;
    {
        const bool branch_taken_0x1e7b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7b24) {
            ctx->pc = 0x1E80F0u;
            goto label_1e80f0;
        }
    }
    ctx->pc = 0x1E7B2Cu;
label_1e7b2c:
    // 0x1e7b2c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1e7b2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7b30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7b34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e7b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e7b38: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x1e7b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1e7b3c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1e7b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e7b40: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e7b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e7b44: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7b44u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7b48: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7B48u;
    SET_GPR_U32(ctx, 31, 0x1E7B50u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7B50u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7B50u) { return; }
    ctx->pc = 0x1E7B50u;
label_1e7b50:
    // 0x1e7b50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e7b50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7b54: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1e7b54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e7b58: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e7b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7b5c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1e7b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1e7b60: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x1e7b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1e7b64: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1e7b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e7b68: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e7b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e7b6c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7b6cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7b70: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7B70u;
    SET_GPR_U32(ctx, 31, 0x1E7B78u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7B78u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7B78u) { return; }
    ctx->pc = 0x1E7B78u;
label_1e7b78:
    // 0x1e7b78: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e7b78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7b7c: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1e7b7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e7b80: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7b84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e7b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e7b88: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x1e7b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1e7b8c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1e7b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e7b90: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e7b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e7b94: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7b94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7b98: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7B98u;
    SET_GPR_U32(ctx, 31, 0x1E7BA0u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7BA0u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7BA0u) { return; }
    ctx->pc = 0x1E7BA0u;
label_1e7ba0:
    // 0x1e7ba0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e7ba0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7ba4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1e7ba4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7ba8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7bac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e7bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e7bb0: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x1e7bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1e7bb4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1e7bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e7bb8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e7bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7bbc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7bbcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7bc0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7BC0u;
    SET_GPR_U32(ctx, 31, 0x1E7BC8u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7BC8u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7BC8u) { return; }
    ctx->pc = 0x1E7BC8u;
label_1e7bc8:
    // 0x1e7bc8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1e7bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e7bcc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e7bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e7bd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e7bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e7bd4: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x1e7bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e7bd8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1e7bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e7bdc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e7bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7be0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7be0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7be4: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7BE4u;
    SET_GPR_U32(ctx, 31, 0x1E7BECu);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7BECu;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7BECu) { return; }
    ctx->pc = 0x1E7BECu;
label_1e7bec:
    // 0x1e7bec: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1e7becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e7bf0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e7bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e7bf4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e7bf8: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x1e7bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e7bfc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1e7bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e7c00: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e7c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7c04: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7c04u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7c08: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7C08u;
    SET_GPR_U32(ctx, 31, 0x1E7C10u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7C10u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7C10u) { return; }
    ctx->pc = 0x1E7C10u;
label_1e7c10:
    // 0x1e7c10: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1e7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e7c14: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1e7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e7c18: 0x629823  subu        $s3, $v1, $v0
    ctx->pc = 0x1e7c18u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7c1c: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e7c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e7c20: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x1e7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e7c24: 0x62a823  subu        $s5, $v1, $v0
    ctx->pc = 0x1e7c24u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7c28: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1e7c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7c2c: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1e7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e7c30: 0x62b023  subu        $s6, $v1, $v0
    ctx->pc = 0x1e7c30u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7c34: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x1e7c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7c38: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x1e7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e7c3c: 0x62b823  subu        $s7, $v1, $v0
    ctx->pc = 0x1e7c3cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7c40: 0x2b61818  mult        $v1, $s5, $s6
    ctx->pc = 0x1e7c40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e7c44: 0x2771018  mult        $v0, $s3, $s7
    ctx->pc = 0x1e7c44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e7c48: 0x629823  subu        $s3, $v1, $v0
    ctx->pc = 0x1e7c48u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7c4c: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7C4Cu;
    {
        const bool branch_taken_0x1e7c4c = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x1e7c4c) {
            ctx->pc = 0x1E7C70u;
            goto label_1e7c70;
        }
    }
    ctx->pc = 0x1E7C54u;
    // 0x1e7c54: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7c58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e7c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e7c5c: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1e7c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e7c60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e7c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e7c64: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1e7c64u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1e7c68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7C68u;
    {
        const bool branch_taken_0x1e7c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7c68) {
            ctx->pc = 0x1E7C88u;
            goto label_1e7c88;
        }
    }
    ctx->pc = 0x1E7C70u;
label_1e7c70:
    // 0x1e7c70: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7c74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e7c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e7c78: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1e7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e7c7c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1e7c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e7c80: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x1e7c80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x1e7c84: 0x0  nop
    ctx->pc = 0x1e7c84u;
    // NOP
label_1e7c88:
    // 0x1e7c88: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x1e7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e7c8c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1e7c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1e7c90: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e7c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7c94: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e7c94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7c98: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7c98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7c9c: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x1e7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e7ca0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e7ca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7ca4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7CA4u;
    SET_GPR_U32(ctx, 31, 0x1E7CACu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7CACu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7CACu) { return; }
    ctx->pc = 0x1E7CACu;
label_1e7cac:
    // 0x1e7cac: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e7cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7cb0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e7cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e7cb4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7cb8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7cb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7cbc: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1e7cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e7cc0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7CC0u;
    SET_GPR_U32(ctx, 31, 0x1E7CC8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7CC8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7CC8u) { return; }
    ctx->pc = 0x1E7CC8u;
label_1e7cc8:
    // 0x1e7cc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e7cc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7ccc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e7cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7cd0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e7cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e7cd4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e7cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7cd8: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e7cd8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7cdc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7cdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7ce0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e7ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e7ce4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7CE4u;
    SET_GPR_U32(ctx, 31, 0x1E7CECu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7CECu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7CECu) { return; }
    ctx->pc = 0x1E7CECu;
label_1e7cec:
    // 0x1e7cec: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e7cecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7cf0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7cf4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7cf8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1e7cf8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7cfc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7cfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7d00: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e7d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e7d04: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7D04u;
    SET_GPR_U32(ctx, 31, 0x1E7D0Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7D0Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7D0Cu) { return; }
    ctx->pc = 0x1E7D0Cu;
label_1e7d0c:
    // 0x1e7d0c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e7d0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7d10: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7d14: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1e7d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7d18: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x1e7d18u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e7d1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e7d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e7d20: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1e7d20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7d24: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e7d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7d28: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e7d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e7d2c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7D2Cu;
    {
        const bool branch_taken_0x1e7d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e7d2c) {
            ctx->pc = 0x1E7D50u;
            goto label_1e7d50;
        }
    }
    ctx->pc = 0x1E7D34u;
    // 0x1e7d34: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1e7d34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7d38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7d3c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1e7d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e7d40: 0x90630220  lbu         $v1, 0x220($v1)
    ctx->pc = 0x1e7d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x1e7d44: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1E7D44u;
    {
        const bool branch_taken_0x1e7d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7d44) {
            ctx->pc = 0x1E7E60u;
            goto label_1e7e60;
        }
    }
    ctx->pc = 0x1E7D4Cu;
    // 0x1e7d4c: 0x0  nop
    ctx->pc = 0x1e7d4cu;
    // NOP
label_1e7d50:
    // 0x1e7d50: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1e7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e7d54: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x1e7d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e7d58: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x1e7d58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e7d5c: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x1e7d5cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7d60: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x1e7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e7d64: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x1e7d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e7d68: 0x43a823  subu        $s5, $v0, $v1
    ctx->pc = 0x1e7d68u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7d6c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e7d70: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x1e7d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e7d74: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x1e7d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e7d78: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x1e7d78u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7d7c: 0x8fa201f4  lw          $v0, 0x1F4($sp)
    ctx->pc = 0x1e7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1e7d80: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x1e7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e7d84: 0x43b823  subu        $s7, $v0, $v1
    ctx->pc = 0x1e7d84u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7d88: 0x2b61018  mult        $v0, $s5, $s6
    ctx->pc = 0x1e7d88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e7d8c: 0x2772818  mult        $a1, $s3, $s7
    ctx->pc = 0x1e7d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e7d90: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x1e7d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e7d94: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x1e7d94u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7d98: 0x6610008  bgez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7D98u;
    {
        const bool branch_taken_0x1e7d98 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x1e7d98) {
            ctx->pc = 0x1E7DBCu;
            goto label_1e7dbc;
        }
    }
    ctx->pc = 0x1E7DA0u;
    // 0x1e7da0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7da4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1e7da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e7da8: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x1e7da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e7dac: 0xa43025  or          $a2, $a1, $a0
    ctx->pc = 0x1e7dacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1e7db0: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x1e7db0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x1e7db4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7DB4u;
    {
        const bool branch_taken_0x1e7db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7db4) {
            ctx->pc = 0x1E7DD0u;
            goto label_1e7dd0;
        }
    }
    ctx->pc = 0x1E7DBCu;
label_1e7dbc:
    // 0x1e7dbc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7dc0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1e7dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e7dc4: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1e7dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e7dc8: 0xa43025  or          $a2, $a1, $a0
    ctx->pc = 0x1e7dc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1e7dcc: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x1e7dccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
label_1e7dd0:
    // 0x1e7dd0: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x1e7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e7dd4: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1e7dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1e7dd8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e7dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7ddc: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e7ddcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7de0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7de0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7de4: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x1e7de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e7de8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7DE8u;
    SET_GPR_U32(ctx, 31, 0x1E7DF0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7DF0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7DF0u) { return; }
    ctx->pc = 0x1E7DF0u;
label_1e7df0:
    // 0x1e7df0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e7df0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7df4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e7df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7df8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e7df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e7dfc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e7dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7e00: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e7e00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7e04: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7e04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7e08: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1e7e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e7e0c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7E0Cu;
    SET_GPR_U32(ctx, 31, 0x1E7E14u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7E14u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7E14u) { return; }
    ctx->pc = 0x1E7E14u;
label_1e7e14:
    // 0x1e7e14: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e7e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7e18: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e7e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e7e1c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7e20: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7e20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7e24: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1e7e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e7e28: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7E28u;
    SET_GPR_U32(ctx, 31, 0x1E7E30u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7E30u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7E30u) { return; }
    ctx->pc = 0x1E7E30u;
label_1e7e30:
    // 0x1e7e30: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7e34: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7e38: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7e38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7e3c: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1e7e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e7e40: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7E40u;
    SET_GPR_U32(ctx, 31, 0x1E7E48u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7E48u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7E48u) { return; }
    ctx->pc = 0x1E7E48u;
label_1e7e48:
    // 0x1e7e48: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e7e48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7e4c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7e50: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e7e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7e54: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e7e54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7e58: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x1e7e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e7e5c: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x1e7e5cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1e7e60:
    // 0x1e7e60: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x1e7e60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e7e64: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e7e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7e68: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e7e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e7e6c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7E6Cu;
    {
        const bool branch_taken_0x1e7e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e7e6c) {
            ctx->pc = 0x1E7E90u;
            goto label_1e7e90;
        }
    }
    ctx->pc = 0x1E7E74u;
    // 0x1e7e74: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x1e7e74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e7e78: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1e7e78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7e7c: 0xdd2021  addu        $a0, $a2, $sp
    ctx->pc = 0x1e7e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x1e7e80: 0x90850220  lbu         $a1, 0x220($a0)
    ctx->pc = 0x1e7e80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x1e7e84: 0x14a00048  bnez        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1E7E84u;
    {
        const bool branch_taken_0x1e7e84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7e84) {
            ctx->pc = 0x1E7FA8u;
            goto label_1e7fa8;
        }
    }
    ctx->pc = 0x1E7E8Cu;
    // 0x1e7e8c: 0x0  nop
    ctx->pc = 0x1e7e8cu;
    // NOP
label_1e7e90:
    // 0x1e7e90: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e7e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7e94: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1e7e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e7e98: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x1e7e98u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7e9c: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x1e7e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7ea0: 0x8fa601d4  lw          $a2, 0x1D4($sp)
    ctx->pc = 0x1e7ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e7ea4: 0x462023  subu        $a0, $v0, $a2
    ctx->pc = 0x1e7ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e7ea8: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x1e7ea8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7eac: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x1e7eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e7eb0: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1e7eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e7eb4: 0xa2b023  subu        $s6, $a1, $v0
    ctx->pc = 0x1e7eb4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e7eb8: 0x8fa30204  lw          $v1, 0x204($sp)
    ctx->pc = 0x1e7eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1e7ebc: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x1e7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e7ec0: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1e7ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7ec4: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x1e7ec4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e7ec8: 0x2b62018  mult        $a0, $s5, $s6
    ctx->pc = 0x1e7ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e7ecc: 0x2772818  mult        $a1, $s3, $s7
    ctx->pc = 0x1e7eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e7ed0: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x1e7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e7ed4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1e7ed4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7ed8: 0x6610008  bgez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7ED8u;
    {
        const bool branch_taken_0x1e7ed8 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x1e7ed8) {
            ctx->pc = 0x1E7EFCu;
            goto label_1e7efc;
        }
    }
    ctx->pc = 0x1E7EE0u;
    // 0x1e7ee0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e7ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7ee4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e7ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e7ee8: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1e7ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e7eec: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1e7eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e7ef0: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x1e7ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x1e7ef4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7EF4u;
    {
        const bool branch_taken_0x1e7ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ef4) {
            ctx->pc = 0x1E7F10u;
            goto label_1e7f10;
        }
    }
    ctx->pc = 0x1E7EFCu;
label_1e7efc:
    // 0x1e7efc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e7efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7f00: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1e7f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e7f04: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1e7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e7f08: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1e7f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1e7f0c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1e7f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_1e7f10:
    // 0x1e7f10: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x1e7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e7f14: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1e7f14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1e7f18: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7f1c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7f1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7f20: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1e7f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e7f24: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e7f24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e7f28: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7F28u;
    SET_GPR_U32(ctx, 31, 0x1E7F30u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7F30u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7F30u) { return; }
    ctx->pc = 0x1E7F30u;
label_1e7f30:
    // 0x1e7f30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e7f30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7f34: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e7f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7f38: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x1e7f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x1e7f3c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7f40: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1e7f40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7f44: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7f44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7f48: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e7f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e7f4c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E7F54u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7F54u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7F54u) { return; }
    ctx->pc = 0x1E7F54u;
label_1e7f54:
    // 0x1e7f54: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e7f54u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7f58: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e7f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7f5c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e7f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e7f60: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7f64: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7f64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7f68: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1e7f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e7f6c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7F6Cu;
    SET_GPR_U32(ctx, 31, 0x1E7F74u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7F74u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7F74u) { return; }
    ctx->pc = 0x1E7F74u;
label_1e7f74:
    // 0x1e7f74: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e7f74u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7f78: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7f7c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7f80: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7f80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7f84: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1e7f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e7f88: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7F88u;
    SET_GPR_U32(ctx, 31, 0x1E7F90u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7F90u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7F90u) { return; }
    ctx->pc = 0x1E7F90u;
label_1e7f90:
    // 0x1e7f90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e7f90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7f94: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7f98: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7f9c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1e7f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e7fa0: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1e7fa0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7fa4: 0x0  nop
    ctx->pc = 0x1e7fa4u;
    // NOP
label_1e7fa8:
    // 0x1e7fa8: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1e7fa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e7fac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e7facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7fb0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e7fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e7fb4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7FB4u;
    {
        const bool branch_taken_0x1e7fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e7fb4) {
            ctx->pc = 0x1E7FD8u;
            goto label_1e7fd8;
        }
    }
    ctx->pc = 0x1E7FBCu;
    // 0x1e7fbc: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1e7fbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e7fc0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7fc4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1e7fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e7fc8: 0x90630220  lbu         $v1, 0x220($v1)
    ctx->pc = 0x1e7fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x1e7fcc: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1E7FCCu;
    {
        const bool branch_taken_0x1e7fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7fcc) {
            ctx->pc = 0x1E80E8u;
            goto label_1e80e8;
        }
    }
    ctx->pc = 0x1E7FD4u;
    // 0x1e7fd4: 0x0  nop
    ctx->pc = 0x1e7fd4u;
    // NOP
label_1e7fd8:
    // 0x1e7fd8: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x1e7fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e7fdc: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1e7fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7fe0: 0x839823  subu        $s3, $a0, $v1
    ctx->pc = 0x1e7fe0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e7fe4: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x1e7fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e7fe8: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x1e7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7fec: 0x83a823  subu        $s5, $a0, $v1
    ctx->pc = 0x1e7fecu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e7ff0: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x1e7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1e7ff4: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1e7ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7ff8: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x1e7ff8u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e7ffc: 0x8fa40214  lw          $a0, 0x214($sp)
    ctx->pc = 0x1e7ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x1e8000: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x1e8000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e8004: 0x83b823  subu        $s7, $a0, $v1
    ctx->pc = 0x1e8004u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e8008: 0x2b62018  mult        $a0, $s5, $s6
    ctx->pc = 0x1e8008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e800c: 0x2771818  mult        $v1, $s3, $s7
    ctx->pc = 0x1e800cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e8010: 0x839823  subu        $s3, $a0, $v1
    ctx->pc = 0x1e8010u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e8014: 0x6610008  bgez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8014u;
    {
        const bool branch_taken_0x1e8014 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x1e8014) {
            ctx->pc = 0x1E8038u;
            goto label_1e8038;
        }
    }
    ctx->pc = 0x1E801Cu;
    // 0x1e801c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e801cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e8020: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e8020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e8024: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x1e8024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e8028: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e8028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e802c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e802cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e8030: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8030u;
    {
        const bool branch_taken_0x1e8030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8030) {
            ctx->pc = 0x1E8050u;
            goto label_1e8050;
        }
    }
    ctx->pc = 0x1E8038u;
label_1e8038:
    // 0x1e8038: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e8038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e803c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e803cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e8040: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1e8040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e8044: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e8044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e8048: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e8048u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e804c: 0x0  nop
    ctx->pc = 0x1e804cu;
    // NOP
label_1e8050:
    // 0x1e8050: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e8050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e8054: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1e8054u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1e8058: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e8058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e805c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e805cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e8060: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e8060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e8064: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E8064u;
    SET_GPR_U32(ctx, 31, 0x1E806Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E806Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E806Cu) { return; }
    ctx->pc = 0x1E806Cu;
label_1e806c:
    // 0x1e806c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e806cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8070: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e8070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e8074: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e8074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e8078: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e8078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e807c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e807cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e8080: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x1e8080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e8084: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E8084u;
    SET_GPR_U32(ctx, 31, 0x1E808Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E808Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E808Cu) { return; }
    ctx->pc = 0x1E808Cu;
label_1e808c:
    // 0x1e808c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e808cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8090: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e8090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e8094: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e8094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e8098: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e8098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e809c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e809cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e80a0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e80a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e80a4: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1e80a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e80a8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E80A8u;
    SET_GPR_U32(ctx, 31, 0x1E80B0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E80B0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E80B0u) { return; }
    ctx->pc = 0x1E80B0u;
label_1e80b0:
    // 0x1e80b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e80b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e80b4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e80b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e80b8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e80b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e80bc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e80bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e80c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e80c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e80c4: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1e80c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e80c8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E80C8u;
    SET_GPR_U32(ctx, 31, 0x1E80D0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E80D0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E80D0u) { return; }
    ctx->pc = 0x1E80D0u;
label_1e80d0:
    // 0x1e80d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e80d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e80d4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e80d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e80d8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e80d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e80dc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e80dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e80e0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1e80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e80e4: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1e80e4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e80e8:
    // 0x1e80e8: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e80e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e80ec: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e80ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e80f0:
    // 0x1e80f0: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x1e80f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1e80f4: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x1e80f4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e80f8: 0x1460fe80  bnez        $v1, . + 4 + (-0x180 << 2)
    ctx->pc = 0x1E80F8u;
    {
        const bool branch_taken_0x1e80f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e80f8) {
            ctx->pc = 0x1E7AFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7afc;
        }
    }
    ctx->pc = 0x1E8100u;
    // 0x1e8100: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E8100u;
    {
        const bool branch_taken_0x1e8100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8100) {
            ctx->pc = 0x1E8178u;
            goto label_1e8178;
        }
    }
    ctx->pc = 0x1E8108u;
    // 0x1e8108: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e8108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1e810c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1e810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e8110: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1e8110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1e8114: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1e8114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e8118: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1e8118u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1e811c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e811cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8120: 0xc42825  or          $a1, $a2, $a0
    ctx->pc = 0x1e8120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1e8124: 0x8fa303bc  lw          $v1, 0x3BC($sp)
    ctx->pc = 0x1e8124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
    // 0x1e8128: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1e8128u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x1e812c: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x1e812cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1e8130: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e8130u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e8134: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x1e8134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1e8138: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1e8138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1e813c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1e813cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e8140: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1e8140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1e8144: 0x8fa503e0  lw          $a1, 0x3E0($sp)
    ctx->pc = 0x1e8144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1e8148: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x1e8148u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x1e814c: 0x8fa303bc  lw          $v1, 0x3BC($sp)
    ctx->pc = 0x1e814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
    // 0x1e8150: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e8150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1e8154: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e8154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1e8158: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1e8158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e815c: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1e815cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1e8160: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x1e8160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x1e8164: 0x662025  or          $a0, $v1, $a2
    ctx->pc = 0x1e8164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e8168: 0x8fa503bc  lw          $a1, 0x3BC($sp)
    ctx->pc = 0x1e8168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
    // 0x1e816c: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x1e816cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x1e8170: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8170u;
    {
        const bool branch_taken_0x1e8170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8170) {
            ctx->pc = 0x1E8194u;
            goto label_1e8194;
        }
    }
    ctx->pc = 0x1E8178u;
label_1e8178:
    // 0x1e8178: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e8178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1e817c: 0x8fa303bc  lw          $v1, 0x3BC($sp)
    ctx->pc = 0x1e817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
    // 0x1e8180: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1e8180u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1e8184: 0x8fa303bc  lw          $v1, 0x3BC($sp)
    ctx->pc = 0x1e8184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
    // 0x1e8188: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e8188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1e818c: 0x8fa303bc  lw          $v1, 0x3BC($sp)
    ctx->pc = 0x1e818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
    // 0x1e8190: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e8190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1e8194:
    // 0x1e8194: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1e8194u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e8198: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e8198u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e819c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e819cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e81a0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e81a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e81a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e81a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e81a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e81a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e81ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e81acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e81b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e81b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e81b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e81b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e81b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e81b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e81bc: 0x27bd03f0  addiu       $sp, $sp, 0x3F0
    ctx->pc = 0x1e81bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x1e81c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E81C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E81C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E81C8u;
}
