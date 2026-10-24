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

// Function: Gp_Rengt416_init
// Address: 0x1d2780 - 0x1d3498
void Gp_Rengt416_init_0x1d2780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_Rengt416_init_0x1d2780");
#endif

    switch (ctx->pc) {
        case 0x1d27b8u: goto label_1d27b8;
        default: break;
    }

    ctx->pc = 0x1d2780u;

    // 0x1d2780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d2780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d2784: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d278c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d278cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2790: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1d2790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1d2794: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1d2794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1d2798: 0xffa60058  sd          $a2, 0x58($sp)
    ctx->pc = 0x1d2798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 6));
    // 0x1d279c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d279cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d27a0: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1d27a0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d27a4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1d27a4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d27a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1d27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d27ac: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1d27acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x1d27b0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d27b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d27b4: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x1d27b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
label_1d27b8:
    // 0x1d27b8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1d27b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d27bc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1d27bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1d27c0: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x1d27c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1d27c4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1d27c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d27c8: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x1d27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x1d27cc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d27ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d27d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d27d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d27d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d27d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d27d8: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1d27d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1d27dc: 0x3c0300e7  lui         $v1, 0xE7
    ctx->pc = 0x1d27dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)231 << 16));
    // 0x1d27e0: 0x3464eeee  ori         $a0, $v1, 0xEEEE
    ctx->pc = 0x1d27e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x1d27e4: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x1d27e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x1d27e8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d27e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d27ec: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x1d27ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x1d27f0: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1d27f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d27f4: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x1d27f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x1d27f8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d27f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d27fc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d27fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2800: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1d2800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1d2804: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2808: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1d2808u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1d280c: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x1d280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1d2810: 0xfe040028  sd          $a0, 0x28($s0)
    ctx->pc = 0x1d2810u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 4));
    // 0x1d2814: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1d2814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1d2818: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x1d2818u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    // 0x1d281c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1d281cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d2820: 0xfe030038  sd          $v1, 0x38($s0)
    ctx->pc = 0x1d2820u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 3));
    // 0x1d2824: 0x240303a4  addiu       $v1, $zero, 0x3A4
    ctx->pc = 0x1d2824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 932));
    // 0x1d2828: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d282c: 0x24031ff8  addiu       $v1, $zero, 0x1FF8
    ctx->pc = 0x1d282cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8184));
    // 0x1d2830: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2834: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x1d2834u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x1d2838: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1d2838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d283c: 0xfe030048  sd          $v1, 0x48($s0)
    ctx->pc = 0x1d283cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 3));
    // 0x1d2840: 0xdfa30058  ld          $v1, 0x58($sp)
    ctx->pc = 0x1d2840u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d2844: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x1d2844u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x1d2848: 0xfe000058  sd          $zero, 0x58($s0)
    ctx->pc = 0x1d2848u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 0));
    // 0x1d284c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1d284cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d2850: 0xfe040060  sd          $a0, 0x60($s0)
    ctx->pc = 0x1d2850u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 4));
    // 0x1d2854: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1d2854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d2858: 0xfe030068  sd          $v1, 0x68($s0)
    ctx->pc = 0x1d2858u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 3));
    // 0x1d285c: 0x3c0351a6  lui         $v1, 0x51A6
    ctx->pc = 0x1d285cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20902 << 16));
    // 0x1d2860: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d2860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d2864: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2868: 0x34038011  ori         $v1, $zero, 0x8011
    ctx->pc = 0x1d2868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
    // 0x1d286c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d286cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2870: 0xfe030070  sd          $v1, 0x70($s0)
    ctx->pc = 0x1d2870u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 3));
    // 0x1d2874: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x1d2874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x1d2878: 0x34833513  ori         $v1, $a0, 0x3513
    ctx->pc = 0x1d2878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13587);
    // 0x1d287c: 0xfe030078  sd          $v1, 0x78($s0)
    ctx->pc = 0x1d287cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 3));
    // 0x1d2880: 0xfe000080  sd          $zero, 0x80($s0)
    ctx->pc = 0x1d2880u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 0));
    // 0x1d2884: 0xfe000088  sd          $zero, 0x88($s0)
    ctx->pc = 0x1d2884u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 0));
    // 0x1d2888: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d288c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d288cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2890: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2894: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2898: 0xfe040090  sd          $a0, 0x90($s0)
    ctx->pc = 0x1d2898u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 4));
    // 0x1d289c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d289cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d28a0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d28a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d28a4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d28a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d28a8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d28a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d28ac: 0xfe040098  sd          $a0, 0x98($s0)
    ctx->pc = 0x1d28acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 152), GPR_U64(ctx, 4));
    // 0x1d28b0: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d28b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d28b4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d28b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d28b8: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d28b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d28bc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d28bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d28c0: 0xfe0400a0  sd          $a0, 0xA0($s0)
    ctx->pc = 0x1d28c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 160), GPR_U64(ctx, 4));
    // 0x1d28c4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d28c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d28c8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d28c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d28cc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d28ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d28d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d28d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d28d4: 0xfe0300a8  sd          $v1, 0xA8($s0)
    ctx->pc = 0x1d28d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 168), GPR_U64(ctx, 3));
    // 0x1d28d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d28d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d28dc: 0x0  nop
    ctx->pc = 0x1d28dcu;
    // NOP
    // 0x1d28e0: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x1d28e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x1d28e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d28e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d28e8: 0x0  nop
    ctx->pc = 0x1d28e8u;
    // NOP
    // 0x1d28ec: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x1d28ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x1d28f0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d28f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d28f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d28f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d28f8: 0x0  nop
    ctx->pc = 0x1d28f8u;
    // NOP
    // 0x1d28fc: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x1d28fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
    // 0x1d2900: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2904: 0x0  nop
    ctx->pc = 0x1d2904u;
    // NOP
    // 0x1d2908: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x1d2908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x1d290c: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d290cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2910: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2914: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2918: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d291c: 0xfe0400c0  sd          $a0, 0xC0($s0)
    ctx->pc = 0x1d291cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 192), GPR_U64(ctx, 4));
    // 0x1d2920: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2924: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2928: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d292c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d292cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2930: 0xfe0400c8  sd          $a0, 0xC8($s0)
    ctx->pc = 0x1d2930u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 200), GPR_U64(ctx, 4));
    // 0x1d2934: 0xfe0000d0  sd          $zero, 0xD0($s0)
    ctx->pc = 0x1d2934u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 208), GPR_U64(ctx, 0));
    // 0x1d2938: 0xfe0000d8  sd          $zero, 0xD8($s0)
    ctx->pc = 0x1d2938u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 216), GPR_U64(ctx, 0));
    // 0x1d293c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2940: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2944: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2948: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d294c: 0xfe0400e0  sd          $a0, 0xE0($s0)
    ctx->pc = 0x1d294cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 4));
    // 0x1d2950: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1d2950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1d2954: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2958: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d295c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d295cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2960: 0xfe0400e8  sd          $a0, 0xE8($s0)
    ctx->pc = 0x1d2960u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 4));
    // 0x1d2964: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2968: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d296c: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2970: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2974: 0xfe0400f0  sd          $a0, 0xF0($s0)
    ctx->pc = 0x1d2974u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 4));
    // 0x1d2978: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d297c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d297cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2980: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2984: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2988: 0xfe0300f8  sd          $v1, 0xF8($s0)
    ctx->pc = 0x1d2988u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 248), GPR_U64(ctx, 3));
    // 0x1d298c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d298cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2990: 0x0  nop
    ctx->pc = 0x1d2990u;
    // NOP
    // 0x1d2994: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1d2994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1d2998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d299c: 0x0  nop
    ctx->pc = 0x1d299cu;
    // NOP
    // 0x1d29a0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1d29a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1d29a4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d29a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d29a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d29a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d29ac: 0x0  nop
    ctx->pc = 0x1d29acu;
    // NOP
    // 0x1d29b0: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x1d29b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x1d29b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d29b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d29b8: 0x0  nop
    ctx->pc = 0x1d29b8u;
    // NOP
    // 0x1d29bc: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x1d29bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x1d29c0: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d29c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d29c4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d29c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d29c8: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d29c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d29cc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d29ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d29d0: 0xfe040110  sd          $a0, 0x110($s0)
    ctx->pc = 0x1d29d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 272), GPR_U64(ctx, 4));
    // 0x1d29d4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d29d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d29d8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d29d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d29dc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d29dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d29e0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d29e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d29e4: 0xfe040118  sd          $a0, 0x118($s0)
    ctx->pc = 0x1d29e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 280), GPR_U64(ctx, 4));
    // 0x1d29e8: 0xfe000120  sd          $zero, 0x120($s0)
    ctx->pc = 0x1d29e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 288), GPR_U64(ctx, 0));
    // 0x1d29ec: 0xfe000128  sd          $zero, 0x128($s0)
    ctx->pc = 0x1d29ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 0));
    // 0x1d29f0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d29f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d29f4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d29f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d29f8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d29f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d29fc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d29fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2a00: 0xfe040130  sd          $a0, 0x130($s0)
    ctx->pc = 0x1d2a00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 304), GPR_U64(ctx, 4));
    // 0x1d2a04: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1d2a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1d2a08: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2a0c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2a10: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2a14: 0xfe040138  sd          $a0, 0x138($s0)
    ctx->pc = 0x1d2a14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 312), GPR_U64(ctx, 4));
    // 0x1d2a18: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2a1c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2a20: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2a24: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2a28: 0xfe040140  sd          $a0, 0x140($s0)
    ctx->pc = 0x1d2a28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 320), GPR_U64(ctx, 4));
    // 0x1d2a2c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2a30: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2a34: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2a38: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2a3c: 0xfe030148  sd          $v1, 0x148($s0)
    ctx->pc = 0x1d2a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 328), GPR_U64(ctx, 3));
    // 0x1d2a40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2a44: 0x0  nop
    ctx->pc = 0x1d2a44u;
    // NOP
    // 0x1d2a48: 0xe6000150  swc1        $f0, 0x150($s0)
    ctx->pc = 0x1d2a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x1d2a4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2a50: 0x0  nop
    ctx->pc = 0x1d2a50u;
    // NOP
    // 0x1d2a54: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x1d2a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x1d2a58: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d2a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2a5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d2a5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2a60: 0x0  nop
    ctx->pc = 0x1d2a60u;
    // NOP
    // 0x1d2a64: 0xe6000158  swc1        $f0, 0x158($s0)
    ctx->pc = 0x1d2a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
    // 0x1d2a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2a6c: 0x0  nop
    ctx->pc = 0x1d2a6cu;
    // NOP
    // 0x1d2a70: 0xe600015c  swc1        $f0, 0x15C($s0)
    ctx->pc = 0x1d2a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
    // 0x1d2a74: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2a78: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2a7c: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2a80: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2a84: 0xfe040160  sd          $a0, 0x160($s0)
    ctx->pc = 0x1d2a84u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 352), GPR_U64(ctx, 4));
    // 0x1d2a88: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2a8c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2a90: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2a94: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2a98: 0xfe040168  sd          $a0, 0x168($s0)
    ctx->pc = 0x1d2a98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 360), GPR_U64(ctx, 4));
    // 0x1d2a9c: 0xfe000170  sd          $zero, 0x170($s0)
    ctx->pc = 0x1d2a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 368), GPR_U64(ctx, 0));
    // 0x1d2aa0: 0xfe000178  sd          $zero, 0x178($s0)
    ctx->pc = 0x1d2aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 0));
    // 0x1d2aa4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2aa8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2aac: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2ab0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2ab4: 0xfe040180  sd          $a0, 0x180($s0)
    ctx->pc = 0x1d2ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 4));
    // 0x1d2ab8: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x1d2ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1d2abc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2ac0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2ac4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2ac8: 0xfe040188  sd          $a0, 0x188($s0)
    ctx->pc = 0x1d2ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 392), GPR_U64(ctx, 4));
    // 0x1d2acc: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2ad0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2ad4: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2ad8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2adc: 0xfe040190  sd          $a0, 0x190($s0)
    ctx->pc = 0x1d2adcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 400), GPR_U64(ctx, 4));
    // 0x1d2ae0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2ae4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2ae8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2aec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2af0: 0xfe030198  sd          $v1, 0x198($s0)
    ctx->pc = 0x1d2af0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 408), GPR_U64(ctx, 3));
    // 0x1d2af4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2af8: 0x0  nop
    ctx->pc = 0x1d2af8u;
    // NOP
    // 0x1d2afc: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x1d2afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x1d2b00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2b00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2b04: 0x0  nop
    ctx->pc = 0x1d2b04u;
    // NOP
    // 0x1d2b08: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x1d2b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x1d2b0c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d2b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2b10: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d2b10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2b14: 0x0  nop
    ctx->pc = 0x1d2b14u;
    // NOP
    // 0x1d2b18: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x1d2b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x1d2b1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2b20: 0x0  nop
    ctx->pc = 0x1d2b20u;
    // NOP
    // 0x1d2b24: 0xe60001ac  swc1        $f0, 0x1AC($s0)
    ctx->pc = 0x1d2b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
    // 0x1d2b28: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2b2c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2b30: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2b34: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2b38: 0xfe0401b0  sd          $a0, 0x1B0($s0)
    ctx->pc = 0x1d2b38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 432), GPR_U64(ctx, 4));
    // 0x1d2b3c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2b40: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2b44: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2b48: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2b4c: 0xfe0401b8  sd          $a0, 0x1B8($s0)
    ctx->pc = 0x1d2b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 440), GPR_U64(ctx, 4));
    // 0x1d2b50: 0xfe0001c0  sd          $zero, 0x1C0($s0)
    ctx->pc = 0x1d2b50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 448), GPR_U64(ctx, 0));
    // 0x1d2b54: 0xfe0001c8  sd          $zero, 0x1C8($s0)
    ctx->pc = 0x1d2b54u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 456), GPR_U64(ctx, 0));
    // 0x1d2b58: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2b5c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2b60: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2b64: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2b68: 0xfe0401d0  sd          $a0, 0x1D0($s0)
    ctx->pc = 0x1d2b68u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 464), GPR_U64(ctx, 4));
    // 0x1d2b6c: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1d2b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d2b70: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2b74: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2b78: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2b7c: 0xfe0401d8  sd          $a0, 0x1D8($s0)
    ctx->pc = 0x1d2b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 472), GPR_U64(ctx, 4));
    // 0x1d2b80: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2b84: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2b88: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2b8c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2b90: 0xfe0401e0  sd          $a0, 0x1E0($s0)
    ctx->pc = 0x1d2b90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 480), GPR_U64(ctx, 4));
    // 0x1d2b94: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2b98: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2b9c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2ba0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2ba4: 0xfe0301e8  sd          $v1, 0x1E8($s0)
    ctx->pc = 0x1d2ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 488), GPR_U64(ctx, 3));
    // 0x1d2ba8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2ba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2bac: 0x0  nop
    ctx->pc = 0x1d2bacu;
    // NOP
    // 0x1d2bb0: 0xe60001f0  swc1        $f0, 0x1F0($s0)
    ctx->pc = 0x1d2bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 496), bits); }
    // 0x1d2bb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2bb8: 0x0  nop
    ctx->pc = 0x1d2bb8u;
    // NOP
    // 0x1d2bbc: 0xe60001f4  swc1        $f0, 0x1F4($s0)
    ctx->pc = 0x1d2bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 500), bits); }
    // 0x1d2bc0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d2bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2bc4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d2bc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2bc8: 0x0  nop
    ctx->pc = 0x1d2bc8u;
    // NOP
    // 0x1d2bcc: 0xe60001f8  swc1        $f0, 0x1F8($s0)
    ctx->pc = 0x1d2bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 504), bits); }
    // 0x1d2bd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2bd4: 0x0  nop
    ctx->pc = 0x1d2bd4u;
    // NOP
    // 0x1d2bd8: 0xe60001fc  swc1        $f0, 0x1FC($s0)
    ctx->pc = 0x1d2bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
    // 0x1d2bdc: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2be0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2be4: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2be8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2bec: 0xfe040200  sd          $a0, 0x200($s0)
    ctx->pc = 0x1d2becu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 512), GPR_U64(ctx, 4));
    // 0x1d2bf0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2bf4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2bf8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2bfc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2c00: 0xfe040208  sd          $a0, 0x208($s0)
    ctx->pc = 0x1d2c00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 520), GPR_U64(ctx, 4));
    // 0x1d2c04: 0xfe000210  sd          $zero, 0x210($s0)
    ctx->pc = 0x1d2c04u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 528), GPR_U64(ctx, 0));
    // 0x1d2c08: 0xfe000218  sd          $zero, 0x218($s0)
    ctx->pc = 0x1d2c08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 536), GPR_U64(ctx, 0));
    // 0x1d2c0c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2c10: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2c14: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2c18: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2c1c: 0xfe040220  sd          $a0, 0x220($s0)
    ctx->pc = 0x1d2c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 544), GPR_U64(ctx, 4));
    // 0x1d2c20: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x1d2c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1d2c24: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2c28: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2c2c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2c30: 0xfe040228  sd          $a0, 0x228($s0)
    ctx->pc = 0x1d2c30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 552), GPR_U64(ctx, 4));
    // 0x1d2c34: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2c38: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2c3c: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2c40: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2c44: 0xfe040230  sd          $a0, 0x230($s0)
    ctx->pc = 0x1d2c44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 560), GPR_U64(ctx, 4));
    // 0x1d2c48: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2c4c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2c50: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2c54: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2c58: 0xfe030238  sd          $v1, 0x238($s0)
    ctx->pc = 0x1d2c58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 568), GPR_U64(ctx, 3));
    // 0x1d2c5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2c5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2c60: 0x0  nop
    ctx->pc = 0x1d2c60u;
    // NOP
    // 0x1d2c64: 0xe6000240  swc1        $f0, 0x240($s0)
    ctx->pc = 0x1d2c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 576), bits); }
    // 0x1d2c68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2c68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2c6c: 0x0  nop
    ctx->pc = 0x1d2c6cu;
    // NOP
    // 0x1d2c70: 0xe6000244  swc1        $f0, 0x244($s0)
    ctx->pc = 0x1d2c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
    // 0x1d2c74: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d2c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2c78: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d2c78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2c7c: 0x0  nop
    ctx->pc = 0x1d2c7cu;
    // NOP
    // 0x1d2c80: 0xe6000248  swc1        $f0, 0x248($s0)
    ctx->pc = 0x1d2c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 584), bits); }
    // 0x1d2c84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2c88: 0x0  nop
    ctx->pc = 0x1d2c88u;
    // NOP
    // 0x1d2c8c: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1d2c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1d2c90: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2c94: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2c98: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2c9c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2ca0: 0xfe040250  sd          $a0, 0x250($s0)
    ctx->pc = 0x1d2ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 592), GPR_U64(ctx, 4));
    // 0x1d2ca4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2ca8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2cac: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2cb0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2cb4: 0xfe040258  sd          $a0, 0x258($s0)
    ctx->pc = 0x1d2cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 600), GPR_U64(ctx, 4));
    // 0x1d2cb8: 0xfe000260  sd          $zero, 0x260($s0)
    ctx->pc = 0x1d2cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 608), GPR_U64(ctx, 0));
    // 0x1d2cbc: 0xfe000268  sd          $zero, 0x268($s0)
    ctx->pc = 0x1d2cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 616), GPR_U64(ctx, 0));
    // 0x1d2cc0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2cc4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2cc8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2ccc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2cd0: 0xfe040270  sd          $a0, 0x270($s0)
    ctx->pc = 0x1d2cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 624), GPR_U64(ctx, 4));
    // 0x1d2cd4: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1d2cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1d2cd8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2cdc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2ce0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2ce4: 0xfe040278  sd          $a0, 0x278($s0)
    ctx->pc = 0x1d2ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 632), GPR_U64(ctx, 4));
    // 0x1d2ce8: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2cec: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2cf0: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2cf4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2cf8: 0xfe040280  sd          $a0, 0x280($s0)
    ctx->pc = 0x1d2cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 640), GPR_U64(ctx, 4));
    // 0x1d2cfc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2d00: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2d04: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2d08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2d0c: 0xfe030288  sd          $v1, 0x288($s0)
    ctx->pc = 0x1d2d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 648), GPR_U64(ctx, 3));
    // 0x1d2d10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2d10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2d14: 0x0  nop
    ctx->pc = 0x1d2d14u;
    // NOP
    // 0x1d2d18: 0xe6000290  swc1        $f0, 0x290($s0)
    ctx->pc = 0x1d2d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    // 0x1d2d1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2d20: 0x0  nop
    ctx->pc = 0x1d2d20u;
    // NOP
    // 0x1d2d24: 0xe6000294  swc1        $f0, 0x294($s0)
    ctx->pc = 0x1d2d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    // 0x1d2d28: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d2d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2d2c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d2d2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2d30: 0x0  nop
    ctx->pc = 0x1d2d30u;
    // NOP
    // 0x1d2d34: 0xe6000298  swc1        $f0, 0x298($s0)
    ctx->pc = 0x1d2d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
    // 0x1d2d38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2d3c: 0x0  nop
    ctx->pc = 0x1d2d3cu;
    // NOP
    // 0x1d2d40: 0xe600029c  swc1        $f0, 0x29C($s0)
    ctx->pc = 0x1d2d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 668), bits); }
    // 0x1d2d44: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2d48: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2d4c: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2d50: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2d54: 0xfe0402a0  sd          $a0, 0x2A0($s0)
    ctx->pc = 0x1d2d54u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 672), GPR_U64(ctx, 4));
    // 0x1d2d58: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2d5c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2d60: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2d64: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2d68: 0xfe0402a8  sd          $a0, 0x2A8($s0)
    ctx->pc = 0x1d2d68u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 680), GPR_U64(ctx, 4));
    // 0x1d2d6c: 0xfe0002b0  sd          $zero, 0x2B0($s0)
    ctx->pc = 0x1d2d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 688), GPR_U64(ctx, 0));
    // 0x1d2d70: 0xfe0002b8  sd          $zero, 0x2B8($s0)
    ctx->pc = 0x1d2d70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 696), GPR_U64(ctx, 0));
    // 0x1d2d74: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2d78: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2d7c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2d80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2d84: 0xfe0302c0  sd          $v1, 0x2C0($s0)
    ctx->pc = 0x1d2d84u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 704), GPR_U64(ctx, 3));
    // 0x1d2d88: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1d2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d2d8c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2d90: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2d94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2d98: 0xfe0302c8  sd          $v1, 0x2C8($s0)
    ctx->pc = 0x1d2d98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 712), GPR_U64(ctx, 3));
    // 0x1d2d9c: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2da0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2da4: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2da8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2dac: 0xfe0302d0  sd          $v1, 0x2D0($s0)
    ctx->pc = 0x1d2dacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 720), GPR_U64(ctx, 3));
    // 0x1d2db0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2db4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2db8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2dbc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2dc0: 0xfe0302d8  sd          $v1, 0x2D8($s0)
    ctx->pc = 0x1d2dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 728), GPR_U64(ctx, 3));
    // 0x1d2dc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2dc8: 0x0  nop
    ctx->pc = 0x1d2dc8u;
    // NOP
    // 0x1d2dcc: 0xe60002e0  swc1        $f0, 0x2E0($s0)
    ctx->pc = 0x1d2dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 736), bits); }
    // 0x1d2dd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2dd4: 0x0  nop
    ctx->pc = 0x1d2dd4u;
    // NOP
    // 0x1d2dd8: 0xe60002e4  swc1        $f0, 0x2E4($s0)
    ctx->pc = 0x1d2dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
    // 0x1d2ddc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d2ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2de0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d2de0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2de4: 0x0  nop
    ctx->pc = 0x1d2de4u;
    // NOP
    // 0x1d2de8: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x1d2de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x1d2dec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2df0: 0x0  nop
    ctx->pc = 0x1d2df0u;
    // NOP
    // 0x1d2df4: 0xe60002ec  swc1        $f0, 0x2EC($s0)
    ctx->pc = 0x1d2df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
    // 0x1d2df8: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2dfc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2e00: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2e04: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2e08: 0xfe0302f0  sd          $v1, 0x2F0($s0)
    ctx->pc = 0x1d2e08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 752), GPR_U64(ctx, 3));
    // 0x1d2e0c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2e10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d2e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2e14: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d2e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2e18: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d2e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d2e1c: 0xfe0302f8  sd          $v1, 0x2F8($s0)
    ctx->pc = 0x1d2e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 760), GPR_U64(ctx, 3));
    // 0x1d2e20: 0xfe000300  sd          $zero, 0x300($s0)
    ctx->pc = 0x1d2e20u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 768), GPR_U64(ctx, 0));
    // 0x1d2e24: 0xfe000308  sd          $zero, 0x308($s0)
    ctx->pc = 0x1d2e24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 776), GPR_U64(ctx, 0));
    // 0x1d2e28: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2e2c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2e30: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2e34: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2e38: 0xfe030310  sd          $v1, 0x310($s0)
    ctx->pc = 0x1d2e38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 784), GPR_U64(ctx, 3));
    // 0x1d2e3c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1d2e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d2e40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d2e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2e44: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1d2e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2e48: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d2e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d2e4c: 0xfe030318  sd          $v1, 0x318($s0)
    ctx->pc = 0x1d2e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 792), GPR_U64(ctx, 3));
    // 0x1d2e50: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2e54: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2e58: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2e5c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2e60: 0xfe030320  sd          $v1, 0x320($s0)
    ctx->pc = 0x1d2e60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 800), GPR_U64(ctx, 3));
    // 0x1d2e64: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2e68: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2e6c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2e70: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2e74: 0xfe030328  sd          $v1, 0x328($s0)
    ctx->pc = 0x1d2e74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 808), GPR_U64(ctx, 3));
    // 0x1d2e78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2e7c: 0x0  nop
    ctx->pc = 0x1d2e7cu;
    // NOP
    // 0x1d2e80: 0xe6000330  swc1        $f0, 0x330($s0)
    ctx->pc = 0x1d2e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
    // 0x1d2e84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2e88: 0x0  nop
    ctx->pc = 0x1d2e88u;
    // NOP
    // 0x1d2e8c: 0xe6000334  swc1        $f0, 0x334($s0)
    ctx->pc = 0x1d2e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 820), bits); }
    // 0x1d2e90: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2e94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d2e94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2e98: 0x0  nop
    ctx->pc = 0x1d2e98u;
    // NOP
    // 0x1d2e9c: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x1d2e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x1d2ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2ea4: 0x0  nop
    ctx->pc = 0x1d2ea4u;
    // NOP
    // 0x1d2ea8: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x1d2ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x1d2eac: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2eb0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2eb4: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2eb8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2ebc: 0xfe030340  sd          $v1, 0x340($s0)
    ctx->pc = 0x1d2ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 832), GPR_U64(ctx, 3));
    // 0x1d2ec0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2ec4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2ec8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2ecc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2ed0: 0xfe030348  sd          $v1, 0x348($s0)
    ctx->pc = 0x1d2ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 840), GPR_U64(ctx, 3));
    // 0x1d2ed4: 0xfe000350  sd          $zero, 0x350($s0)
    ctx->pc = 0x1d2ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 848), GPR_U64(ctx, 0));
    // 0x1d2ed8: 0xfe000358  sd          $zero, 0x358($s0)
    ctx->pc = 0x1d2ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 856), GPR_U64(ctx, 0));
    // 0x1d2edc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2ee0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2ee4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2ee8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2eec: 0xfe040360  sd          $a0, 0x360($s0)
    ctx->pc = 0x1d2eecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 864), GPR_U64(ctx, 4));
    // 0x1d2ef0: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1d2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1d2ef4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2ef8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2efc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2f00: 0xfe040368  sd          $a0, 0x368($s0)
    ctx->pc = 0x1d2f00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 872), GPR_U64(ctx, 4));
    // 0x1d2f04: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2f08: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2f0c: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2f10: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2f14: 0xfe040370  sd          $a0, 0x370($s0)
    ctx->pc = 0x1d2f14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 880), GPR_U64(ctx, 4));
    // 0x1d2f18: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2f1c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2f20: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2f24: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2f28: 0xfe040378  sd          $a0, 0x378($s0)
    ctx->pc = 0x1d2f28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 888), GPR_U64(ctx, 4));
    // 0x1d2f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2f30: 0x0  nop
    ctx->pc = 0x1d2f30u;
    // NOP
    // 0x1d2f34: 0xe6000380  swc1        $f0, 0x380($s0)
    ctx->pc = 0x1d2f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 896), bits); }
    // 0x1d2f38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2f3c: 0x0  nop
    ctx->pc = 0x1d2f3cu;
    // NOP
    // 0x1d2f40: 0xe6000384  swc1        $f0, 0x384($s0)
    ctx->pc = 0x1d2f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 900), bits); }
    // 0x1d2f44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2f48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d2f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2f4c: 0x0  nop
    ctx->pc = 0x1d2f4cu;
    // NOP
    // 0x1d2f50: 0xe6000388  swc1        $f0, 0x388($s0)
    ctx->pc = 0x1d2f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
    // 0x1d2f54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2f54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2f58: 0x0  nop
    ctx->pc = 0x1d2f58u;
    // NOP
    // 0x1d2f5c: 0xe600038c  swc1        $f0, 0x38C($s0)
    ctx->pc = 0x1d2f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 908), bits); }
    // 0x1d2f60: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2f64: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2f68: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2f6c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2f70: 0xfe040390  sd          $a0, 0x390($s0)
    ctx->pc = 0x1d2f70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 912), GPR_U64(ctx, 4));
    // 0x1d2f74: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2f78: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2f7c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2f80: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2f84: 0xfe040398  sd          $a0, 0x398($s0)
    ctx->pc = 0x1d2f84u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 920), GPR_U64(ctx, 4));
    // 0x1d2f88: 0xfe0003a0  sd          $zero, 0x3A0($s0)
    ctx->pc = 0x1d2f88u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 928), GPR_U64(ctx, 0));
    // 0x1d2f8c: 0xfe0003a8  sd          $zero, 0x3A8($s0)
    ctx->pc = 0x1d2f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 936), GPR_U64(ctx, 0));
    // 0x1d2f90: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2f94: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2f98: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2f9c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2fa0: 0xfe0403b0  sd          $a0, 0x3B0($s0)
    ctx->pc = 0x1d2fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 944), GPR_U64(ctx, 4));
    // 0x1d2fa4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1d2fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d2fa8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2fac: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2fb0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2fb4: 0xfe0403b8  sd          $a0, 0x3B8($s0)
    ctx->pc = 0x1d2fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 952), GPR_U64(ctx, 4));
    // 0x1d2fb8: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2fbc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2fc0: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2fc4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2fc8: 0xfe0403c0  sd          $a0, 0x3C0($s0)
    ctx->pc = 0x1d2fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 960), GPR_U64(ctx, 4));
    // 0x1d2fcc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d2fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d2fd0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2fd4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d2fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2fd8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2fdc: 0xfe0403c8  sd          $a0, 0x3C8($s0)
    ctx->pc = 0x1d2fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 968), GPR_U64(ctx, 4));
    // 0x1d2fe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2fe4: 0x0  nop
    ctx->pc = 0x1d2fe4u;
    // NOP
    // 0x1d2fe8: 0xe60003d0  swc1        $f0, 0x3D0($s0)
    ctx->pc = 0x1d2fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 976), bits); }
    // 0x1d2fec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2ff0: 0x0  nop
    ctx->pc = 0x1d2ff0u;
    // NOP
    // 0x1d2ff4: 0xe60003d4  swc1        $f0, 0x3D4($s0)
    ctx->pc = 0x1d2ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 980), bits); }
    // 0x1d2ff8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d2ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d2ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3000: 0x0  nop
    ctx->pc = 0x1d3000u;
    // NOP
    // 0x1d3004: 0xe60003d8  swc1        $f0, 0x3D8($s0)
    ctx->pc = 0x1d3004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 984), bits); }
    // 0x1d3008: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d300c: 0x0  nop
    ctx->pc = 0x1d300cu;
    // NOP
    // 0x1d3010: 0xe60003dc  swc1        $f0, 0x3DC($s0)
    ctx->pc = 0x1d3010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 988), bits); }
    // 0x1d3014: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d3014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d3018: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d301c: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d301cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d3020: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3024: 0xfe0403e0  sd          $a0, 0x3E0($s0)
    ctx->pc = 0x1d3024u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 992), GPR_U64(ctx, 4));
    // 0x1d3028: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d3028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d302c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d302cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3030: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d3030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d3034: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3038: 0xfe0403e8  sd          $a0, 0x3E8($s0)
    ctx->pc = 0x1d3038u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1000), GPR_U64(ctx, 4));
    // 0x1d303c: 0xfe0003f0  sd          $zero, 0x3F0($s0)
    ctx->pc = 0x1d303cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1008), GPR_U64(ctx, 0));
    // 0x1d3040: 0xfe0003f8  sd          $zero, 0x3F8($s0)
    ctx->pc = 0x1d3040u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1016), GPR_U64(ctx, 0));
    // 0x1d3044: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d3044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3048: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d304c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d304cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3050: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3054: 0xfe040400  sd          $a0, 0x400($s0)
    ctx->pc = 0x1d3054u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1024), GPR_U64(ctx, 4));
    // 0x1d3058: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1d3058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d305c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d305cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3060: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d3060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3064: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3068: 0xfe040408  sd          $a0, 0x408($s0)
    ctx->pc = 0x1d3068u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1032), GPR_U64(ctx, 4));
    // 0x1d306c: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d306cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d3070: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3074: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d3074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d3078: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d307c: 0xfe040410  sd          $a0, 0x410($s0)
    ctx->pc = 0x1d307cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1040), GPR_U64(ctx, 4));
    // 0x1d3080: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d3080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d3084: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3088: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d3088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d308c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d308cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3090: 0xfe040418  sd          $a0, 0x418($s0)
    ctx->pc = 0x1d3090u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1048), GPR_U64(ctx, 4));
    // 0x1d3094: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3098: 0x0  nop
    ctx->pc = 0x1d3098u;
    // NOP
    // 0x1d309c: 0xe6000420  swc1        $f0, 0x420($s0)
    ctx->pc = 0x1d309cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1056), bits); }
    // 0x1d30a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d30a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d30a4: 0x0  nop
    ctx->pc = 0x1d30a4u;
    // NOP
    // 0x1d30a8: 0xe6000424  swc1        $f0, 0x424($s0)
    ctx->pc = 0x1d30a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1060), bits); }
    // 0x1d30ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d30acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d30b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d30b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d30b4: 0x0  nop
    ctx->pc = 0x1d30b4u;
    // NOP
    // 0x1d30b8: 0xe6000428  swc1        $f0, 0x428($s0)
    ctx->pc = 0x1d30b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1064), bits); }
    // 0x1d30bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d30bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d30c0: 0x0  nop
    ctx->pc = 0x1d30c0u;
    // NOP
    // 0x1d30c4: 0xe600042c  swc1        $f0, 0x42C($s0)
    ctx->pc = 0x1d30c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1068), bits); }
    // 0x1d30c8: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d30c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d30cc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d30ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d30d0: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d30d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d30d4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d30d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d30d8: 0xfe040430  sd          $a0, 0x430($s0)
    ctx->pc = 0x1d30d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1072), GPR_U64(ctx, 4));
    // 0x1d30dc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d30dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d30e0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d30e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d30e4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d30e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d30e8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d30e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d30ec: 0xfe040438  sd          $a0, 0x438($s0)
    ctx->pc = 0x1d30ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1080), GPR_U64(ctx, 4));
    // 0x1d30f0: 0xfe000440  sd          $zero, 0x440($s0)
    ctx->pc = 0x1d30f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1088), GPR_U64(ctx, 0));
    // 0x1d30f4: 0xfe000448  sd          $zero, 0x448($s0)
    ctx->pc = 0x1d30f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1096), GPR_U64(ctx, 0));
    // 0x1d30f8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d30f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d30fc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d30fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3100: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d3100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3104: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3108: 0xfe040450  sd          $a0, 0x450($s0)
    ctx->pc = 0x1d3108u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1104), GPR_U64(ctx, 4));
    // 0x1d310c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1d310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d3110: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3114: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d3114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3118: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d311c: 0xfe040458  sd          $a0, 0x458($s0)
    ctx->pc = 0x1d311cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1112), GPR_U64(ctx, 4));
    // 0x1d3120: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d3120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d3124: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3128: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d3128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d312c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d312cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3130: 0xfe040460  sd          $a0, 0x460($s0)
    ctx->pc = 0x1d3130u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1120), GPR_U64(ctx, 4));
    // 0x1d3134: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d3134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d3138: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d313c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d313cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d3140: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3144: 0xfe040468  sd          $a0, 0x468($s0)
    ctx->pc = 0x1d3144u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1128), GPR_U64(ctx, 4));
    // 0x1d3148: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d314c: 0x0  nop
    ctx->pc = 0x1d314cu;
    // NOP
    // 0x1d3150: 0xe6000470  swc1        $f0, 0x470($s0)
    ctx->pc = 0x1d3150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1136), bits); }
    // 0x1d3154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3158: 0x0  nop
    ctx->pc = 0x1d3158u;
    // NOP
    // 0x1d315c: 0xe6000474  swc1        $f0, 0x474($s0)
    ctx->pc = 0x1d315cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1140), bits); }
    // 0x1d3160: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d3160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d3164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3168: 0x0  nop
    ctx->pc = 0x1d3168u;
    // NOP
    // 0x1d316c: 0xe6000478  swc1        $f0, 0x478($s0)
    ctx->pc = 0x1d316cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1144), bits); }
    // 0x1d3170: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3174: 0x0  nop
    ctx->pc = 0x1d3174u;
    // NOP
    // 0x1d3178: 0xe600047c  swc1        $f0, 0x47C($s0)
    ctx->pc = 0x1d3178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1148), bits); }
    // 0x1d317c: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d317cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d3180: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3184: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d3184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d3188: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d318c: 0xfe040480  sd          $a0, 0x480($s0)
    ctx->pc = 0x1d318cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1152), GPR_U64(ctx, 4));
    // 0x1d3190: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d3190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d3194: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3198: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d3198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d319c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d319cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d31a0: 0xfe040488  sd          $a0, 0x488($s0)
    ctx->pc = 0x1d31a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1160), GPR_U64(ctx, 4));
    // 0x1d31a4: 0xfe000490  sd          $zero, 0x490($s0)
    ctx->pc = 0x1d31a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1168), GPR_U64(ctx, 0));
    // 0x1d31a8: 0xfe000498  sd          $zero, 0x498($s0)
    ctx->pc = 0x1d31a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1176), GPR_U64(ctx, 0));
    // 0x1d31ac: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d31acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d31b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d31b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d31b4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d31b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d31b8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d31b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d31bc: 0xfe0404a0  sd          $a0, 0x4A0($s0)
    ctx->pc = 0x1d31bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1184), GPR_U64(ctx, 4));
    // 0x1d31c0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1d31c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d31c4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d31c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d31c8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d31c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d31cc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d31ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d31d0: 0xfe0404a8  sd          $a0, 0x4A8($s0)
    ctx->pc = 0x1d31d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1192), GPR_U64(ctx, 4));
    // 0x1d31d4: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d31d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d31d8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d31d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d31dc: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d31dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d31e0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d31e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d31e4: 0xfe0404b0  sd          $a0, 0x4B0($s0)
    ctx->pc = 0x1d31e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1200), GPR_U64(ctx, 4));
    // 0x1d31e8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d31e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d31ec: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d31ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d31f0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d31f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d31f4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d31f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d31f8: 0xfe0404b8  sd          $a0, 0x4B8($s0)
    ctx->pc = 0x1d31f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1208), GPR_U64(ctx, 4));
    // 0x1d31fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d31fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3200: 0x0  nop
    ctx->pc = 0x1d3200u;
    // NOP
    // 0x1d3204: 0xe60004c0  swc1        $f0, 0x4C0($s0)
    ctx->pc = 0x1d3204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1216), bits); }
    // 0x1d3208: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d320c: 0x0  nop
    ctx->pc = 0x1d320cu;
    // NOP
    // 0x1d3210: 0xe60004c4  swc1        $f0, 0x4C4($s0)
    ctx->pc = 0x1d3210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1220), bits); }
    // 0x1d3214: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d3214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3218: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d3218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d321c: 0x0  nop
    ctx->pc = 0x1d321cu;
    // NOP
    // 0x1d3220: 0xe60004c8  swc1        $f0, 0x4C8($s0)
    ctx->pc = 0x1d3220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1224), bits); }
    // 0x1d3224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3228: 0x0  nop
    ctx->pc = 0x1d3228u;
    // NOP
    // 0x1d322c: 0xe60004cc  swc1        $f0, 0x4CC($s0)
    ctx->pc = 0x1d322cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1228), bits); }
    // 0x1d3230: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d3230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d3234: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3238: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d3238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d323c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d323cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3240: 0xfe0404d0  sd          $a0, 0x4D0($s0)
    ctx->pc = 0x1d3240u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1232), GPR_U64(ctx, 4));
    // 0x1d3244: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d3244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d3248: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d324c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d324cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d3250: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3254: 0xfe0404d8  sd          $a0, 0x4D8($s0)
    ctx->pc = 0x1d3254u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1240), GPR_U64(ctx, 4));
    // 0x1d3258: 0xfe0004e0  sd          $zero, 0x4E0($s0)
    ctx->pc = 0x1d3258u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1248), GPR_U64(ctx, 0));
    // 0x1d325c: 0xfe0004e8  sd          $zero, 0x4E8($s0)
    ctx->pc = 0x1d325cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1256), GPR_U64(ctx, 0));
    // 0x1d3260: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d3260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3264: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3268: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d3268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d326c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d326cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3270: 0xfe0404f0  sd          $a0, 0x4F0($s0)
    ctx->pc = 0x1d3270u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1264), GPR_U64(ctx, 4));
    // 0x1d3274: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1d3274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d3278: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d327c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d327cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3280: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3284: 0xfe0404f8  sd          $a0, 0x4F8($s0)
    ctx->pc = 0x1d3284u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1272), GPR_U64(ctx, 4));
    // 0x1d3288: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d3288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d328c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d328cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3290: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d3290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d3294: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3298: 0xfe040500  sd          $a0, 0x500($s0)
    ctx->pc = 0x1d3298u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 4));
    // 0x1d329c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d329cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d32a0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d32a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d32a4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d32a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d32a8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d32a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d32ac: 0xfe040508  sd          $a0, 0x508($s0)
    ctx->pc = 0x1d32acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1288), GPR_U64(ctx, 4));
    // 0x1d32b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d32b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d32b4: 0x0  nop
    ctx->pc = 0x1d32b4u;
    // NOP
    // 0x1d32b8: 0xe6000510  swc1        $f0, 0x510($s0)
    ctx->pc = 0x1d32b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1296), bits); }
    // 0x1d32bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d32bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d32c0: 0x0  nop
    ctx->pc = 0x1d32c0u;
    // NOP
    // 0x1d32c4: 0xe6000514  swc1        $f0, 0x514($s0)
    ctx->pc = 0x1d32c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1300), bits); }
    // 0x1d32c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d32c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d32cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d32ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d32d0: 0x0  nop
    ctx->pc = 0x1d32d0u;
    // NOP
    // 0x1d32d4: 0xe6000518  swc1        $f0, 0x518($s0)
    ctx->pc = 0x1d32d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1304), bits); }
    // 0x1d32d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d32d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d32dc: 0x0  nop
    ctx->pc = 0x1d32dcu;
    // NOP
    // 0x1d32e0: 0xe600051c  swc1        $f0, 0x51C($s0)
    ctx->pc = 0x1d32e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1308), bits); }
    // 0x1d32e4: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d32e8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d32e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d32ec: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d32ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d32f0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d32f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d32f4: 0xfe040520  sd          $a0, 0x520($s0)
    ctx->pc = 0x1d32f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1312), GPR_U64(ctx, 4));
    // 0x1d32f8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d32f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d32fc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d32fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3300: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d3300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d3304: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3308: 0xfe040528  sd          $a0, 0x528($s0)
    ctx->pc = 0x1d3308u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1320), GPR_U64(ctx, 4));
    // 0x1d330c: 0xfe000530  sd          $zero, 0x530($s0)
    ctx->pc = 0x1d330cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1328), GPR_U64(ctx, 0));
    // 0x1d3310: 0xfe000538  sd          $zero, 0x538($s0)
    ctx->pc = 0x1d3310u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1336), GPR_U64(ctx, 0));
    // 0x1d3314: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d3314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3318: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d331c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d331cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3320: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3324: 0xfe040540  sd          $a0, 0x540($s0)
    ctx->pc = 0x1d3324u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1344), GPR_U64(ctx, 4));
    // 0x1d3328: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1d3328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d332c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d332cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3330: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d3330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3334: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3338: 0xfe040548  sd          $a0, 0x548($s0)
    ctx->pc = 0x1d3338u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1352), GPR_U64(ctx, 4));
    // 0x1d333c: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d333cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d3340: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3344: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d3344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d3348: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d3348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d334c: 0xfe040550  sd          $a0, 0x550($s0)
    ctx->pc = 0x1d334cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1360), GPR_U64(ctx, 4));
    // 0x1d3350: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d3350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d3354: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3358: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d3358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d335c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d335cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3360: 0xfe040558  sd          $a0, 0x558($s0)
    ctx->pc = 0x1d3360u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1368), GPR_U64(ctx, 4));
    // 0x1d3364: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3368: 0x0  nop
    ctx->pc = 0x1d3368u;
    // NOP
    // 0x1d336c: 0xe6000560  swc1        $f0, 0x560($s0)
    ctx->pc = 0x1d336cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1376), bits); }
    // 0x1d3370: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3374: 0x0  nop
    ctx->pc = 0x1d3374u;
    // NOP
    // 0x1d3378: 0xe6000564  swc1        $f0, 0x564($s0)
    ctx->pc = 0x1d3378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1380), bits); }
    // 0x1d337c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d337cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d3380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3384: 0x0  nop
    ctx->pc = 0x1d3384u;
    // NOP
    // 0x1d3388: 0xe6000568  swc1        $f0, 0x568($s0)
    ctx->pc = 0x1d3388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1384), bits); }
    // 0x1d338c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d338cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3390: 0x0  nop
    ctx->pc = 0x1d3390u;
    // NOP
    // 0x1d3394: 0xe600056c  swc1        $f0, 0x56C($s0)
    ctx->pc = 0x1d3394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1388), bits); }
    // 0x1d3398: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d3398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d339c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d339cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d33a0: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d33a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d33a4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d33a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d33a8: 0xfe040570  sd          $a0, 0x570($s0)
    ctx->pc = 0x1d33a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1392), GPR_U64(ctx, 4));
    // 0x1d33ac: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d33acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d33b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d33b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d33b4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d33b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d33b8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d33b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d33bc: 0xfe040578  sd          $a0, 0x578($s0)
    ctx->pc = 0x1d33bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1400), GPR_U64(ctx, 4));
    // 0x1d33c0: 0xfe000580  sd          $zero, 0x580($s0)
    ctx->pc = 0x1d33c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1408), GPR_U64(ctx, 0));
    // 0x1d33c4: 0xfe000588  sd          $zero, 0x588($s0)
    ctx->pc = 0x1d33c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1416), GPR_U64(ctx, 0));
    // 0x1d33c8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d33c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d33cc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d33ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d33d0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d33d4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d33d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d33d8: 0xfe040590  sd          $a0, 0x590($s0)
    ctx->pc = 0x1d33d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1424), GPR_U64(ctx, 4));
    // 0x1d33dc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d33e0: 0xfe030598  sd          $v1, 0x598($s0)
    ctx->pc = 0x1d33e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1432), GPR_U64(ctx, 3));
    // 0x1d33e4: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d33e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d33e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d33e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d33ec: 0x24047000  addiu       $a0, $zero, 0x7000
    ctx->pc = 0x1d33ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d33f0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d33f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d33f4: 0xfe0305a0  sd          $v1, 0x5A0($s0)
    ctx->pc = 0x1d33f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1440), GPR_U64(ctx, 3));
    // 0x1d33f8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d33f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d33fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d33fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3400: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d3400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d3404: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d3404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d3408: 0xfe0305a8  sd          $v1, 0x5A8($s0)
    ctx->pc = 0x1d3408u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1448), GPR_U64(ctx, 3));
    // 0x1d340c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d340cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3410: 0x0  nop
    ctx->pc = 0x1d3410u;
    // NOP
    // 0x1d3414: 0xe60005b0  swc1        $f0, 0x5B0($s0)
    ctx->pc = 0x1d3414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1456), bits); }
    // 0x1d3418: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d341c: 0x0  nop
    ctx->pc = 0x1d341cu;
    // NOP
    // 0x1d3420: 0xe60005b4  swc1        $f0, 0x5B4($s0)
    ctx->pc = 0x1d3420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1460), bits); }
    // 0x1d3424: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d3424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d3428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d342c: 0x0  nop
    ctx->pc = 0x1d342cu;
    // NOP
    // 0x1d3430: 0xe60005b8  swc1        $f0, 0x5B8($s0)
    ctx->pc = 0x1d3430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1464), bits); }
    // 0x1d3434: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3438: 0x0  nop
    ctx->pc = 0x1d3438u;
    // NOP
    // 0x1d343c: 0xe60005bc  swc1        $f0, 0x5BC($s0)
    ctx->pc = 0x1d343cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1468), bits); }
    // 0x1d3440: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d3440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d3444: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3448: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d3448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d344c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d344cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3450: 0xfe0305c0  sd          $v1, 0x5C0($s0)
    ctx->pc = 0x1d3450u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1472), GPR_U64(ctx, 3));
    // 0x1d3454: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d3454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d3458: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d3458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d345c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d345cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d3460: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d3460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d3464: 0xfe0305c8  sd          $v1, 0x5C8($s0)
    ctx->pc = 0x1d3464u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1480), GPR_U64(ctx, 3));
    // 0x1d3468: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1d3468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d346c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1d346cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d3470: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1d3470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d3474: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1d3474u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d3478: 0x1460fccf  bnez        $v1, . + 4 + (-0x331 << 2)
    ctx->pc = 0x1D3478u;
    {
        const bool branch_taken_0x1d3478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3478) {
            ctx->pc = 0x1D27B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d27b8;
        }
    }
    ctx->pc = 0x1D3480u;
    // 0x1d3480: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d3480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d3488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d348c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1d348cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d3490: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3498u;
}
