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

// Function: effscr02_draw
// Address: 0x29a620 - 0x29bb90
void effscr02_draw_0x29a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("effscr02_draw_0x29a620");
#endif

    switch (ctx->pc) {
        case 0x29a768u: goto label_29a768;
        case 0x29a7a4u: goto label_29a7a4;
        case 0x29a7d0u: goto label_29a7d0;
        case 0x29a818u: goto label_29a818;
        case 0x29a82cu: goto label_29a82c;
        case 0x29aa6cu: goto label_29aa6c;
        case 0x29aa84u: goto label_29aa84;
        case 0x29aaa4u: goto label_29aaa4;
        case 0x29ab9cu: goto label_29ab9c;
        case 0x29abb0u: goto label_29abb0;
        case 0x29abccu: goto label_29abcc;
        case 0x29acd4u: goto label_29acd4;
        case 0x29ace8u: goto label_29ace8;
        case 0x29ad04u: goto label_29ad04;
        case 0x29adf8u: goto label_29adf8;
        case 0x29ae10u: goto label_29ae10;
        case 0x29ae30u: goto label_29ae30;
        case 0x29af44u: goto label_29af44;
        case 0x29af58u: goto label_29af58;
        case 0x29af74u: goto label_29af74;
        case 0x29b068u: goto label_29b068;
        case 0x29b080u: goto label_29b080;
        case 0x29b0a0u: goto label_29b0a0;
        case 0x29b1acu: goto label_29b1ac;
        case 0x29b1c0u: goto label_29b1c0;
        case 0x29b1dcu: goto label_29b1dc;
        case 0x29b2d4u: goto label_29b2d4;
        case 0x29b2f0u: goto label_29b2f0;
        case 0x29b314u: goto label_29b314;
        case 0x29b400u: goto label_29b400;
        case 0x29b41cu: goto label_29b41c;
        case 0x29b464u: goto label_29b464;
        case 0x29b47cu: goto label_29b47c;
        case 0x29b4d0u: goto label_29b4d0;
        case 0x29b4e8u: goto label_29b4e8;
        case 0x29b53cu: goto label_29b53c;
        case 0x29b554u: goto label_29b554;
        case 0x29b5a4u: goto label_29b5a4;
        case 0x29b5b8u: goto label_29b5b8;
        case 0x29b60cu: goto label_29b60c;
        case 0x29b628u: goto label_29b628;
        case 0x29b67cu: goto label_29b67c;
        case 0x29b694u: goto label_29b694;
        case 0x29b6e8u: goto label_29b6e8;
        case 0x29b700u: goto label_29b700;
        case 0x29b758u: goto label_29b758;
        case 0x29b778u: goto label_29b778;
        case 0x29b7acu: goto label_29b7ac;
        case 0x29b7c4u: goto label_29b7c4;
        case 0x29b7f0u: goto label_29b7f0;
        case 0x29b80cu: goto label_29b80c;
        case 0x29b860u: goto label_29b860;
        case 0x29b878u: goto label_29b878;
        case 0x29b8c8u: goto label_29b8c8;
        case 0x29b8e0u: goto label_29b8e0;
        case 0x29b930u: goto label_29b930;
        case 0x29b94cu: goto label_29b94c;
        case 0x29b9a4u: goto label_29b9a4;
        case 0x29b9c0u: goto label_29b9c0;
        case 0x29ba18u: goto label_29ba18;
        case 0x29ba38u: goto label_29ba38;
        case 0x29bb08u: goto label_29bb08;
        case 0x29bb34u: goto label_29bb34;
        default: break;
    }

    ctx->pc = 0x29a620u;

    // 0x29a620: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x29a620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x29a624: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x29a624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x29a628: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x29a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29a62c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29a62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x29a630: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29a630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29a634: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29a634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29a638: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29a638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29a63c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29a63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29a640: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29a640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29a644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29a648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a64c: 0xafa40218  sw          $a0, 0x218($sp)
    ctx->pc = 0x29a64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 4));
    // 0x29a650: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x29a650u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29a654: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x29a654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x29a658: 0x24a6e550  addiu       $a2, $a1, -0x1AB0
    ctx->pc = 0x29a658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960464));
    // 0x29a65c: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x29a65cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29a660: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x29a660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x29a664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a668: 0x0  nop
    ctx->pc = 0x29a668u;
    // NOP
    // 0x29a66c: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x29a66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x29a670: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x29a670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x29a674: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29a674u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a678: 0x0  nop
    ctx->pc = 0x29a678u;
    // NOP
    // 0x29a67c: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x29a67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x29a680: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x29a680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x29a684: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29a684u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a688: 0x0  nop
    ctx->pc = 0x29a688u;
    // NOP
    // 0x29a68c: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x29a68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x29a690: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x29a690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x29a694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a698: 0x0  nop
    ctx->pc = 0x29a698u;
    // NOP
    // 0x29a69c: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x29a69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
    // 0x29a6a0: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x29a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x29a6a4: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a6a8: 0xfc430178  sd          $v1, 0x178($v0)
    ctx->pc = 0x29a6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 376), GPR_U64(ctx, 3));
    // 0x29a6ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29a6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a6b0: 0x0  nop
    ctx->pc = 0x29a6b0u;
    // NOP
    // 0x29a6b4: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29a6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29a6b8: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a6bc: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a6c0: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x29a6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x29a6c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29a6c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a6c8: 0x0  nop
    ctx->pc = 0x29a6c8u;
    // NOP
    // 0x29a6cc: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x29a6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x29a6d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29a6d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a6d4: 0x0  nop
    ctx->pc = 0x29a6d4u;
    // NOP
    // 0x29a6d8: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x29a6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x29a6dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29a6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29a6e0: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x29a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x29a6e4: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x29a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x29a6e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29a6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29a6ec: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x29a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x29a6f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29a6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29a6f4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29A6F4u;
    {
        const bool branch_taken_0x29a6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a6f4) {
            ctx->pc = 0x29A724u;
            goto label_29a724;
        }
    }
    ctx->pc = 0x29A6FCu;
    // 0x29a6fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x29a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x29a700: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x29a704: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x29a704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a708: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x29a708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x29a70c: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x29a70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x29a710: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x29a710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x29a714: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x29a714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a718: 0xfca20170  sd          $v0, 0x170($a1)
    ctx->pc = 0x29a718u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 368), GPR_U64(ctx, 2));
    // 0x29a71c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29A71Cu;
    {
        const bool branch_taken_0x29a71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a71c) {
            ctx->pc = 0x29A740u;
            goto label_29a740;
        }
    }
    ctx->pc = 0x29A724u;
label_29a724:
    // 0x29a724: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x29a724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x29a728: 0x34460002  ori         $a2, $v0, 0x2
    ctx->pc = 0x29a728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x29a72c: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x29a72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29a730: 0x3c062402  lui         $a2, 0x2402
    ctx->pc = 0x29a730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)9218 << 16));
    // 0x29a734: 0xc41025  or          $v0, $a2, $a0
    ctx->pc = 0x29a734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x29a738: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x29a738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a73c: 0xfc820170  sd          $v0, 0x170($a0)
    ctx->pc = 0x29a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 368), GPR_U64(ctx, 2));
label_29a740:
    // 0x29a740: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x29a740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a744: 0x8ca201a4  lw          $v0, 0x1A4($a1)
    ctx->pc = 0x29a744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 420)));
    // 0x29a748: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x29A748u;
    {
        const bool branch_taken_0x29a748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a748) {
            ctx->pc = 0x29A7ECu;
            goto label_29a7ec;
        }
    }
    ctx->pc = 0x29A750u;
    // 0x29a750: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a754: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x29a754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a758: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x29a758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x29a75c: 0x8ca501a4  lw          $a1, 0x1A4($a1)
    ctx->pc = 0x29a75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 420)));
    // 0x29a760: 0xc040ca2  jal         func_103288
    ctx->pc = 0x29A760u;
    SET_GPR_U32(ctx, 31, 0x29A768u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x29A768u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A768u) { return; }
    ctx->pc = 0x29A768u;
label_29a768:
    // 0x29a768: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a76c: 0x944201a8  lhu         $v0, 0x1A8($v0)
    ctx->pc = 0x29a76cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x29a770: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29a770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29a774: 0x30510002  andi        $s1, $v0, 0x2
    ctx->pc = 0x29a774u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x29a778: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x29A778u;
    {
        const bool branch_taken_0x29a778 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a778) {
            ctx->pc = 0x29A7ACu;
            goto label_29a7ac;
        }
    }
    ctx->pc = 0x29A780u;
    // 0x29a780: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x29a780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a784: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a788: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x29a788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29a78c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29a78cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a790: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x29a790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x29a794: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x29a794u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29a798: 0x246600c0  addiu       $a2, $v1, 0xC0
    ctx->pc = 0x29a798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x29a79c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x29A79Cu;
    SET_GPR_U32(ctx, 31, 0x29A7A4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x29A79Cu, 0x29A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7A4u;
label_29a7a4:
    // 0x29a7a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29A7A4u;
    {
        const bool branch_taken_0x29a7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a7a4) {
            ctx->pc = 0x29A7D0u;
            goto label_29a7d0;
        }
    }
    ctx->pc = 0x29A7ACu;
label_29a7ac:
    // 0x29a7ac: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x29a7acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a7b0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a7b4: 0x27b50140  addiu       $s5, $sp, 0x140
    ctx->pc = 0x29a7b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29a7b8: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x29a7b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x29a7bc: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x29a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x29a7c0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x29a7c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x29a7c4: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x29a7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x29a7c8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29A7C8u;
    SET_GPR_U32(ctx, 31, 0x29A7D0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29A7D0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A7D0u) { return; }
    ctx->pc = 0x29A7D0u;
label_29a7d0:
    // 0x29a7d0: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x29a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29a7d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29a7d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a7d8: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a7dc: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x29a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x29a7e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x29a7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x29a7e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29A7E4u;
    {
        const bool branch_taken_0x29a7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a7e4) {
            ctx->pc = 0x29A800u;
            goto label_29a800;
        }
    }
    ctx->pc = 0x29A7ECu;
label_29a7ec:
    // 0x29a7ec: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a7f0: 0x246200a0  addiu       $v0, $v1, 0xA0
    ctx->pc = 0x29a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x29a7f4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x29a7f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a7f8: 0x27b10140  addiu       $s1, $sp, 0x140
    ctx->pc = 0x29a7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29a7fc: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x29a7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_29a800:
    // 0x29a800: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x29a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29a804: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29a804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a808: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29a808u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29a80c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29a80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29a810: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29A810u;
    SET_GPR_U32(ctx, 31, 0x29A818u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29A818u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A818u) { return; }
    ctx->pc = 0x29A818u;
label_29a818:
    // 0x29a818: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x29a818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a81c: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29a81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29a820: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x29a820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29a824: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29A824u;
    SET_GPR_U32(ctx, 31, 0x29A82Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29A824u, 0x29A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A82Cu;
label_29a82c:
    // 0x29a82c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x29a82cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a830: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x29a830u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29a834: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x29a834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x29a838: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A838u;
    {
        const bool branch_taken_0x29a838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a838) {
            ctx->pc = 0x29A844u;
            goto label_29a844;
        }
    }
    ctx->pc = 0x29A840u;
    // 0x29a840: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x29a840u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_29a844:
    // 0x29a844: 0x14a182  srl         $s4, $s4, 6
    ctx->pc = 0x29a844u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 6));
    // 0x29a848: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a84c: 0x945e01a8  lhu         $fp, 0x1A8($v0)
    ctx->pc = 0x29a84cu;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x29a850: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x29a850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x29a854: 0x30470010  andi        $a3, $v0, 0x10
    ctx->pc = 0x29a854u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x29a858: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x29A858u;
    {
        const bool branch_taken_0x29a858 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a858) {
            ctx->pc = 0x29A874u;
            goto label_29a874;
        }
    }
    ctx->pc = 0x29A860u;
    // 0x29a860: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29a860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a864: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29a864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a868: 0xe46001d4  swc1        $f0, 0x1D4($v1)
    ctx->pc = 0x29a868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 468), bits); }
    // 0x29a86c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29A86Cu;
    {
        const bool branch_taken_0x29a86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a86c) {
            ctx->pc = 0x29A8B4u;
            goto label_29a8b4;
        }
    }
    ctx->pc = 0x29A874u;
label_29a874:
    // 0x29a874: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x29A874u;
    {
        const bool branch_taken_0x29a874 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x29a874) {
            ctx->pc = 0x29A890u;
            goto label_29a890;
        }
    }
    ctx->pc = 0x29A87Cu;
    // 0x29a87c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x29a87cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a880: 0x0  nop
    ctx->pc = 0x29a880u;
    // NOP
    // 0x29a884: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29a884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29a888: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29A888u;
    {
        const bool branch_taken_0x29a888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a888) {
            ctx->pc = 0x29A8ACu;
            goto label_29a8ac;
        }
    }
    ctx->pc = 0x29A890u;
label_29a890:
    // 0x29a890: 0x142842  srl         $a1, $s4, 1
    ctx->pc = 0x29a890u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x29a894: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x29a894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x29a898: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x29a898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x29a89c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29a89cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a8a0: 0x0  nop
    ctx->pc = 0x29a8a0u;
    // NOP
    // 0x29a8a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29a8a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29a8a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29a8a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29a8ac:
    // 0x29a8ac: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x29a8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a8b0: 0xe4c001d4  swc1        $f0, 0x1D4($a2)
    ctx->pc = 0x29a8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 468), bits); }
label_29a8b4:
    // 0x29a8b4: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x29a8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a8b8: 0x94a201a8  lhu         $v0, 0x1A8($a1)
    ctx->pc = 0x29a8b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 424)));
    // 0x29a8bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x29a8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29a8c0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x29a8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x29a8c4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x29A8C4u;
    {
        const bool branch_taken_0x29a8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a8c4) {
            ctx->pc = 0x29A918u;
            goto label_29a918;
        }
    }
    ctx->pc = 0x29A8CCu;
    // 0x29a8cc: 0x3c174220  lui         $s7, 0x4220
    ctx->pc = 0x29a8ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)16928 << 16));
    // 0x29a8d0: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x29a8d0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a8d4: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a8d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29a8d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a8dc: 0x0  nop
    ctx->pc = 0x29a8dcu;
    // NOP
    // 0x29a8e0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x29A8E0u;
    {
        const bool branch_taken_0x29a8e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a8e0) {
            ctx->pc = 0x29A904u;
            goto label_29a904;
        }
    }
    ctx->pc = 0x29A8E8u;
    // 0x29a8e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29a8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29a8ec: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29a8ecu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a8f0: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a8f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29a8f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a8f8: 0x0  nop
    ctx->pc = 0x29a8f8u;
    // NOP
    // 0x29a8fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29A8FCu;
    {
        const bool branch_taken_0x29a8fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a8fc) {
            ctx->pc = 0x29A918u;
            goto label_29a918;
        }
    }
    ctx->pc = 0x29A904u;
label_29a904:
    // 0x29a904: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29a904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a908: 0xa06001c4  sb          $zero, 0x1C4($v1)
    ctx->pc = 0x29a908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 452), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a90c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x29a90cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29a910: 0x10000492  b           . + 4 + (0x492 << 2)
    ctx->pc = 0x29A910u;
    {
        const bool branch_taken_0x29a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a910) {
            ctx->pc = 0x29BB5Cu;
            goto label_29bb5c;
        }
    }
    ctx->pc = 0x29A918u;
label_29a918:
    // 0x29a918: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x29a918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x29a91c: 0x8c243580  lw          $a0, 0x3580($at)
    ctx->pc = 0x29a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x853580u));
    // 0x29a920: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x29a920u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x29a924: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29a924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a928: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x29a928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
    // 0x29a92c: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x29a92cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29a930: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29a930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29a934: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29a934u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a938: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x29a938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x29a93c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29a93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a940: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29a940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a944: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x29a944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x29a948: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29a948u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29a94c: 0x3c050eee  lui         $a1, 0xEEE
    ctx->pc = 0x29a94cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3822 << 16));
    // 0x29a950: 0x34a2eeee  ori         $v0, $a1, 0xEEEE
    ctx->pc = 0x29a950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61166);
    // 0x29a954: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29a954u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29a958: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29a95c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29a95cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a960: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a964: 0xdc420160  ld          $v0, 0x160($v0)
    ctx->pc = 0x29a964u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x29a968: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29a968u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29a96c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x29a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x29a970: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29a970u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29a974: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29a974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29a978: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29a978u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a97c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a980: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x29a980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a984: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x29a984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x29a988: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x29a988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x29a98c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29a98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29a990: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29a990u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29a994: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x29a994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x29a998: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x29a998u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x29a99c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29a9a0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29a9a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a9a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29a9a8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29a9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29a9ac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29a9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29a9b0: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x29a9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x29a9b4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29a9b8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29a9b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a9bc: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a9c0: 0xdc420168  ld          $v0, 0x168($v0)
    ctx->pc = 0x29a9c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x29a9c4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29a9c8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x29a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29a9cc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29a9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29a9d0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29a9d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29a9d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a9d8: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a9dc: 0xdc620170  ld          $v0, 0x170($v1)
    ctx->pc = 0x29a9dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 368)));
    // 0x29a9e0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29a9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29a9e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x29a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29a9e8: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29a9ec: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x29a9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29a9f0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a9f4: 0xdc450180  ld          $a1, 0x180($v0)
    ctx->pc = 0x29a9f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x29a9f8: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x29a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x29a9fc: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x29a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x29aa00: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29aa04: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x29aa04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29aa08: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x29aa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29aa0c: 0xdca20178  ld          $v0, 0x178($a1)
    ctx->pc = 0x29aa0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 376)));
    // 0x29aa10: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29aa14: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x29aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x29aa18: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29aa1c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29aa20: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29aa20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29aa24: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29aa28: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29aa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aa2c: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29aa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29aa30: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29aa34: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29aa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aa38: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x29aa38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x29aa3c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29aa40: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29aa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aa44: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x29aa44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x29aa48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29aa48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aa4c: 0x0  nop
    ctx->pc = 0x29aa4cu;
    // NOP
    // 0x29aa50: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x29aa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x29aa54: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x29aa54u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29aa58: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x29aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29aa5c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x29aa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29aa60: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29aa60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29aa64: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29AA64u;
    SET_GPR_U32(ctx, 31, 0x29AA6Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29AA6Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AA6Cu) { return; }
    ctx->pc = 0x29AA6Cu;
label_29aa6c:
    // 0x29aa6c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29aa70: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29aa70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29aa74: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29aa74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29aa78: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29aa78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29aa7c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29AA7Cu;
    SET_GPR_U32(ctx, 31, 0x29AA84u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29AA84u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AA84u) { return; }
    ctx->pc = 0x29AA84u;
label_29aa84:
    // 0x29aa84: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x29aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aa88: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29aa88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29aa8c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29aa90: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29aa90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29aa94: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29aa98: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x29aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29aa9c: 0xc040c60  jal         func_103180
    ctx->pc = 0x29AA9Cu;
    SET_GPR_U32(ctx, 31, 0x29AAA4u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29AAA4u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AAA4u) { return; }
    ctx->pc = 0x29AAA4u;
label_29aaa4:
    // 0x29aaa4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x29aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x29aaa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29aaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29aaac: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aab0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29aab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aab4: 0x0  nop
    ctx->pc = 0x29aab4u;
    // NOP
    // 0x29aab8: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x29AAB8u;
    {
        const bool branch_taken_0x29aab8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aab8) {
            ctx->pc = 0x29AB64u;
            goto label_29ab64;
        }
    }
    ctx->pc = 0x29AAC0u;
    // 0x29aac0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29aac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29aac4: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29aac4u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29aac8: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29aac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aacc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29aaccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aad0: 0x0  nop
    ctx->pc = 0x29aad0u;
    // NOP
    // 0x29aad4: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x29AAD4u;
    {
        const bool branch_taken_0x29aad4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aad4) {
            ctx->pc = 0x29AB64u;
            goto label_29ab64;
        }
    }
    ctx->pc = 0x29AADCu;
    // 0x29aadc: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x29aadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29aae0: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x29aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x29aae4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29aae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29aae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29aae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aaec: 0x0  nop
    ctx->pc = 0x29aaecu;
    // NOP
    // 0x29aaf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29aaf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aaf4: 0x0  nop
    ctx->pc = 0x29aaf4u;
    // NOP
    // 0x29aaf8: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x29AAF8u;
    {
        const bool branch_taken_0x29aaf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aaf8) {
            ctx->pc = 0x29AB64u;
            goto label_29ab64;
        }
    }
    ctx->pc = 0x29AB00u;
    // 0x29ab00: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x29ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ab04: 0x3c034516  lui         $v1, 0x4516
    ctx->pc = 0x29ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17686 << 16));
    // 0x29ab08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29ab08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ab0c: 0x0  nop
    ctx->pc = 0x29ab0cu;
    // NOP
    // 0x29ab10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ab10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ab14: 0x0  nop
    ctx->pc = 0x29ab14u;
    // NOP
    // 0x29ab18: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29AB18u;
    {
        const bool branch_taken_0x29ab18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ab18) {
            ctx->pc = 0x29AB64u;
            goto label_29ab64;
        }
    }
    ctx->pc = 0x29AB20u;
    // 0x29ab20: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x29ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ab24: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x29ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x29ab28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ab28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ab2c: 0x0  nop
    ctx->pc = 0x29ab2cu;
    // NOP
    // 0x29ab30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29ab30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ab34: 0x0  nop
    ctx->pc = 0x29ab34u;
    // NOP
    // 0x29ab38: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29AB38u;
    {
        const bool branch_taken_0x29ab38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ab38) {
            ctx->pc = 0x29AB64u;
            goto label_29ab64;
        }
    }
    ctx->pc = 0x29AB40u;
    // 0x29ab40: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x29ab40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ab44: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29ab48: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29ab48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29ab4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ab4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ab50: 0x0  nop
    ctx->pc = 0x29ab50u;
    // NOP
    // 0x29ab54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ab54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ab58: 0x0  nop
    ctx->pc = 0x29ab58u;
    // NOP
    // 0x29ab5c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29AB5Cu;
    {
        const bool branch_taken_0x29ab5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ab5c) {
            ctx->pc = 0x29AB70u;
            goto label_29ab70;
        }
    }
    ctx->pc = 0x29AB64u;
label_29ab64:
    // 0x29ab64: 0x36250001  ori         $a1, $s1, 0x1
    ctx->pc = 0x29ab64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x29ab68: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x29ab68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x29ab6c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x29ab6cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29ab70:
    // 0x29ab70: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x29ab74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29ab74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29ab78: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x29ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ab7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29ab7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29ab80: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29ab80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29ab84: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x29ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29ab88: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29ab88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29ab8c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x29ab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29ab90: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29ab90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29ab94: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29AB94u;
    SET_GPR_U32(ctx, 31, 0x29AB9Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29AB9Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AB9Cu) { return; }
    ctx->pc = 0x29AB9Cu;
label_29ab9c:
    // 0x29ab9c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x29ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29aba0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29aba0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29aba4: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29aba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29aba8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29ABA8u;
    SET_GPR_U32(ctx, 31, 0x29ABB0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29ABB0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29ABB0u) { return; }
    ctx->pc = 0x29ABB0u;
label_29abb0:
    // 0x29abb0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x29abb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29abb4: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29abb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29abb8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x29abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29abbc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x29abbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29abc0: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x29abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29abc4: 0xc040c60  jal         func_103180
    ctx->pc = 0x29ABC4u;
    SET_GPR_U32(ctx, 31, 0x29ABCCu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29ABCCu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29ABCCu) { return; }
    ctx->pc = 0x29ABCCu;
label_29abcc:
    // 0x29abcc: 0x3c054220  lui         $a1, 0x4220
    ctx->pc = 0x29abccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16928 << 16));
    // 0x29abd0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x29abd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29abd4: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29abd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29abd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29abd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29abdc: 0x0  nop
    ctx->pc = 0x29abdcu;
    // NOP
    // 0x29abe0: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x29ABE0u;
    {
        const bool branch_taken_0x29abe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29abe0) {
            ctx->pc = 0x29AC8Cu;
            goto label_29ac8c;
        }
    }
    ctx->pc = 0x29ABE8u;
    // 0x29abe8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29abe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29abec: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29abecu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29abf0: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29abf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29abf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29abf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29abf8: 0x0  nop
    ctx->pc = 0x29abf8u;
    // NOP
    // 0x29abfc: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x29ABFCu;
    {
        const bool branch_taken_0x29abfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29abfc) {
            ctx->pc = 0x29AC8Cu;
            goto label_29ac8c;
        }
    }
    ctx->pc = 0x29AC04u;
    // 0x29ac04: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x29ac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ac08: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x29ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x29ac0c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29ac0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29ac10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ac10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ac14: 0x0  nop
    ctx->pc = 0x29ac14u;
    // NOP
    // 0x29ac18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29ac18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac1c: 0x0  nop
    ctx->pc = 0x29ac1cu;
    // NOP
    // 0x29ac20: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x29AC20u;
    {
        const bool branch_taken_0x29ac20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac20) {
            ctx->pc = 0x29AC8Cu;
            goto label_29ac8c;
        }
    }
    ctx->pc = 0x29AC28u;
    // 0x29ac28: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x29ac28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ac2c: 0x3c054516  lui         $a1, 0x4516
    ctx->pc = 0x29ac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17686 << 16));
    // 0x29ac30: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29ac30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ac34: 0x0  nop
    ctx->pc = 0x29ac34u;
    // NOP
    // 0x29ac38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ac38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac3c: 0x0  nop
    ctx->pc = 0x29ac3cu;
    // NOP
    // 0x29ac40: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29AC40u;
    {
        const bool branch_taken_0x29ac40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac40) {
            ctx->pc = 0x29AC8Cu;
            goto label_29ac8c;
        }
    }
    ctx->pc = 0x29AC48u;
    // 0x29ac48: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x29ac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ac4c: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x29ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x29ac50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ac50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ac54: 0x0  nop
    ctx->pc = 0x29ac54u;
    // NOP
    // 0x29ac58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29ac58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac5c: 0x0  nop
    ctx->pc = 0x29ac5cu;
    // NOP
    // 0x29ac60: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29AC60u;
    {
        const bool branch_taken_0x29ac60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac60) {
            ctx->pc = 0x29AC8Cu;
            goto label_29ac8c;
        }
    }
    ctx->pc = 0x29AC68u;
    // 0x29ac68: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x29ac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ac6c: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29ac70: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29ac70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29ac74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ac74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ac78: 0x0  nop
    ctx->pc = 0x29ac78u;
    // NOP
    // 0x29ac7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ac7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac80: 0x0  nop
    ctx->pc = 0x29ac80u;
    // NOP
    // 0x29ac84: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29AC84u;
    {
        const bool branch_taken_0x29ac84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac84) {
            ctx->pc = 0x29AC98u;
            goto label_29ac98;
        }
    }
    ctx->pc = 0x29AC8Cu;
label_29ac8c:
    // 0x29ac8c: 0x36220002  ori         $v0, $s1, 0x2
    ctx->pc = 0x29ac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    // 0x29ac90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29ac90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29ac94: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x29ac94u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29ac98:
    // 0x29ac98: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x29ac98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x29ac9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29ac9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29aca0: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x29aca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aca4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29aca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29aca8: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29aca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29acac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29acacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x29acb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29acb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29acb4: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x29acb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29acb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29acb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29acbc: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x29acbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x29acc0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x29acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29acc4: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x29acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29acc8: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29acc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29accc: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29ACCCu;
    SET_GPR_U32(ctx, 31, 0x29ACD4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29ACD4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29ACD4u) { return; }
    ctx->pc = 0x29ACD4u;
label_29acd4:
    // 0x29acd4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29acd8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29acd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29acdc: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29acdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29ace0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29ACE0u;
    SET_GPR_U32(ctx, 31, 0x29ACE8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29ACE8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29ACE8u) { return; }
    ctx->pc = 0x29ACE8u;
label_29ace8:
    // 0x29ace8: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x29ace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29acec: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29acecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29acf0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29acf4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x29acf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29acf8: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x29acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29acfc: 0xc040c60  jal         func_103180
    ctx->pc = 0x29ACFCu;
    SET_GPR_U32(ctx, 31, 0x29AD04u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29AD04u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29AD04u) { return; }
    ctx->pc = 0x29AD04u;
label_29ad04:
    // 0x29ad04: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x29ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x29ad08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29ad08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29ad0c: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ad10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ad10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad14: 0x0  nop
    ctx->pc = 0x29ad14u;
    // NOP
    // 0x29ad18: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x29AD18u;
    {
        const bool branch_taken_0x29ad18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad18) {
            ctx->pc = 0x29ADC4u;
            goto label_29adc4;
        }
    }
    ctx->pc = 0x29AD20u;
    // 0x29ad20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29ad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29ad24: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29ad24u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ad28: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29ad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ad2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ad2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad30: 0x0  nop
    ctx->pc = 0x29ad30u;
    // NOP
    // 0x29ad34: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x29AD34u;
    {
        const bool branch_taken_0x29ad34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad34) {
            ctx->pc = 0x29ADC4u;
            goto label_29adc4;
        }
    }
    ctx->pc = 0x29AD3Cu;
    // 0x29ad3c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x29ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ad40: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x29ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x29ad44: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29ad44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29ad48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ad48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ad4c: 0x0  nop
    ctx->pc = 0x29ad4cu;
    // NOP
    // 0x29ad50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29ad50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad54: 0x0  nop
    ctx->pc = 0x29ad54u;
    // NOP
    // 0x29ad58: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x29AD58u;
    {
        const bool branch_taken_0x29ad58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad58) {
            ctx->pc = 0x29ADC4u;
            goto label_29adc4;
        }
    }
    ctx->pc = 0x29AD60u;
    // 0x29ad60: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x29ad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ad64: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x29ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x29ad68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ad68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ad6c: 0x0  nop
    ctx->pc = 0x29ad6cu;
    // NOP
    // 0x29ad70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ad70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad74: 0x0  nop
    ctx->pc = 0x29ad74u;
    // NOP
    // 0x29ad78: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29AD78u;
    {
        const bool branch_taken_0x29ad78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad78) {
            ctx->pc = 0x29ADC4u;
            goto label_29adc4;
        }
    }
    ctx->pc = 0x29AD80u;
    // 0x29ad80: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x29ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ad84: 0x3c0544e1  lui         $a1, 0x44E1
    ctx->pc = 0x29ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17633 << 16));
    // 0x29ad88: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29ad88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ad8c: 0x0  nop
    ctx->pc = 0x29ad8cu;
    // NOP
    // 0x29ad90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29ad90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad94: 0x0  nop
    ctx->pc = 0x29ad94u;
    // NOP
    // 0x29ad98: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29AD98u;
    {
        const bool branch_taken_0x29ad98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad98) {
            ctx->pc = 0x29ADC4u;
            goto label_29adc4;
        }
    }
    ctx->pc = 0x29ADA0u;
    // 0x29ada0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x29ada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ada4: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29ada8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29ada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29adac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29adacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29adb0: 0x0  nop
    ctx->pc = 0x29adb0u;
    // NOP
    // 0x29adb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29adb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29adb8: 0x0  nop
    ctx->pc = 0x29adb8u;
    // NOP
    // 0x29adbc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29ADBCu;
    {
        const bool branch_taken_0x29adbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29adbc) {
            ctx->pc = 0x29ADD0u;
            goto label_29add0;
        }
    }
    ctx->pc = 0x29ADC4u;
label_29adc4:
    // 0x29adc4: 0x36250004  ori         $a1, $s1, 0x4
    ctx->pc = 0x29adc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
    // 0x29adc8: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x29adc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x29adcc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x29adccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29add0:
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
            goto label_29aef0;
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
            goto label_29aef0;
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
            goto label_29aef0;
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
            goto label_29aef0;
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
            goto label_29aef0;
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
            goto label_29aefc;
        }
    }
    ctx->pc = 0x29AEF0u;
label_29aef0:
    // 0x29aef0: 0x36250008  ori         $a1, $s1, 0x8
    ctx->pc = 0x29aef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
    // 0x29aef4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x29aef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x29aef8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x29aef8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29aefc:
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
            goto label_29b034;
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
            goto label_29b034;
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
            goto label_29b034;
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
            goto label_29b034;
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
            goto label_29b034;
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
            goto label_29b040;
        }
    }
    ctx->pc = 0x29B034u;
label_29b034:
    // 0x29b034: 0x36230010  ori         $v1, $s1, 0x10
    ctx->pc = 0x29b034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16);
    // 0x29b038: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x29b038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29b03c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x29b03cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29b040:
    // 0x29b040: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29b040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x29b044: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29b044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b048: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x29b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b04c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29b04cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29b050: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29b050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29b054: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x29b054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29b058: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x29b058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29b05c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29b05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29b060: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29B060u;
    SET_GPR_U32(ctx, 31, 0x29B068u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29B068u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B068u) { return; }
    ctx->pc = 0x29B068u;
label_29b068:
    // 0x29b068: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x29b068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x29b06c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29b06cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29b070: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29b070u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29b074: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29b074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29b078: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29B078u;
    SET_GPR_U32(ctx, 31, 0x29B080u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29B080u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B080u) { return; }
    ctx->pc = 0x29B080u;
label_29b080:
    // 0x29b080: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x29b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b084: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29b088: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x29b088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x29b08c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29b08cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29b090: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x29b090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x29b094: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x29b094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29b098: 0xc040c60  jal         func_103180
    ctx->pc = 0x29B098u;
    SET_GPR_U32(ctx, 31, 0x29B0A0u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29B0A0u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B0A0u) { return; }
    ctx->pc = 0x29B0A0u;
label_29b0a0:
    // 0x29b0a0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x29b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x29b0a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29b0a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b0a8: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b0ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b0acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b0b0: 0x0  nop
    ctx->pc = 0x29b0b0u;
    // NOP
    // 0x29b0b4: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x29B0B4u;
    {
        const bool branch_taken_0x29b0b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b0b4) {
            ctx->pc = 0x29B160u;
            goto label_29b160;
        }
    }
    ctx->pc = 0x29B0BCu;
    // 0x29b0bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29b0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29b0c0: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29b0c0u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b0c4: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b0c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b0c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b0cc: 0x0  nop
    ctx->pc = 0x29b0ccu;
    // NOP
    // 0x29b0d0: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x29B0D0u;
    {
        const bool branch_taken_0x29b0d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b0d0) {
            ctx->pc = 0x29B160u;
            goto label_29b160;
        }
    }
    ctx->pc = 0x29B0D8u;
    // 0x29b0d8: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x29b0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b0dc: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x29b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x29b0e0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29b0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29b0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b0e8: 0x0  nop
    ctx->pc = 0x29b0e8u;
    // NOP
    // 0x29b0ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29b0ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b0f0: 0x0  nop
    ctx->pc = 0x29b0f0u;
    // NOP
    // 0x29b0f4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x29B0F4u;
    {
        const bool branch_taken_0x29b0f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b0f4) {
            ctx->pc = 0x29B160u;
            goto label_29b160;
        }
    }
    ctx->pc = 0x29B0FCu;
    // 0x29b0fc: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x29b0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b100: 0x3c034516  lui         $v1, 0x4516
    ctx->pc = 0x29b100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17686 << 16));
    // 0x29b104: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29b104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b108: 0x0  nop
    ctx->pc = 0x29b108u;
    // NOP
    // 0x29b10c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b10cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b110: 0x0  nop
    ctx->pc = 0x29b110u;
    // NOP
    // 0x29b114: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29B114u;
    {
        const bool branch_taken_0x29b114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b114) {
            ctx->pc = 0x29B160u;
            goto label_29b160;
        }
    }
    ctx->pc = 0x29B11Cu;
    // 0x29b11c: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x29b11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b120: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x29b120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x29b124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b128: 0x0  nop
    ctx->pc = 0x29b128u;
    // NOP
    // 0x29b12c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29b12cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b130: 0x0  nop
    ctx->pc = 0x29b130u;
    // NOP
    // 0x29b134: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29B134u;
    {
        const bool branch_taken_0x29b134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b134) {
            ctx->pc = 0x29B160u;
            goto label_29b160;
        }
    }
    ctx->pc = 0x29B13Cu;
    // 0x29b13c: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x29b13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b140: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29b140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29b144: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29b144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29b148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b14c: 0x0  nop
    ctx->pc = 0x29b14cu;
    // NOP
    // 0x29b150: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b154: 0x0  nop
    ctx->pc = 0x29b154u;
    // NOP
    // 0x29b158: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29B158u;
    {
        const bool branch_taken_0x29b158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b158) {
            ctx->pc = 0x29B16Cu;
            goto label_29b16c;
        }
    }
    ctx->pc = 0x29B160u;
label_29b160:
    // 0x29b160: 0x36220020  ori         $v0, $s1, 0x20
    ctx->pc = 0x29b160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32);
    // 0x29b164: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x29b164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29b168: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x29b168u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_29b16c:
    // 0x29b16c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x29b170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29b170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b174: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x29b174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b178: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29b178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29b17c: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29b17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29b180: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29b180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x29b184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29b184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b188: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x29b188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b18c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29b18cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29b190: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x29b190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x29b194: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x29b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29b198: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29b198u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b19c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x29b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29b1a0: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29b1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29b1a4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29B1A4u;
    SET_GPR_U32(ctx, 31, 0x29B1ACu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29B1ACu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B1ACu) { return; }
    ctx->pc = 0x29B1ACu;
label_29b1ac:
    // 0x29b1ac: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x29b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x29b1b0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29b1b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29b1b4: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29b1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29b1b8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29B1B8u;
    SET_GPR_U32(ctx, 31, 0x29B1C0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29B1C0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B1C0u) { return; }
    ctx->pc = 0x29B1C0u;
label_29b1c0:
    // 0x29b1c0: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x29b1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b1c4: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29b1c8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x29b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x29b1cc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x29b1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x29b1d0: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x29b1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29b1d4: 0xc040c60  jal         func_103180
    ctx->pc = 0x29B1D4u;
    SET_GPR_U32(ctx, 31, 0x29B1DCu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29B1DCu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B1DCu) { return; }
    ctx->pc = 0x29B1DCu;
label_29b1dc:
    // 0x29b1dc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x29b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x29b1e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29b1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b1e4: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b1e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b1ec: 0x0  nop
    ctx->pc = 0x29b1ecu;
    // NOP
    // 0x29b1f0: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x29B1F0u;
    {
        const bool branch_taken_0x29b1f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b1f0) {
            ctx->pc = 0x29B29Cu;
            goto label_29b29c;
        }
    }
    ctx->pc = 0x29B1F8u;
    // 0x29b1f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29b1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29b1fc: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29b1fcu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b200: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b204: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b208: 0x0  nop
    ctx->pc = 0x29b208u;
    // NOP
    // 0x29b20c: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x29B20Cu;
    {
        const bool branch_taken_0x29b20c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b20c) {
            ctx->pc = 0x29B29Cu;
            goto label_29b29c;
        }
    }
    ctx->pc = 0x29B214u;
    // 0x29b214: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x29b214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b218: 0x3c0444d4  lui         $a0, 0x44D4
    ctx->pc = 0x29b218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17620 << 16));
    // 0x29b21c: 0x34858000  ori         $a1, $a0, 0x8000
    ctx->pc = 0x29b21cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x29b220: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29b220u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b224: 0x0  nop
    ctx->pc = 0x29b224u;
    // NOP
    // 0x29b228: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29b228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b22c: 0x0  nop
    ctx->pc = 0x29b22cu;
    // NOP
    // 0x29b230: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x29B230u;
    {
        const bool branch_taken_0x29b230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b230) {
            ctx->pc = 0x29B29Cu;
            goto label_29b29c;
        }
    }
    ctx->pc = 0x29B238u;
    // 0x29b238: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x29b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b23c: 0x3c054516  lui         $a1, 0x4516
    ctx->pc = 0x29b23cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17686 << 16));
    // 0x29b240: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29b240u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b244: 0x0  nop
    ctx->pc = 0x29b244u;
    // NOP
    // 0x29b248: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b24c: 0x0  nop
    ctx->pc = 0x29b24cu;
    // NOP
    // 0x29b250: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29B250u;
    {
        const bool branch_taken_0x29b250 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b250) {
            ctx->pc = 0x29B29Cu;
            goto label_29b29c;
        }
    }
    ctx->pc = 0x29B258u;
    // 0x29b258: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x29b258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b25c: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x29b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x29b260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b264: 0x0  nop
    ctx->pc = 0x29b264u;
    // NOP
    // 0x29b268: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29b268u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b26c: 0x0  nop
    ctx->pc = 0x29b26cu;
    // NOP
    // 0x29b270: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29B270u;
    {
        const bool branch_taken_0x29b270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b270) {
            ctx->pc = 0x29B29Cu;
            goto label_29b29c;
        }
    }
    ctx->pc = 0x29B278u;
    // 0x29b278: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x29b278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b27c: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29b280: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29b280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29b284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b288: 0x0  nop
    ctx->pc = 0x29b288u;
    // NOP
    // 0x29b28c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b28cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b290: 0x0  nop
    ctx->pc = 0x29b290u;
    // NOP
    // 0x29b294: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x29B294u;
    {
        const bool branch_taken_0x29b294 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b294) {
            ctx->pc = 0x29B2A4u;
            goto label_29b2a4;
        }
    }
    ctx->pc = 0x29B29Cu;
label_29b29c:
    // 0x29b29c: 0x36220040  ori         $v0, $s1, 0x40
    ctx->pc = 0x29b29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)64);
    // 0x29b2a0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x29b2a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_29b2a4:
    // 0x29b2a4: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x29b2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
    // 0x29b2a8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x29b2a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b2ac: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x29b2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b2b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29b2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29b2b4: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29b2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29b2b8: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x29b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29b2bc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x29b2bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x29b2c0: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x29b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29b2c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b2c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b2c8: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29b2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29b2cc: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29B2CCu;
    SET_GPR_U32(ctx, 31, 0x29B2D4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29B2D4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B2D4u) { return; }
    ctx->pc = 0x29B2D4u;
label_29b2d4:
    // 0x29b2d4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x29b2d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b2d8: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x29b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x29b2dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29b2dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b2e0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29b2e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29b2e4: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29b2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29b2e8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29B2E8u;
    SET_GPR_U32(ctx, 31, 0x29B2F0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29B2F0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B2F0u) { return; }
    ctx->pc = 0x29B2F0u;
label_29b2f0:
    // 0x29b2f0: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x29b2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b2f4: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29b2f8: 0x27b50130  addiu       $s5, $sp, 0x130
    ctx->pc = 0x29b2f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x29b2fc: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x29b2fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x29b300: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x29b300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x29b304: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x29b304u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x29b308: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x29b308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29b30c: 0xc040c60  jal         func_103180
    ctx->pc = 0x29B30Cu;
    SET_GPR_U32(ctx, 31, 0x29B314u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29B314u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B314u) { return; }
    ctx->pc = 0x29B314u;
label_29b314:
    // 0x29b314: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x29b314u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b318: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x29b318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x29b31c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29b31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b320: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b324: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b328: 0x0  nop
    ctx->pc = 0x29b328u;
    // NOP
    // 0x29b32c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x29B32Cu;
    {
        const bool branch_taken_0x29b32c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b32c) {
            ctx->pc = 0x29B3D8u;
            goto label_29b3d8;
        }
    }
    ctx->pc = 0x29B334u;
    // 0x29b334: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29b334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29b338: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29b338u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b33c: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b340: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b344: 0x0  nop
    ctx->pc = 0x29b344u;
    // NOP
    // 0x29b348: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x29B348u;
    {
        const bool branch_taken_0x29b348 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b348) {
            ctx->pc = 0x29B3D8u;
            goto label_29b3d8;
        }
    }
    ctx->pc = 0x29B350u;
    // 0x29b350: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x29b350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b354: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x29b354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x29b358: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x29b358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29b35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b360: 0x0  nop
    ctx->pc = 0x29b360u;
    // NOP
    // 0x29b364: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29b364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b368: 0x0  nop
    ctx->pc = 0x29b368u;
    // NOP
    // 0x29b36c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x29B36Cu;
    {
        const bool branch_taken_0x29b36c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b36c) {
            ctx->pc = 0x29B3D8u;
            goto label_29b3d8;
        }
    }
    ctx->pc = 0x29B374u;
    // 0x29b374: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x29b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b378: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x29b378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x29b37c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b380: 0x0  nop
    ctx->pc = 0x29b380u;
    // NOP
    // 0x29b384: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b388: 0x0  nop
    ctx->pc = 0x29b388u;
    // NOP
    // 0x29b38c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29B38Cu;
    {
        const bool branch_taken_0x29b38c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b38c) {
            ctx->pc = 0x29B3D8u;
            goto label_29b3d8;
        }
    }
    ctx->pc = 0x29B394u;
    // 0x29b394: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x29b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b398: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x29b398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x29b39c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b3a0: 0x0  nop
    ctx->pc = 0x29b3a0u;
    // NOP
    // 0x29b3a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29b3a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b3a8: 0x0  nop
    ctx->pc = 0x29b3a8u;
    // NOP
    // 0x29b3ac: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29B3ACu;
    {
        const bool branch_taken_0x29b3ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b3ac) {
            ctx->pc = 0x29B3D8u;
            goto label_29b3d8;
        }
    }
    ctx->pc = 0x29B3B4u;
    // 0x29b3b4: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x29b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b3b8: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29b3bc: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x29b3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29b3c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29b3c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b3c4: 0x0  nop
    ctx->pc = 0x29b3c4u;
    // NOP
    // 0x29b3c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b3c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b3cc: 0x0  nop
    ctx->pc = 0x29b3ccu;
    // NOP
    // 0x29b3d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x29B3D0u;
    {
        const bool branch_taken_0x29b3d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b3d0) {
            ctx->pc = 0x29B3E0u;
            goto label_29b3e0;
        }
    }
    ctx->pc = 0x29B3D8u;
label_29b3d8:
    // 0x29b3d8: 0x36220080  ori         $v0, $s1, 0x80
    ctx->pc = 0x29b3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)128);
    // 0x29b3dc: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x29b3dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_29b3e0:
    // 0x29b3e0: 0x7200b628  paddub      $s6, $s0, $zero
    ctx->pc = 0x29b3e0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b3e4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b3e8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b3e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b3ec: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b3ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b3f0: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x29b3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b3f4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x29b3f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29b3f8: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B3F8u;
    SET_GPR_U32(ctx, 31, 0x29B400u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B400u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B400u) { return; }
    ctx->pc = 0x29B400u;
label_29b400:
    // 0x29b400: 0x26140010  addiu       $s4, $s0, 0x10
    ctx->pc = 0x29b400u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b404: 0x72808628  paddub      $s0, $s4, $zero
    ctx->pc = 0x29b404u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x29b408: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b408u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b40c: 0x27b500c0  addiu       $s5, $sp, 0xC0
    ctx->pc = 0x29b40cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29b410: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x29b410u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x29b414: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B414u;
    SET_GPR_U32(ctx, 31, 0x29B41Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B41Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B41Cu) { return; }
    ctx->pc = 0x29B41Cu;
label_29b41c:
    // 0x29b41c: 0x3234ffff  andi        $s4, $s1, 0xFFFF
    ctx->pc = 0x29b41cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b420: 0x32940001  andi        $s4, $s4, 0x1
    ctx->pc = 0x29b420u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x29b424: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B424u;
    {
        const bool branch_taken_0x29b424 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b424) {
            ctx->pc = 0x29B43Cu;
            goto label_29b43c;
        }
    }
    ctx->pc = 0x29B42Cu;
    // 0x29b42c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b430: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x29b430u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b434: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B434u;
    {
        const bool branch_taken_0x29b434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b434) {
            ctx->pc = 0x29B440u;
            goto label_29b440;
        }
    }
    ctx->pc = 0x29B43Cu;
label_29b43c:
    // 0x29b43c: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x29b43cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_29b440:
    // 0x29b440: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x29b440u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b444: 0x5e3825  or          $a3, $v0, $fp
    ctx->pc = 0x29b444u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x29b448: 0xfe070008  sd          $a3, 0x8($s0)
    ctx->pc = 0x29b448u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 7));
    // 0x29b44c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x29b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b450: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x29b450u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x29b454: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b454u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b458: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x29b458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b45c: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B45Cu;
    SET_GPR_U32(ctx, 31, 0x29B464u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B464u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B464u) { return; }
    ctx->pc = 0x29B464u;
label_29b464:
    // 0x29b464: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x29b464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b468: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x29b468u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29b46c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b46cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b470: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x29b470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29b474: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B474u;
    SET_GPR_U32(ctx, 31, 0x29B47Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B47Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B47Cu) { return; }
    ctx->pc = 0x29B47Cu;
label_29b47c:
    // 0x29b47c: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x29b47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b480: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x29b480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x29b484: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B484u;
    {
        const bool branch_taken_0x29b484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b484) {
            ctx->pc = 0x29B4A0u;
            goto label_29b4a0;
        }
    }
    ctx->pc = 0x29B48Cu;
    // 0x29b48c: 0x34178000  ori         $s7, $zero, 0x8000
    ctx->pc = 0x29b48cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b490: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x29b490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x29b494: 0xffa301a0  sd          $v1, 0x1A0($sp)
    ctx->pc = 0x29b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 3));
    // 0x29b498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B498u;
    {
        const bool branch_taken_0x29b498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b498) {
            ctx->pc = 0x29B4A4u;
            goto label_29b4a4;
        }
    }
    ctx->pc = 0x29B4A0u;
label_29b4a0:
    // 0x29b4a0: 0xffa001a0  sd          $zero, 0x1A0($sp)
    ctx->pc = 0x29b4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 0));
label_29b4a4:
    // 0x29b4a4: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x29b4a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b4a8: 0xdfa301a0  ld          $v1, 0x1A0($sp)
    ctx->pc = 0x29b4a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x29b4ac: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x29b4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29b4b0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b4b4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b4b8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b4b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b4bc: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29b4c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b4c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b4c4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29b4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29b4c8: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B4C8u;
    SET_GPR_U32(ctx, 31, 0x29B4D0u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B4D0u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B4D0u) { return; }
    ctx->pc = 0x29B4D0u;
label_29b4d0:
    // 0x29b4d0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b4d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b4d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b4d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b4d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b4dc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x29b4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29b4e0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B4E0u;
    SET_GPR_U32(ctx, 31, 0x29B4E8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B4E8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B4E8u) { return; }
    ctx->pc = 0x29B4E8u;
label_29b4e8:
    // 0x29b4e8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b4ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x29b4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x29b4f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B4F0u;
    {
        const bool branch_taken_0x29b4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b4f0) {
            ctx->pc = 0x29B50Cu;
            goto label_29b50c;
        }
    }
    ctx->pc = 0x29B4F8u;
    // 0x29b4f8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b4fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b500: 0xffa201a8  sd          $v0, 0x1A8($sp)
    ctx->pc = 0x29b500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 2));
    // 0x29b504: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B504u;
    {
        const bool branch_taken_0x29b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b504) {
            ctx->pc = 0x29B510u;
            goto label_29b510;
        }
    }
    ctx->pc = 0x29B50Cu;
label_29b50c:
    // 0x29b50c: 0xffa001a8  sd          $zero, 0x1A8($sp)
    ctx->pc = 0x29b50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 0));
label_29b510:
    // 0x29b510: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x29b510u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b514: 0xdfa301a8  ld          $v1, 0x1A8($sp)
    ctx->pc = 0x29b514u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29b518: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29b518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29b51c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b51cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b520: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b524: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b524u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b528: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29b52c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b52cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b530: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29b530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29b534: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B534u;
    SET_GPR_U32(ctx, 31, 0x29B53Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B53Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B53Cu) { return; }
    ctx->pc = 0x29B53Cu;
label_29b53c:
    // 0x29b53c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b540: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b540u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b544: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b544u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b548: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x29b548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29b54c: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B54Cu;
    SET_GPR_U32(ctx, 31, 0x29B554u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B554u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B554u) { return; }
    ctx->pc = 0x29B554u;
label_29b554:
    // 0x29b554: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b558: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29b558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x29b55c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B55Cu;
    {
        const bool branch_taken_0x29b55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b55c) {
            ctx->pc = 0x29B578u;
            goto label_29b578;
        }
    }
    ctx->pc = 0x29B564u;
    // 0x29b564: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b568: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b56c: 0xffa201b0  sd          $v0, 0x1B0($sp)
    ctx->pc = 0x29b56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 2));
    // 0x29b570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B570u;
    {
        const bool branch_taken_0x29b570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b570) {
            ctx->pc = 0x29B57Cu;
            goto label_29b57c;
        }
    }
    ctx->pc = 0x29B578u;
label_29b578:
    // 0x29b578: 0xffa001b0  sd          $zero, 0x1B0($sp)
    ctx->pc = 0x29b578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 0));
label_29b57c:
    // 0x29b57c: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29b57cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b580: 0xdfa201b0  ld          $v0, 0x1B0($sp)
    ctx->pc = 0x29b580u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29b584: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29b584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b588: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b588u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b58c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x29b58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b590: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29b594: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b594u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b598: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29b598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29b59c: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B59Cu;
    SET_GPR_U32(ctx, 31, 0x29B5A4u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B5A4u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B5A4u) { return; }
    ctx->pc = 0x29B5A4u;
label_29b5a4:
    // 0x29b5a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x29b5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b5a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b5a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b5ac: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x29b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x29b5b0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B5B0u;
    SET_GPR_U32(ctx, 31, 0x29B5B8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B5B8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B5B8u) { return; }
    ctx->pc = 0x29B5B8u;
label_29b5b8:
    // 0x29b5b8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b5bc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x29b5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x29b5c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B5C0u;
    {
        const bool branch_taken_0x29b5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b5c0) {
            ctx->pc = 0x29B5DCu;
            goto label_29b5dc;
        }
    }
    ctx->pc = 0x29B5C8u;
    // 0x29b5c8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b5cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b5d0: 0xffa201b8  sd          $v0, 0x1B8($sp)
    ctx->pc = 0x29b5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 2));
    // 0x29b5d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B5D4u;
    {
        const bool branch_taken_0x29b5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b5d4) {
            ctx->pc = 0x29B5E0u;
            goto label_29b5e0;
        }
    }
    ctx->pc = 0x29B5DCu;
label_29b5dc:
    // 0x29b5dc: 0xffa001b8  sd          $zero, 0x1B8($sp)
    ctx->pc = 0x29b5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 0));
label_29b5e0:
    // 0x29b5e0: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x29b5e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b5e4: 0xdfa401b8  ld          $a0, 0x1B8($sp)
    ctx->pc = 0x29b5e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x29b5e8: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x29b5e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x29b5ec: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x29b5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x29b5f0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x29b5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b5f4: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x29b5f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29b5f8: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29b5fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b5fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b600: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29b600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29b604: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B604u;
    SET_GPR_U32(ctx, 31, 0x29B60Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B60Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B60Cu) { return; }
    ctx->pc = 0x29B60Cu;
label_29b60c:
    // 0x29b60c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x29b60cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b610: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b614: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b614u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b618: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b618u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b61c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x29b61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x29b620: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B620u;
    SET_GPR_U32(ctx, 31, 0x29B628u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B628u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B628u) { return; }
    ctx->pc = 0x29B628u;
label_29b628:
    // 0x29b628: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b628u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b62c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b630: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x29b630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x29b634: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B634u;
    {
        const bool branch_taken_0x29b634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b634) {
            ctx->pc = 0x29B650u;
            goto label_29b650;
        }
    }
    ctx->pc = 0x29B63Cu;
    // 0x29b63c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b640: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b644: 0xffa201c0  sd          $v0, 0x1C0($sp)
    ctx->pc = 0x29b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 2));
    // 0x29b648: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B648u;
    {
        const bool branch_taken_0x29b648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b648) {
            ctx->pc = 0x29B654u;
            goto label_29b654;
        }
    }
    ctx->pc = 0x29B650u;
label_29b650:
    // 0x29b650: 0xffa001c0  sd          $zero, 0x1C0($sp)
    ctx->pc = 0x29b650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 0));
label_29b654:
    // 0x29b654: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29b654u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b658: 0xdfa201c0  ld          $v0, 0x1C0($sp)
    ctx->pc = 0x29b658u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x29b65c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29b65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b660: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b660u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b664: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b668: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b668u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b66c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b66cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b670: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x29b670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b674: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B674u;
    SET_GPR_U32(ctx, 31, 0x29B67Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B67Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B67Cu) { return; }
    ctx->pc = 0x29B67Cu;
label_29b67c:
    // 0x29b67c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b680: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b680u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b684: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b684u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b688: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x29b688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x29b68c: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B68Cu;
    SET_GPR_U32(ctx, 31, 0x29B694u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B694u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B694u) { return; }
    ctx->pc = 0x29B694u;
label_29b694:
    // 0x29b694: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b698: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x29b698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b69c: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x29b69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x29b6a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B6A0u;
    {
        const bool branch_taken_0x29b6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b6a0) {
            ctx->pc = 0x29B6BCu;
            goto label_29b6bc;
        }
    }
    ctx->pc = 0x29B6A8u;
    // 0x29b6a8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x29b6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b6ac: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x29b6acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29b6b0: 0xffa601c8  sd          $a2, 0x1C8($sp)
    ctx->pc = 0x29b6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 6));
    // 0x29b6b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B6B4u;
    {
        const bool branch_taken_0x29b6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b6b4) {
            ctx->pc = 0x29B6C0u;
            goto label_29b6c0;
        }
    }
    ctx->pc = 0x29B6BCu;
label_29b6bc:
    // 0x29b6bc: 0xffa001c8  sd          $zero, 0x1C8($sp)
    ctx->pc = 0x29b6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 0));
label_29b6c0:
    // 0x29b6c0: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x29b6c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b6c4: 0xdfa401c8  ld          $a0, 0x1C8($sp)
    ctx->pc = 0x29b6c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x29b6c8: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x29b6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x29b6cc: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x29b6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x29b6d0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b6d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b6d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b6d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b6d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b6dc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x29b6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b6e0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B6E0u;
    SET_GPR_U32(ctx, 31, 0x29B6E8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B6E8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B6E8u) { return; }
    ctx->pc = 0x29B6E8u;
label_29b6e8:
    // 0x29b6e8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b6ec: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b6ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b6f0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b6f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b6f4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x29b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x29b6f8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B6F8u;
    SET_GPR_U32(ctx, 31, 0x29B700u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B700u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B700u) { return; }
    ctx->pc = 0x29B700u;
label_29b700:
    // 0x29b700: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b704: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x29b704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x29b708: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B708u;
    {
        const bool branch_taken_0x29b708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b708) {
            ctx->pc = 0x29B724u;
            goto label_29b724;
        }
    }
    ctx->pc = 0x29B710u;
    // 0x29b710: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b714: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b718: 0xffa201d0  sd          $v0, 0x1D0($sp)
    ctx->pc = 0x29b718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 2));
    // 0x29b71c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B71Cu;
    {
        const bool branch_taken_0x29b71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b71c) {
            ctx->pc = 0x29B728u;
            goto label_29b728;
        }
    }
    ctx->pc = 0x29B724u;
label_29b724:
    // 0x29b724: 0xffa001d0  sd          $zero, 0x1D0($sp)
    ctx->pc = 0x29b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 0));
label_29b728:
    // 0x29b728: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29b728u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b72c: 0xdfa201d0  ld          $v0, 0x1D0($sp)
    ctx->pc = 0x29b72cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x29b730: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x29b730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b734: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x29b734u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x29b738: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x29b738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b73c: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x29b73cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29b740: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x29b740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29b744: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b744u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b748: 0x24c20120  addiu       $v0, $a2, 0x120
    ctx->pc = 0x29b748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x29b74c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b74cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b750: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B750u;
    SET_GPR_U32(ctx, 31, 0x29B758u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B758u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B758u) { return; }
    ctx->pc = 0x29B758u;
label_29b758:
    // 0x29b758: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29b758u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b75c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x29b75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b760: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x29b760u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29b764: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b764u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b768: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x29b768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29b76c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b76cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b770: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B770u;
    SET_GPR_U32(ctx, 31, 0x29B778u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B778u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B778u) { return; }
    ctx->pc = 0x29B778u;
label_29b778:
    // 0x29b778: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29b778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b77c: 0xde050008  ld          $a1, 0x8($s0)
    ctx->pc = 0x29b77cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b780: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b784: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b788: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x29b788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x29b78c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b78cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b790: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b794: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b794u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b798: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29b79c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b79cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b7a0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29b7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29b7a4: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B7A4u;
    SET_GPR_U32(ctx, 31, 0x29B7ACu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B7ACu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B7ACu) { return; }
    ctx->pc = 0x29B7ACu;
label_29b7ac:
    // 0x29b7ac: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b7b0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b7b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b7b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b7b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b7b8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x29b7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x29b7bc: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B7BCu;
    SET_GPR_U32(ctx, 31, 0x29B7C4u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B7C4u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B7C4u) { return; }
    ctx->pc = 0x29B7C4u;
label_29b7c4:
    // 0x29b7c4: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x29b7c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b7c8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x29b7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b7cc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x29b7ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29b7d0: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x29b7d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x29b7d4: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x29b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x29b7d8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b7dc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b7dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b7e0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b7e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b7e4: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x29b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b7e8: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B7E8u;
    SET_GPR_U32(ctx, 31, 0x29B7F0u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B7F0u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B7F0u) { return; }
    ctx->pc = 0x29B7F0u;
label_29b7f0:
    // 0x29b7f0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x29b7f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b7f4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b7f8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b7f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b7fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b7fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b800: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29b800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29b804: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B804u;
    SET_GPR_U32(ctx, 31, 0x29B80Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B80Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B80Cu) { return; }
    ctx->pc = 0x29B80Cu;
label_29b80c:
    // 0x29b80c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b80cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b810: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b814: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29b814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29b818: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B818u;
    {
        const bool branch_taken_0x29b818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b818) {
            ctx->pc = 0x29B834u;
            goto label_29b834;
        }
    }
    ctx->pc = 0x29B820u;
    // 0x29b820: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b824: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b828: 0xffa201d8  sd          $v0, 0x1D8($sp)
    ctx->pc = 0x29b828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 2));
    // 0x29b82c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B82Cu;
    {
        const bool branch_taken_0x29b82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b82c) {
            ctx->pc = 0x29B838u;
            goto label_29b838;
        }
    }
    ctx->pc = 0x29B834u;
label_29b834:
    // 0x29b834: 0xffa001d8  sd          $zero, 0x1D8($sp)
    ctx->pc = 0x29b834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 0));
label_29b838:
    // 0x29b838: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29b838u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b83c: 0xdfa201d8  ld          $v0, 0x1D8($sp)
    ctx->pc = 0x29b83cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x29b840: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29b840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b844: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b844u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b848: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b84c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b84cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b850: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b850u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b854: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x29b854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b858: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B858u;
    SET_GPR_U32(ctx, 31, 0x29B860u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B860u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B860u) { return; }
    ctx->pc = 0x29B860u;
label_29b860:
    // 0x29b860: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b864: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b864u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b868: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b868u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b86c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x29b86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x29b870: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B870u;
    SET_GPR_U32(ctx, 31, 0x29B878u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B878u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B878u) { return; }
    ctx->pc = 0x29B878u;
label_29b878:
    // 0x29b878: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x29b878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b87c: 0x30850010  andi        $a1, $a0, 0x10
    ctx->pc = 0x29b87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x29b880: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B880u;
    {
        const bool branch_taken_0x29b880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b880) {
            ctx->pc = 0x29B89Cu;
            goto label_29b89c;
        }
    }
    ctx->pc = 0x29B888u;
    // 0x29b888: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x29b888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b88c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x29b88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b890: 0xffa201e0  sd          $v0, 0x1E0($sp)
    ctx->pc = 0x29b890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 2));
    // 0x29b894: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B894u;
    {
        const bool branch_taken_0x29b894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b894) {
            ctx->pc = 0x29B8A0u;
            goto label_29b8a0;
        }
    }
    ctx->pc = 0x29B89Cu;
label_29b89c:
    // 0x29b89c: 0xffa001e0  sd          $zero, 0x1E0($sp)
    ctx->pc = 0x29b89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 0));
label_29b8a0:
    // 0x29b8a0: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x29b8a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b8a4: 0xdfa601e0  ld          $a2, 0x1E0($sp)
    ctx->pc = 0x29b8a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x29b8a8: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x29b8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x29b8ac: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b8acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b8b0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x29b8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b8b4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x29b8b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x29b8b8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b8b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b8bc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x29b8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b8c0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B8C0u;
    SET_GPR_U32(ctx, 31, 0x29B8C8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B8C8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B8C8u) { return; }
    ctx->pc = 0x29B8C8u;
label_29b8c8:
    // 0x29b8c8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b8cc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b8ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b8d0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b8d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b8d4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x29b8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29b8d8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B8D8u;
    SET_GPR_U32(ctx, 31, 0x29B8E0u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B8E0u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B8E0u) { return; }
    ctx->pc = 0x29B8E0u;
label_29b8e0:
    // 0x29b8e0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b8e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29b8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x29b8e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B8E8u;
    {
        const bool branch_taken_0x29b8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b8e8) {
            ctx->pc = 0x29B904u;
            goto label_29b904;
        }
    }
    ctx->pc = 0x29B8F0u;
    // 0x29b8f0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b8f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b8f8: 0xffa201e8  sd          $v0, 0x1E8($sp)
    ctx->pc = 0x29b8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 2));
    // 0x29b8fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B8FCu;
    {
        const bool branch_taken_0x29b8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b8fc) {
            ctx->pc = 0x29B908u;
            goto label_29b908;
        }
    }
    ctx->pc = 0x29B904u;
label_29b904:
    // 0x29b904: 0xffa001e8  sd          $zero, 0x1E8($sp)
    ctx->pc = 0x29b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 0));
label_29b908:
    // 0x29b908: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29b908u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b90c: 0xdfa201e8  ld          $v0, 0x1E8($sp)
    ctx->pc = 0x29b90cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x29b910: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29b910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b914: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b914u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b918: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x29b918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b91c: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x29b91cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x29b920: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b920u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b924: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x29b924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b928: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B928u;
    SET_GPR_U32(ctx, 31, 0x29B930u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B930u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B930u) { return; }
    ctx->pc = 0x29B930u;
label_29b930:
    // 0x29b930: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x29b930u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b934: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b938: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b938u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b93c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b93cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b940: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x29b940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x29b944: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B944u;
    SET_GPR_U32(ctx, 31, 0x29B94Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B94Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B94Cu) { return; }
    ctx->pc = 0x29B94Cu;
label_29b94c:
    // 0x29b94c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b94cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b950: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b954: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x29b954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x29b958: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B958u;
    {
        const bool branch_taken_0x29b958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b958) {
            ctx->pc = 0x29B974u;
            goto label_29b974;
        }
    }
    ctx->pc = 0x29B960u;
    // 0x29b960: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b964: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b968: 0xffa201f0  sd          $v0, 0x1F0($sp)
    ctx->pc = 0x29b968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 2));
    // 0x29b96c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B96Cu;
    {
        const bool branch_taken_0x29b96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b96c) {
            ctx->pc = 0x29B978u;
            goto label_29b978;
        }
    }
    ctx->pc = 0x29B974u;
label_29b974:
    // 0x29b974: 0xffa001f0  sd          $zero, 0x1F0($sp)
    ctx->pc = 0x29b974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 0));
label_29b978:
    // 0x29b978: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29b978u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b97c: 0xdfa201f0  ld          $v0, 0x1F0($sp)
    ctx->pc = 0x29b97cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x29b980: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29b980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b984: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b984u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b988: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b98c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b98cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b990: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29b994: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b994u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b998: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29b998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29b99c: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B99Cu;
    SET_GPR_U32(ctx, 31, 0x29B9A4u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B9A4u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B9A4u) { return; }
    ctx->pc = 0x29B9A4u;
label_29b9a4:
    // 0x29b9a4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b9a8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b9a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b9ac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b9acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b9b0: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x29b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29b9b4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b9b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b9b8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B9B8u;
    SET_GPR_U32(ctx, 31, 0x29B9C0u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B9C0u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B9C0u) { return; }
    ctx->pc = 0x29B9C0u;
label_29b9c0:
    // 0x29b9c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b9c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b9c4: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x29b9c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b9c8: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x29b9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x29b9cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B9CCu;
    {
        const bool branch_taken_0x29b9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b9cc) {
            ctx->pc = 0x29B9E8u;
            goto label_29b9e8;
        }
    }
    ctx->pc = 0x29B9D4u;
    // 0x29b9d4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x29b9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b9d8: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x29b9d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29b9dc: 0xffa601f8  sd          $a2, 0x1F8($sp)
    ctx->pc = 0x29b9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 6));
    // 0x29b9e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B9E0u;
    {
        const bool branch_taken_0x29b9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b9e0) {
            ctx->pc = 0x29B9ECu;
            goto label_29b9ec;
        }
    }
    ctx->pc = 0x29B9E8u;
label_29b9e8:
    // 0x29b9e8: 0xffa001f8  sd          $zero, 0x1F8($sp)
    ctx->pc = 0x29b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 0));
label_29b9ec:
    // 0x29b9ec: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x29b9ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b9f0: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x29b9f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29b9f4: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x29b9f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x29b9f8: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x29b9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x29b9fc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29ba00: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29ba00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29ba04: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29ba08: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29ba08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29ba0c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29ba10: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29BA10u;
    SET_GPR_U32(ctx, 31, 0x29BA18u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29BA18u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29BA18u) { return; }
    ctx->pc = 0x29BA18u;
label_29ba18:
    // 0x29ba18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29ba18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29ba1c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x29ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29ba20: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x29ba20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29ba24: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29ba24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29ba28: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x29ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x29ba2c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29ba2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29ba30: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29BA30u;
    SET_GPR_U32(ctx, 31, 0x29BA38u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29BA38u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29BA38u) { return; }
    ctx->pc = 0x29BA38u;
label_29ba38:
    // 0x29ba38: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29ba38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29ba3c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x29ba3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x29ba40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BA40u;
    {
        const bool branch_taken_0x29ba40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ba40) {
            ctx->pc = 0x29BA5Cu;
            goto label_29ba5c;
        }
    }
    ctx->pc = 0x29BA48u;
    // 0x29ba48: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x29ba48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29ba4c: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x29ba4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x29ba50: 0xffa60200  sd          $a2, 0x200($sp)
    ctx->pc = 0x29ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 6));
    // 0x29ba54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29BA54u;
    {
        const bool branch_taken_0x29ba54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ba54) {
            ctx->pc = 0x29BA60u;
            goto label_29ba60;
        }
    }
    ctx->pc = 0x29BA5Cu;
label_29ba5c:
    // 0x29ba5c: 0xffa00200  sd          $zero, 0x200($sp)
    ctx->pc = 0x29ba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 0));
label_29ba60:
    // 0x29ba60: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29ba60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29ba64: 0xdfa20200  ld          $v0, 0x200($sp)
    ctx->pc = 0x29ba64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x29ba68: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x29ba68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29ba6c: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x29ba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x29ba70: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x29ba70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29ba74: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x29ba74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29ba78: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x29ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x29ba7c: 0x2023023  subu        $a2, $s0, $v0
    ctx->pc = 0x29ba7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29ba80: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x29ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29ba84: 0x6a942  srl         $s5, $a2, 5
    ctx->pc = 0x29ba84u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x29ba88: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x29ba88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x29ba8c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29ba8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29ba90: 0x34668000  ori         $a2, $v1, 0x8000
    ctx->pc = 0x29ba90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29ba94: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x29ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x29ba98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29ba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29ba9c: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x29ba9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29baa0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x29baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x29baa4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29baa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29baa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29baa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29baac: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x29baacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x29bab0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29bab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29bab4: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x29bab4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29bab8: 0xfed10000  sd          $s1, 0x0($s6)
    ctx->pc = 0x29bab8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 17));
    // 0x29babc: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x29babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29bac0: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x29bac0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x29bac4: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x29bac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x29bac8: 0x2061023  subu        $v0, $s0, $a2
    ctx->pc = 0x29bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x29bacc: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x29baccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29bad0: 0x2a902  srl         $s5, $v0, 4
    ctx->pc = 0x29bad0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x29bad4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x29bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x29bad8: 0x2a2a025  or          $s4, $s5, $v0
    ctx->pc = 0x29bad8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x29badc: 0x14a03c  dsll32      $s4, $s4, 0
    ctx->pc = 0x29badcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 0));
    // 0x29bae0: 0x14a03e  dsrl32      $s4, $s4, 0
    ctx->pc = 0x29bae0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x29bae4: 0xfe740000  sd          $s4, 0x0($s3)
    ctx->pc = 0x29bae4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 20));
    // 0x29bae8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x29bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x29baec: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x29baecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x29baf0: 0x2a2f025  or          $fp, $s5, $v0
    ctx->pc = 0x29baf0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x29baf4: 0xae7e000c  sw          $fp, 0xC($s3)
    ctx->pc = 0x29baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 30));
    // 0x29baf8: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29bafc: 0xc44c01d4  lwc1        $f12, 0x1D4($v0)
    ctx->pc = 0x29bafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29bb00: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29BB00u;
    SET_GPR_U32(ctx, 31, 0x29BB08u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29BB00u, 0x29BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB08u;
label_29bb08:
    // 0x29bb08: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x29bb08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29bb0c: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29bb10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29bb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29bb14: 0x8c25013c  lw          $a1, 0x13C($at)
    ctx->pc = 0x29bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x29bb18: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x29bb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x29bb1c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x29bb1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29bb20: 0x8c6501d0  lw          $a1, 0x1D0($v1)
    ctx->pc = 0x29bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 464)));
    // 0x29bb24: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29bb24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29bb28: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x29bb28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x29bb2c: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x29BB2Cu;
    SET_GPR_U32(ctx, 31, 0x29BB34u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x29BB2Cu, 0x29BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB34u;
label_29bb34:
    // 0x29bb34: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29bb38: 0x8c6301d0  lw          $v1, 0x1D0($v1)
    ctx->pc = 0x29bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 464)));
    // 0x29bb3c: 0x203b823  subu        $s7, $s0, $v1
    ctx->pc = 0x29bb3cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29bb40: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29bb44: 0xac7701cc  sw          $s7, 0x1CC($v1)
    ctx->pc = 0x29bb44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 460), GPR_U32(ctx, 23));
    // 0x29bb48: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x29bb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x29bb4c: 0x8c243580  lw          $a0, 0x3580($at)
    ctx->pc = 0x29bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x853580u));
    // 0x29bb50: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x29bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x29bb54: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x29bb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x29bb58: 0xac233580  sw          $v1, 0x3580($at)
    ctx->pc = 0x29bb58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x853580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x853580u, _value); } while (0);
label_29bb5c:
    // 0x29bb5c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x29bb5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29bb60: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29bb60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29bb64: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29bb64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29bb68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29bb68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29bb6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29bb6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29bb70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29bb70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29bb74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29bb74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29bb78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29bb78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29bb7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29bb7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bb80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29bb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bb84: 0x27bd0220  addiu       $sp, $sp, 0x220
    ctx->pc = 0x29bb84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x29bb88: 0x3e00008  jr          $ra
    ctx->pc = 0x29BB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BB90u;
}
