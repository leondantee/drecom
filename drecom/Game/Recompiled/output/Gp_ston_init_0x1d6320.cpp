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

// Function: Gp_ston_init
// Address: 0x1d6320 - 0x1d6710
void Gp_ston_init_0x1d6320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_ston_init_0x1d6320");
#endif

    ctx->pc = 0x1d6320u;

    // 0x1d6320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d6324: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d6324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d6328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d632c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d632cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d6330: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1d6330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1d6334: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1d6334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1d6338: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d6338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d633c: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1d633cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1d6340: 0x24110700  addiu       $s1, $zero, 0x700
    ctx->pc = 0x1d6340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1d6344: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1d6344u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d6348: 0x3c03b12b  lui         $v1, 0xB12B
    ctx->pc = 0x1d6348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45355 << 16));
    // 0x1d634c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d634cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d6350: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6354: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1d6354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d6358: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d6358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d635c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d635cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6360: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1d6360u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1d6364: 0x24030525  addiu       $v1, $zero, 0x525
    ctx->pc = 0x1d6364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1317));
    // 0x1d6368: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d636c: 0x3c0312e7  lui         $v1, 0x12E7
    ctx->pc = 0x1d636cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4839 << 16));
    // 0x1d6370: 0x3463eeee  ori         $v1, $v1, 0xEEEE
    ctx->pc = 0x1d6370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x1d6374: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d6374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6378: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d637c: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1d637cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1d6380: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d6380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d6384: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6388: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1d6388u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x1d638c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d638cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d6390: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6394: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1d6394u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1d6398: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x1d6398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1d639c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d639cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d63a0: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d63a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d63a4: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x1d63a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1d63a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d63a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d63ac: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x1d63acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x1d63b0: 0x24043001  addiu       $a0, $zero, 0x3001
    ctx->pc = 0x1d63b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x1d63b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d63b8: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d63b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x1d63bc: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1d63bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d63c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d63c4: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x1d63c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x1d63c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d63c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d63cc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d63ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d63d0: 0x3403f000  ori         $v1, $zero, 0xF000
    ctx->pc = 0x1d63d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1d63d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d63d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1d63d8: 0x34633f00  ori         $v1, $v1, 0x3F00
    ctx->pc = 0x1d63d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16128);
    // 0x1d63dc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d63dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d63e0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d63e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d63e4: 0xfc640040  sd          $a0, 0x40($v1)
    ctx->pc = 0x1d63e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 4));
    // 0x1d63e8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d63ec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d63f0: 0xfc640048  sd          $a0, 0x48($v1)
    ctx->pc = 0x1d63f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 4));
    // 0x1d63f4: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1d63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1d63f8: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x1d63f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x1d63fc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d63fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6400: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1d6400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1d6404: 0x34631400  ori         $v1, $v1, 0x1400
    ctx->pc = 0x1d6404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5120);
    // 0x1d6408: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d6408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d640c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6410: 0xfc640050  sd          $a0, 0x50($v1)
    ctx->pc = 0x1d6410u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 4));
    // 0x1d6414: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6418: 0xfc600058  sd          $zero, 0x58($v1)
    ctx->pc = 0x1d6418u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 0));
    // 0x1d641c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6420: 0xfc600060  sd          $zero, 0x60($v1)
    ctx->pc = 0x1d6420u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 0));
    // 0x1d6424: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1d6424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d6428: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d642c: 0xfc640068  sd          $a0, 0x68($v1)
    ctx->pc = 0x1d642cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 4));
    // 0x1d6430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6434: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6438: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x1d6438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x1d643c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d643cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6440: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6444: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x1d6444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x1d6448: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d6448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d644c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d644cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6450: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6454: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x1d6454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x1d6458: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d6458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d645c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d645cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6460: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6464: 0xe460007c  swc1        $f0, 0x7C($v1)
    ctx->pc = 0x1d6464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
    // 0x1d6468: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d6468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d646c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d646cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6470: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d6470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d6474: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d6474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6478: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d647c: 0xfc640080  sd          $a0, 0x80($v1)
    ctx->pc = 0x1d647cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 4));
    // 0x1d6480: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d6480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d6484: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6488: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d6488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d648c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d648cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6490: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6494: 0xfc640088  sd          $a0, 0x88($v1)
    ctx->pc = 0x1d6494u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 136), GPR_U64(ctx, 4));
    // 0x1d6498: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d6498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d649c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d649cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d64a0: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d64a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d64a4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d64a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d64a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d64a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d64ac: 0xfc640090  sd          $a0, 0x90($v1)
    ctx->pc = 0x1d64acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 4));
    // 0x1d64b0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d64b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d64b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d64b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d64b8: 0xfc640098  sd          $a0, 0x98($v1)
    ctx->pc = 0x1d64b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 152), GPR_U64(ctx, 4));
    // 0x1d64bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d64bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d64c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d64c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d64c4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d64c8: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1d64c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x1d64cc: 0x3c033f5f  lui         $v1, 0x3F5F
    ctx->pc = 0x1d64ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16223 << 16));
    // 0x1d64d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d64d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d64d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d64d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d64d8: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x1d64d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x1d64dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d64dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d64e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d64e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d64e4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d64e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d64e8: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x1d64e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x1d64ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d64ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d64f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d64f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d64f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d64f8: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x1d64f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x1d64fc: 0x340386f0  ori         $v1, $zero, 0x86F0
    ctx->pc = 0x1d64fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34544);
    // 0x1d6500: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6504: 0x34038ff0  ori         $v1, $zero, 0x8FF0
    ctx->pc = 0x1d6504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36848);
    // 0x1d6508: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d6508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d650c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6510: 0xfc6400b0  sd          $a0, 0xB0($v1)
    ctx->pc = 0x1d6510u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 176), GPR_U64(ctx, 4));
    // 0x1d6514: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d6514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d6518: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d651c: 0xfc6400b8  sd          $a0, 0xB8($v1)
    ctx->pc = 0x1d651cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 4));
    // 0x1d6520: 0x3c03b12b  lui         $v1, 0xB12B
    ctx->pc = 0x1d6520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45355 << 16));
    // 0x1d6524: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d6524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d6528: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d652c: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1d652cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d6530: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d6530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6534: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6538: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1d6538u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1d653c: 0x24030525  addiu       $v1, $zero, 0x525
    ctx->pc = 0x1d653cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1317));
    // 0x1d6540: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6544: 0x3c0312e7  lui         $v1, 0x12E7
    ctx->pc = 0x1d6544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4839 << 16));
    // 0x1d6548: 0x3463eeee  ori         $v1, $v1, 0xEEEE
    ctx->pc = 0x1d6548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x1d654c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d654cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6550: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6554: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1d6554u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1d6558: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d6558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d655c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d655cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6560: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1d6560u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x1d6564: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d6564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d6568: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d656c: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1d656cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1d6570: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x1d6570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1d6574: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6578: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d6578u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d657c: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x1d657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1d6580: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6584: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x1d6584u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x1d6588: 0x24043001  addiu       $a0, $zero, 0x3001
    ctx->pc = 0x1d6588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x1d658c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d658cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6590: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d6590u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x1d6594: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1d6594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d6598: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d659c: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x1d659cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x1d65a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d65a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d65a4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d65a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d65a8: 0x3403f000  ori         $v1, $zero, 0xF000
    ctx->pc = 0x1d65a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1d65ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d65acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1d65b0: 0x34633f00  ori         $v1, $v1, 0x3F00
    ctx->pc = 0x1d65b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16128);
    // 0x1d65b4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d65b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d65b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d65bc: 0xfc640040  sd          $a0, 0x40($v1)
    ctx->pc = 0x1d65bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 4));
    // 0x1d65c0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d65c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d65c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d65c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d65c8: 0xfc640048  sd          $a0, 0x48($v1)
    ctx->pc = 0x1d65c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 4));
    // 0x1d65cc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1d65ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1d65d0: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x1d65d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x1d65d4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d65d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d65d8: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1d65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1d65dc: 0x34631400  ori         $v1, $v1, 0x1400
    ctx->pc = 0x1d65dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5120);
    // 0x1d65e0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d65e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d65e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d65e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d65e8: 0xfc640050  sd          $a0, 0x50($v1)
    ctx->pc = 0x1d65e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 4));
    // 0x1d65ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d65ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d65f0: 0xfc600058  sd          $zero, 0x58($v1)
    ctx->pc = 0x1d65f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 0));
    // 0x1d65f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d65f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d65f8: 0xfc600060  sd          $zero, 0x60($v1)
    ctx->pc = 0x1d65f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 0));
    // 0x1d65fc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1d65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d6600: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6604: 0xfc640068  sd          $a0, 0x68($v1)
    ctx->pc = 0x1d6604u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 4));
    // 0x1d6608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d660c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6610: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x1d6610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x1d6614: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6618: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d661c: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x1d661cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x1d6620: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d6620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d6624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6628: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d662c: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x1d662cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x1d6630: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d6630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d6634: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6638: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d663c: 0xe460007c  swc1        $f0, 0x7C($v1)
    ctx->pc = 0x1d663cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
    // 0x1d6640: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d6640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d6644: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6648: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d6648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d664c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d664cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6650: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6654: 0xfc640080  sd          $a0, 0x80($v1)
    ctx->pc = 0x1d6654u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 4));
    // 0x1d6658: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d6658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d665c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d665cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6660: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d6660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d6664: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d6664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6668: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d666c: 0xfc640088  sd          $a0, 0x88($v1)
    ctx->pc = 0x1d666cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 136), GPR_U64(ctx, 4));
    // 0x1d6670: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d6670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d6674: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6678: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d6678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d667c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d667cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6680: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6684: 0xfc640090  sd          $a0, 0x90($v1)
    ctx->pc = 0x1d6684u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 4));
    // 0x1d6688: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d6688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d668c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d668cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6690: 0xfc640098  sd          $a0, 0x98($v1)
    ctx->pc = 0x1d6690u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 152), GPR_U64(ctx, 4));
    // 0x1d6694: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d6694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d6698: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d669c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d66a0: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1d66a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x1d66a4: 0x3c033f5f  lui         $v1, 0x3F5F
    ctx->pc = 0x1d66a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16223 << 16));
    // 0x1d66a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d66a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d66ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d66acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d66b0: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x1d66b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x1d66b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d66b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d66b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d66b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d66bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d66bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d66c0: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x1d66c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x1d66c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d66c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d66c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d66c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d66cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d66ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d66d0: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x1d66d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x1d66d4: 0x340386f0  ori         $v1, $zero, 0x86F0
    ctx->pc = 0x1d66d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34544);
    // 0x1d66d8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d66d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d66dc: 0x34038ff0  ori         $v1, $zero, 0x8FF0
    ctx->pc = 0x1d66dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36848);
    // 0x1d66e0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d66e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d66e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d66e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d66e8: 0xfc6400b0  sd          $a0, 0xB0($v1)
    ctx->pc = 0x1d66e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 176), GPR_U64(ctx, 4));
    // 0x1d66ec: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d66ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d66f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d66f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d66f4: 0xfc6400b8  sd          $a0, 0xB8($v1)
    ctx->pc = 0x1d66f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 4));
    // 0x1d66f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d66f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d66fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d66fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d6700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6704: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d6704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d6708: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6710u;
}
