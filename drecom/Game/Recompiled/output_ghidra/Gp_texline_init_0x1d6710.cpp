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

// Function: Gp_texline_init
// Address: 0x1d6710 - 0x1d69dc
void Gp_texline_init_0x1d6710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_texline_init_0x1d6710");
#endif

    ctx->pc = 0x1d6710u;

    // 0x1d6710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6714: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d6714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d6718: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1d6718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1d671c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1d6720: 0xffa60028  sd          $a2, 0x28($sp)
    ctx->pc = 0x1d6720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 6));
    // 0x1d6724: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d6724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d6728: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1d6728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1d672c: 0x3c03b188  lui         $v1, 0xB188
    ctx->pc = 0x1d672cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45448 << 16));
    // 0x1d6730: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x1d6730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x1d6734: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6738: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1d6738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d673c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d673cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6740: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d6740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6744: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1d6744u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1d6748: 0x24030535  addiu       $v1, $zero, 0x535
    ctx->pc = 0x1d6748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1333));
    // 0x1d674c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d674cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6750: 0x3c0313e7  lui         $v1, 0x13E7
    ctx->pc = 0x1d6750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5095 << 16));
    // 0x1d6754: 0x3463eeee  ori         $v1, $v1, 0xEEEE
    ctx->pc = 0x1d6754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x1d6758: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d6758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d675c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d675cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6760: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1d6760u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1d6764: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d6764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d6768: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d6768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d676c: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1d676cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x1d6770: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d6770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d6774: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d6774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6778: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1d6778u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1d677c: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x1d677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1d6780: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d6780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6784: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d6784u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d6788: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x1d6788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1d678c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d678cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6790: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x1d6790u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x1d6794: 0x24041001  addiu       $a0, $zero, 0x1001
    ctx->pc = 0x1d6794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x1d6798: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d6798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d679c: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d679cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x1d67a0: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1d67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d67a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d67a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d67a8: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x1d67a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x1d67ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d67acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d67b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d67b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d67b4: 0x3403f000  ori         $v1, $zero, 0xF000
    ctx->pc = 0x1d67b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1d67b8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d67b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1d67bc: 0x34633f00  ori         $v1, $v1, 0x3F00
    ctx->pc = 0x1d67bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16128);
    // 0x1d67c0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d67c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d67c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d67c8: 0xfc640040  sd          $a0, 0x40($v1)
    ctx->pc = 0x1d67c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 4));
    // 0x1d67cc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d67ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d67d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d67d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d67d4: 0xfc640048  sd          $a0, 0x48($v1)
    ctx->pc = 0x1d67d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 4));
    // 0x1d67d8: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x1d67d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d67dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d67dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d67e0: 0xfc640050  sd          $a0, 0x50($v1)
    ctx->pc = 0x1d67e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 4));
    // 0x1d67e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d67e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d67e8: 0xfc600058  sd          $zero, 0x58($v1)
    ctx->pc = 0x1d67e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 0));
    // 0x1d67ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d67ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d67f0: 0xfc600060  sd          $zero, 0x60($v1)
    ctx->pc = 0x1d67f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 0));
    // 0x1d67f4: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1d67f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d67f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d67f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d67fc: 0xfc640068  sd          $a0, 0x68($v1)
    ctx->pc = 0x1d67fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 4));
    // 0x1d6800: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d6800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6804: 0xfc600070  sd          $zero, 0x70($v1)
    ctx->pc = 0x1d6804u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 0));
    // 0x1d6808: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d6808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d680c: 0xfc600078  sd          $zero, 0x78($v1)
    ctx->pc = 0x1d680cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 120), GPR_U64(ctx, 0));
    // 0x1d6810: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d6810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6814: 0xfc600080  sd          $zero, 0x80($v1)
    ctx->pc = 0x1d6814u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 0));
    // 0x1d6818: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d6818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d681c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d681cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6820: 0xfc640088  sd          $a0, 0x88($v1)
    ctx->pc = 0x1d6820u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 136), GPR_U64(ctx, 4));
    // 0x1d6824: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d6824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d6828: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d682c: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d6830: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d6830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6834: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d6834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6838: 0xfc640090  sd          $a0, 0x90($v1)
    ctx->pc = 0x1d6838u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 4));
    // 0x1d683c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d683cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d6840: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d6840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6844: 0xfc640098  sd          $a0, 0x98($v1)
    ctx->pc = 0x1d6844u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 152), GPR_U64(ctx, 4));
    // 0x1d6848: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d6848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d684c: 0xfc6000a0  sd          $zero, 0xA0($v1)
    ctx->pc = 0x1d684cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 160), GPR_U64(ctx, 0));
    // 0x1d6850: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d6850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6854: 0xfc6000a8  sd          $zero, 0xA8($v1)
    ctx->pc = 0x1d6854u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 0));
    // 0x1d6858: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d6858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d685c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d685cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6860: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d6860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d6864: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d6864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6868: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d6868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d686c: 0xfc6400b0  sd          $a0, 0xB0($v1)
    ctx->pc = 0x1d686cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 176), GPR_U64(ctx, 4));
    // 0x1d6870: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d6870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d6874: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d6874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6878: 0xfc6400b8  sd          $a0, 0xB8($v1)
    ctx->pc = 0x1d6878u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 4));
    // 0x1d687c: 0x3c03b188  lui         $v1, 0xB188
    ctx->pc = 0x1d687cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45448 << 16));
    // 0x1d6880: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x1d6880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x1d6884: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6888: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1d6888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d688c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d688cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6890: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d6890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6894: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1d6894u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1d6898: 0x24030535  addiu       $v1, $zero, 0x535
    ctx->pc = 0x1d6898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1333));
    // 0x1d689c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d689cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d68a0: 0x3c0313e7  lui         $v1, 0x13E7
    ctx->pc = 0x1d68a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5095 << 16));
    // 0x1d68a4: 0x3463eeee  ori         $v1, $v1, 0xEEEE
    ctx->pc = 0x1d68a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x1d68a8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d68a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d68ac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d68acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d68b0: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1d68b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1d68b4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d68b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d68b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d68bc: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1d68bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x1d68c0: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d68c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d68c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d68c8: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1d68c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1d68cc: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x1d68ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1d68d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d68d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d68d4: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d68d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d68d8: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x1d68d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1d68dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d68e0: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x1d68e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x1d68e4: 0x24041001  addiu       $a0, $zero, 0x1001
    ctx->pc = 0x1d68e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x1d68e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d68e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d68ec: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d68ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x1d68f0: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1d68f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d68f4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d68f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d68f8: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x1d68f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x1d68fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d68fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d6900: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6904: 0x3403f000  ori         $v1, $zero, 0xF000
    ctx->pc = 0x1d6904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1d6908: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d6908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1d690c: 0x34633f00  ori         $v1, $v1, 0x3F00
    ctx->pc = 0x1d690cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16128);
    // 0x1d6910: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d6910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6914: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d6914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6918: 0xfc640040  sd          $a0, 0x40($v1)
    ctx->pc = 0x1d6918u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 4));
    // 0x1d691c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d691cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d6920: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d6920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6924: 0xfc640048  sd          $a0, 0x48($v1)
    ctx->pc = 0x1d6924u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 4));
    // 0x1d6928: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x1d6928u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d692c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d692cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6930: 0xfc640050  sd          $a0, 0x50($v1)
    ctx->pc = 0x1d6930u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 4));
    // 0x1d6934: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d6934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6938: 0xfc600058  sd          $zero, 0x58($v1)
    ctx->pc = 0x1d6938u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 0));
    // 0x1d693c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6940: 0xfc600060  sd          $zero, 0x60($v1)
    ctx->pc = 0x1d6940u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 0));
    // 0x1d6944: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1d6944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d6948: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d6948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d694c: 0xfc640068  sd          $a0, 0x68($v1)
    ctx->pc = 0x1d694cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 4));
    // 0x1d6950: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d6950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6954: 0xfc600070  sd          $zero, 0x70($v1)
    ctx->pc = 0x1d6954u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 0));
    // 0x1d6958: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d6958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d695c: 0xfc600078  sd          $zero, 0x78($v1)
    ctx->pc = 0x1d695cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 120), GPR_U64(ctx, 0));
    // 0x1d6960: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d6960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6964: 0xfc600080  sd          $zero, 0x80($v1)
    ctx->pc = 0x1d6964u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 0));
    // 0x1d6968: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d6968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d696c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d696cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6970: 0xfc640088  sd          $a0, 0x88($v1)
    ctx->pc = 0x1d6970u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 136), GPR_U64(ctx, 4));
    // 0x1d6974: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d6974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d6978: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d697c: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d6980: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d6980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6984: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d6984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6988: 0xfc640090  sd          $a0, 0x90($v1)
    ctx->pc = 0x1d6988u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 4));
    // 0x1d698c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d698cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d6990: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d6990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6994: 0xfc640098  sd          $a0, 0x98($v1)
    ctx->pc = 0x1d6994u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 152), GPR_U64(ctx, 4));
    // 0x1d6998: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d6998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d699c: 0xfc6000a0  sd          $zero, 0xA0($v1)
    ctx->pc = 0x1d699cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 160), GPR_U64(ctx, 0));
    // 0x1d69a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d69a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d69a4: 0xfc6000a8  sd          $zero, 0xA8($v1)
    ctx->pc = 0x1d69a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 0));
    // 0x1d69a8: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d69a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d69ac: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d69acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d69b0: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d69b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d69b4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d69b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d69b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d69b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d69bc: 0xfc6400b0  sd          $a0, 0xB0($v1)
    ctx->pc = 0x1d69bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 176), GPR_U64(ctx, 4));
    // 0x1d69c0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d69c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d69c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d69c8: 0xfc6400b8  sd          $a0, 0xB8($v1)
    ctx->pc = 0x1d69c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 4));
    // 0x1d69cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d69ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d69d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d69d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d69d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D69D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D69D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D69DCu;
}
