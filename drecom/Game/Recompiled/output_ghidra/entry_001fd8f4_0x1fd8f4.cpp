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

// Function: entry_001fd8f4
// Address: 0x1fd8f4 - 0x1fd9c4
void entry_001fd8f4_0x1fd8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd8f4_0x1fd8f4");
#endif

    ctx->pc = 0x1fd8f4u;

    // 0x1fd8f4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd8f8: 0xc460033c  lwc1        $f0, 0x33C($v1)
    ctx->pc = 0x1fd8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd8fc: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x1fd8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x1fd900: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd904: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1fd904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1fd908: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1fd908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1fd90c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fd90cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd910: 0xc4800270  lwc1        $f0, 0x270($a0)
    ctx->pc = 0x1fd910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd914: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd918: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x1fd918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x1fd91c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd920: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1fd920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1fd924: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1fd924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1fd928: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fd928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd92c: 0xc4800270  lwc1        $f0, 0x270($a0)
    ctx->pc = 0x1fd92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd930: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd934: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x1fd934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x1fd938: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd93c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1fd93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1fd940: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1fd940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1fd944: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fd944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd948: 0xc4800270  lwc1        $f0, 0x270($a0)
    ctx->pc = 0x1fd948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd94c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd94cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd950: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x1fd950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x1fd954: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd958: 0xc4600280  lwc1        $f0, 0x280($v1)
    ctx->pc = 0x1fd958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd95c: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x1fd95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x1fd960: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd964: 0xc4600280  lwc1        $f0, 0x280($v1)
    ctx->pc = 0x1fd964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd968: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x1fd968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x1fd96c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd970: 0xc4800280  lwc1        $f0, 0x280($a0)
    ctx->pc = 0x1fd970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd974: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x1fd974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x1fd978: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd97c: 0xc46002a4  lwc1        $f0, 0x2A4($v1)
    ctx->pc = 0x1fd97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd980: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x1fd980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x1fd984: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd988: 0x9063034f  lbu         $v1, 0x34F($v1)
    ctx->pc = 0x1fd988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1fd98c: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x1fd98cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fd990: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd994: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fd994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fd998: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fd998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd99c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fd99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd9a0: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x1fd9a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1fd9a4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1fd9a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1fd9a8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd9ac: 0x8c830364  lw          $v1, 0x364($a0)
    ctx->pc = 0x1fd9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x1fd9b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1fd9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fd9b4: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x1fd9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x1fd9b8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd9bc: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x1fd9bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1fd9c0: 0xa6030340  sh          $v1, 0x340($s0)
    ctx->pc = 0x1fd9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1fd9c4u;
}
