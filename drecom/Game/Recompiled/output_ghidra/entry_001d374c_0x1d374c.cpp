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

// Function: entry_001d374c
// Address: 0x1d374c - 0x1d3970
void entry_001d374c_0x1d374c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d374c_0x1d374c");
#endif

    ctx->pc = 0x1d374cu;

    // 0x1d374c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1d374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1d3750: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d3750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d3754: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1d3754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1d3758: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x1d3758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x1d375c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1d375cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1d3760: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1d3760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d3764: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x1d3764u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3768: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1d3768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d376c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1d376cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1d3770: 0x3aa02  srl         $s5, $v1, 8
    ctx->pc = 0x1d3770u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1d3774: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1d3774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d3778: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1d3778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1d377c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d377cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d3780: 0x3b402  srl         $s6, $v1, 16
    ctx->pc = 0x1d3780u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1d3784: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1d3784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d3788: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1d3788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1d378c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d378cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d3790: 0x3be02  srl         $s7, $v1, 24
    ctx->pc = 0x1d3790u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1d3794: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1d3794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1d3798: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d379c: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x1d379cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x1d37a0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1d37a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1d37a4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1d37a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1d37a8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1d37a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1d37ac: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x1d37acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x1d37b0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1d37b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1d37b4: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1d37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1d37b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d37b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d37bc: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1d37bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1d37c0: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x1d37c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x1d37c4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1d37c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1d37c8: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1d37c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1d37cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d37ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d37d0: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x1d37d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1d37d4: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1d37d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1d37d8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1d37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d37dc: 0x307e00ff  andi        $fp, $v1, 0xFF
    ctx->pc = 0x1d37dcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d37e0: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1d37e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d37e4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1d37e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1d37e8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1d37e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1d37ec: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x1d37ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x1d37f0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x1d37f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d37f4: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1d37f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1d37f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d37f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d37fc: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1d37fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1d3800: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x1d3800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x1d3804: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x1d3804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d3808: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1d3808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1d380c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d380cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d3810: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x1d3810u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1d3814: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x1d3814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x1d3818: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x1d3818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1d381c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d381cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3820: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1d3820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x1d3824: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x1d3824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1d3828: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1d3828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1d382c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1d382cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1d3830: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x1d3830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x1d3834: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x1d3834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1d3838: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1d3838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1d383c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d383cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d3840: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1d3840u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1d3844: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x1d3844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x1d3848: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x1d3848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1d384c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1d384cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1d3850: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d3850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d3854: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x1d3854u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1d3858: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x1d3858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x1d385c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1d385cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d3860: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x1d3860u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d3864: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x1d3864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x1d3868: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d386c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d386cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3870: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d3870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3874: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1d3874u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x1d3878: 0x3c0300e7  lui         $v1, 0xE7
    ctx->pc = 0x1d3878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)231 << 16));
    // 0x1d387c: 0x3463eeee  ori         $v1, $v1, 0xEEEE
    ctx->pc = 0x1d387cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x1d3880: 0xfe630008  sd          $v1, 0x8($s3)
    ctx->pc = 0x1d3880u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 3));
    // 0x1d3884: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d3884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d3888: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x1d3888u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x1d388c: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1d388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d3890: 0xfe630018  sd          $v1, 0x18($s3)
    ctx->pc = 0x1d3890u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 3));
    // 0x1d3894: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d3894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3898: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d389c: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1d389cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1d38a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d38a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d38a4: 0xfe630020  sd          $v1, 0x20($s3)
    ctx->pc = 0x1d38a4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 3));
    // 0x1d38a8: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1d38a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1d38ac: 0xfe630028  sd          $v1, 0x28($s3)
    ctx->pc = 0x1d38acu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 3));
    // 0x1d38b0: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1d38b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1d38b4: 0xfe630030  sd          $v1, 0x30($s3)
    ctx->pc = 0x1d38b4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 3));
    // 0x1d38b8: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1d38b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d38bc: 0xfe630038  sd          $v1, 0x38($s3)
    ctx->pc = 0x1d38bcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 3));
    // 0x1d38c0: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x1d38c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1d38c4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d38c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d38c8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1d38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x1d38cc: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x1d38ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x1d38d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d38d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d38d4: 0xfe630040  sd          $v1, 0x40($s3)
    ctx->pc = 0x1d38d4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 3));
    // 0x1d38d8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1d38d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d38dc: 0xfe630048  sd          $v1, 0x48($s3)
    ctx->pc = 0x1d38dcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 72), GPR_U64(ctx, 3));
    // 0x1d38e0: 0xdfa300f8  ld          $v1, 0xF8($sp)
    ctx->pc = 0x1d38e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1d38e4: 0xfe630050  sd          $v1, 0x50($s3)
    ctx->pc = 0x1d38e4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 80), GPR_U64(ctx, 3));
    // 0x1d38e8: 0xfe600058  sd          $zero, 0x58($s3)
    ctx->pc = 0x1d38e8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 88), GPR_U64(ctx, 0));
    // 0x1d38ec: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1d38ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d38f0: 0xfe630060  sd          $v1, 0x60($s3)
    ctx->pc = 0x1d38f0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 3));
    // 0x1d38f4: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1d38f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d38f8: 0xfe630068  sd          $v1, 0x68($s3)
    ctx->pc = 0x1d38f8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 104), GPR_U64(ctx, 3));
    // 0x1d38fc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1d38fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d3900: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1d3900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d3904: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1d3904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d3908: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d3908u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d390c: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x1d390cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1d3910: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x1d3910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1d3914: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d3914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3918: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d3918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d391c: 0x3c030126  lui         $v1, 0x126
    ctx->pc = 0x1d391cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)294 << 16));
    // 0x1d3920: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d3920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3924: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d3924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d3928: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x1d3928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x1d392c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d392cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3930: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d3930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d3934: 0xfe630070  sd          $v1, 0x70($s3)
    ctx->pc = 0x1d3934u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 112), GPR_U64(ctx, 3));
    // 0x1d3938: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d3938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1d393c: 0x34632512  ori         $v1, $v1, 0x2512
    ctx->pc = 0x1d393cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9490);
    // 0x1d3940: 0xfe630078  sd          $v1, 0x78($s3)
    ctx->pc = 0x1d3940u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 120), GPR_U64(ctx, 3));
    // 0x1d3944: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1d3944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d3948: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1d3948u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d394c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1d394cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d3950: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d3950u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d3954: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x1d3954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x1d3958: 0x26700080  addiu       $s0, $s3, 0x80
    ctx->pc = 0x1d3958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x1d395c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1d395cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d3960: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1d3960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d3964: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1d3964u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d3968: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x1d3968u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d396c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1d396cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    ctx->pc = 0x1d3970u;
}
