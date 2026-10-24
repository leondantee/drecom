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

// Function: Gp_Rengt4N_init_work
// Address: 0x1d36e0 - 0x1d3bec
void Gp_Rengt4N_init_work_0x1d36e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_Rengt4N_init_work_0x1d36e0");
#endif

    switch (ctx->pc) {
        case 0x1d374cu: goto label_1d374c;
        case 0x1d3970u: goto label_1d3970;
        default: break;
    }

    ctx->pc = 0x1d36e0u;

    // 0x1d36e0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1d36e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1d36e4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d36e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d36e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d36e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d36ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d36ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d36f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d36f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d36f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d36f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d36f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d36f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d36fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d36fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d3700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d3700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d3704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d3704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3708: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x1d3708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x1d370c: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x1d370cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x1d3710: 0xffa600f8  sd          $a2, 0xF8($sp)
    ctx->pc = 0x1d3710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 6));
    // 0x1d3714: 0xafa70100  sw          $a3, 0x100($sp)
    ctx->pc = 0x1d3714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 7));
    // 0x1d3718: 0xafa80108  sw          $t0, 0x108($sp)
    ctx->pc = 0x1d3718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 8));
    // 0x1d371c: 0xafa90110  sw          $t1, 0x110($sp)
    ctx->pc = 0x1d371cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 9));
    // 0x1d3720: 0xafaa0118  sw          $t2, 0x118($sp)
    ctx->pc = 0x1d3720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 10));
    // 0x1d3724: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d3724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3728: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x1d3728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x1d372c: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1d372cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1d3730: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d3730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3734: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d3734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3738: 0xffa30098  sd          $v1, 0x98($sp)
    ctx->pc = 0x1d3738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 3));
    // 0x1d373c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1d373cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1d3740: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x1d3740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x1d3744: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d3744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d3748: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x1d3748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_1d374c:
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
label_1d3970:
    // 0x1d3970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3974: 0x0  nop
    ctx->pc = 0x1d3974u;
    // NOP
    // 0x1d3978: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d3978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d397c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d397cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3980: 0x0  nop
    ctx->pc = 0x1d3980u;
    // NOP
    // 0x1d3984: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1d3984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d3988: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d3988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d398c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d398cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3990: 0x0  nop
    ctx->pc = 0x1d3990u;
    // NOP
    // 0x1d3994: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1d3994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d3998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d399c: 0x0  nop
    ctx->pc = 0x1d399cu;
    // NOP
    // 0x1d39a0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1d39a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d39a4: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d39a8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d39a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d39ac: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d39acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d39b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d39b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d39b4: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1d39b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1d39b8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d39b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d39bc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d39bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d39c0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d39c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d39c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d39c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d39c8: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x1d39c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x1d39cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d39ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d39d0: 0x0  nop
    ctx->pc = 0x1d39d0u;
    // NOP
    // 0x1d39d4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d39d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d39d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d39d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d39dc: 0x0  nop
    ctx->pc = 0x1d39dcu;
    // NOP
    // 0x1d39e0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1d39e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1d39e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d39e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d39e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d39ec: 0x0  nop
    ctx->pc = 0x1d39ecu;
    // NOP
    // 0x1d39f0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1d39f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1d39f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d39f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d39f8: 0x0  nop
    ctx->pc = 0x1d39f8u;
    // NOP
    // 0x1d39fc: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1d39fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1d3a00: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d3a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d3a04: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3a08: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d3a0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d3a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3a10: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x1d3a10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x1d3a14: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d3a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d3a18: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3a1c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d3a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d3a20: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d3a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3a24: 0xfe030058  sd          $v1, 0x58($s0)
    ctx->pc = 0x1d3a24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 3));
    // 0x1d3a28: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1d3a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1d3a2c: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x1d3a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1d3a30: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3a30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3a34: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3a34u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3a38: 0x0  nop
    ctx->pc = 0x1d3a38u;
    // NOP
    // 0x1d3a3c: 0x0  nop
    ctx->pc = 0x1d3a3cu;
    // NOP
    // 0x1d3a40: 0x1812  mflo        $v1
    ctx->pc = 0x1d3a40u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d3a44: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x1d3a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1d3a48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3a4c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1d3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1d3a50: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1d3a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d3a54: 0x2a31823  subu        $v1, $s5, $v1
    ctx->pc = 0x1d3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d3a58: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3a5c: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3a5cu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3a60: 0x0  nop
    ctx->pc = 0x1d3a60u;
    // NOP
    // 0x1d3a64: 0x0  nop
    ctx->pc = 0x1d3a64u;
    // NOP
    // 0x1d3a68: 0x1812  mflo        $v1
    ctx->pc = 0x1d3a68u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d3a6c: 0x2a31823  subu        $v1, $s5, $v1
    ctx->pc = 0x1d3a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d3a70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3a74: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1d3a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1d3a78: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d3a7c: 0x2c31823  subu        $v1, $s6, $v1
    ctx->pc = 0x1d3a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1d3a80: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3a84: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3a84u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3a88: 0x0  nop
    ctx->pc = 0x1d3a88u;
    // NOP
    // 0x1d3a8c: 0x0  nop
    ctx->pc = 0x1d3a8cu;
    // NOP
    // 0x1d3a90: 0x1812  mflo        $v1
    ctx->pc = 0x1d3a90u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d3a94: 0x2c31823  subu        $v1, $s6, $v1
    ctx->pc = 0x1d3a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1d3a98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3a9c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1d3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1d3aa0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3aa4: 0x2e31823  subu        $v1, $s7, $v1
    ctx->pc = 0x1d3aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1d3aa8: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3aac: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3aacu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3ab0: 0x0  nop
    ctx->pc = 0x1d3ab0u;
    // NOP
    // 0x1d3ab4: 0x0  nop
    ctx->pc = 0x1d3ab4u;
    // NOP
    // 0x1d3ab8: 0x1812  mflo        $v1
    ctx->pc = 0x1d3ab8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d3abc: 0x2e31823  subu        $v1, $s7, $v1
    ctx->pc = 0x1d3abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1d3ac0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3ac4: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1d3ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1d3ac8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1d3ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d3acc: 0x3c31823  subu        $v1, $fp, $v1
    ctx->pc = 0x1d3accu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1d3ad0: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3ad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3ad4: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3ad4u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3ad8: 0x0  nop
    ctx->pc = 0x1d3ad8u;
    // NOP
    // 0x1d3adc: 0x0  nop
    ctx->pc = 0x1d3adcu;
    // NOP
    // 0x1d3ae0: 0x1812  mflo        $v1
    ctx->pc = 0x1d3ae0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d3ae4: 0x3c31823  subu        $v1, $fp, $v1
    ctx->pc = 0x1d3ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1d3ae8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3aec: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1d3aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1d3af0: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x1d3af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d3af4: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x1d3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1d3af8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d3af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d3afc: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3b00: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3b00u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3b04: 0x0  nop
    ctx->pc = 0x1d3b04u;
    // NOP
    // 0x1d3b08: 0x0  nop
    ctx->pc = 0x1d3b08u;
    // NOP
    // 0x1d3b0c: 0x2012  mflo        $a0
    ctx->pc = 0x1d3b0cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1d3b10: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d3b14: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d3b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d3b18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3b1c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1d3b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1d3b20: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1d3b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d3b24: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1d3b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d3b28: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d3b2c: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3b2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3b30: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3b30u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3b34: 0x0  nop
    ctx->pc = 0x1d3b34u;
    // NOP
    // 0x1d3b38: 0x0  nop
    ctx->pc = 0x1d3b38u;
    // NOP
    // 0x1d3b3c: 0x2012  mflo        $a0
    ctx->pc = 0x1d3b3cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1d3b40: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1d3b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d3b44: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d3b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d3b48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3b4c: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1d3b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x1d3b50: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x1d3b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1d3b54: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1d3b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d3b58: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d3b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d3b5c: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3b60: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3b60u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3b64: 0x0  nop
    ctx->pc = 0x1d3b64u;
    // NOP
    // 0x1d3b68: 0x0  nop
    ctx->pc = 0x1d3b68u;
    // NOP
    // 0x1d3b6c: 0x2012  mflo        $a0
    ctx->pc = 0x1d3b6cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1d3b70: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x1d3b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1d3b74: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d3b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d3b78: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3b7c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1d3b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1d3b80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3b84: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1d3b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1d3b88: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1d3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1d3b8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d3b90: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x1d3b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x1d3b94: 0x1460ff76  bnez        $v1, . + 4 + (-0x8A << 2)
    ctx->pc = 0x1D3B94u;
    {
        const bool branch_taken_0x1d3b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3b94) {
            ctx->pc = 0x1D3970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3970;
        }
    }
    ctx->pc = 0x1D3B9Cu;
    // 0x1d3b9c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1d3b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1d3ba0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d3ba4: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x1d3ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x1d3ba8: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x1d3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1d3bac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d3bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d3bb0: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x1d3bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x1d3bb4: 0x1460fee5  bnez        $v1, . + 4 + (-0x11B << 2)
    ctx->pc = 0x1D3BB4u;
    {
        const bool branch_taken_0x1d3bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3bb4) {
            ctx->pc = 0x1D374Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d374c;
        }
    }
    ctx->pc = 0x1D3BBCu;
    // 0x1d3bbc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d3bbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d3bc0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d3bc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d3bc4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d3bc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d3bc8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d3bc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3bcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d3bccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3bd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d3bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3bd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d3bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d3bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3be0: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x1d3be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d3be4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3BECu;
}
