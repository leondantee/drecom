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

// Function: Morph_init
// Address: 0x1af780 - 0x1afb08
void Morph_init_0x1af780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Morph_init_0x1af780");
#endif

    switch (ctx->pc) {
        case 0x1af814u: goto label_1af814;
        case 0x1af8b0u: goto label_1af8b0;
        case 0x1af8f8u: goto label_1af8f8;
        case 0x1af930u: goto label_1af930;
        case 0x1af990u: goto label_1af990;
        case 0x1af9c8u: goto label_1af9c8;
        case 0x1afa50u: goto label_1afa50;
        default: break;
    }

    ctx->pc = 0x1af780u;

    // 0x1af780: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x1af780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
    // 0x1af784: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1af784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1af788: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1af788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1af78c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1af78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1af790: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1af790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1af794: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1af794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1af798: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1af798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1af79c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1af79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1af7a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af7a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af7a8: 0xafa404b8  sw          $a0, 0x4B8($sp)
    ctx->pc = 0x1af7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1208), GPR_U32(ctx, 4));
    // 0x1af7ac: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1af7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1af7b0: 0x24770080  addiu       $s7, $v1, 0x80
    ctx->pc = 0x1af7b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1af7b4: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1af7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1af7b8: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1af7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1af7bc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1af7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1af7c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1af7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1af7c4: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1af7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1af7c8: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x1af7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1af7cc: 0xa4600096  sh          $zero, 0x96($v1)
    ctx->pc = 0x1af7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x1af7d0: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x1af7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1af7d4: 0xa4600094  sh          $zero, 0x94($v1)
    ctx->pc = 0x1af7d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x1af7d8: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x1af7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1af7dc: 0xa4600098  sh          $zero, 0x98($v1)
    ctx->pc = 0x1af7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 152), (uint16_t)GPR_U32(ctx, 0));
    // 0x1af7e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1af7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af7e4: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x1af7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1af7e8: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x1af7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x1af7ec: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x1af7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1af7f0: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x1af7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1af7f4: 0xafa30494  sw          $v1, 0x494($sp)
    ctx->pc = 0x1af7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 3));
    // 0x1af7f8: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1af7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1af7fc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1af7fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1af800: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1af800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1af804: 0xa7a304ae  sh          $v1, 0x4AE($sp)
    ctx->pc = 0x1af804u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1198), (uint16_t)GPR_U32(ctx, 3));
    // 0x1af808: 0xafa004a4  sw          $zero, 0x4A4($sp)
    ctx->pc = 0x1af808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
    // 0x1af80c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1af80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1af810: 0xafa3049c  sw          $v1, 0x49C($sp)
    ctx->pc = 0x1af810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 3));
label_1af814:
    // 0x1af814: 0x8fa304a4  lw          $v1, 0x4A4($sp)
    ctx->pc = 0x1af814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1af818: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1af818u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af81c: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1af81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1af820: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1af820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af824: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1af824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1af828: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1af828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1af82c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1af82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af830: 0xafa304a0  sw          $v1, 0x4A0($sp)
    ctx->pc = 0x1af830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 3));
    // 0x1af834: 0x8fa304a0  lw          $v1, 0x4A0($sp)
    ctx->pc = 0x1af834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1af838: 0xafa30498  sw          $v1, 0x498($sp)
    ctx->pc = 0x1af838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 3));
    // 0x1af83c: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1af83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1af840: 0x24760004  addiu       $s6, $v1, 0x4
    ctx->pc = 0x1af840u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1af844: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x1af844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1af848: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1af848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1af84c: 0xafa30490  sw          $v1, 0x490($sp)
    ctx->pc = 0x1af84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 3));
    // 0x1af850: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1af850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1af854: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1af854u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1af858: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1af858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1af85c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1af85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1af860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1af860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af864: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1af864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1af868: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x1af868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1af86c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1af86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af870: 0xafa30490  sw          $v1, 0x490($sp)
    ctx->pc = 0x1af870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 3));
    // 0x1af874: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x1af874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1af878: 0x8c750034  lw          $s5, 0x34($v1)
    ctx->pc = 0x1af878u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1af87c: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1af87cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1af880: 0xafa004a8  sw          $zero, 0x4A8($sp)
    ctx->pc = 0x1af880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 0));
    // 0x1af884: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1af884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1af888: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1af888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1af88c: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1af88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1af890: 0x8fa3049c  lw          $v1, 0x49C($sp)
    ctx->pc = 0x1af890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1af894: 0x1083006e  beq         $a0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x1AF894u;
    {
        const bool branch_taken_0x1af894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1af894) {
            ctx->pc = 0x1AFA50u;
            goto label_1afa50;
        }
    }
    ctx->pc = 0x1AF89Cu;
    // 0x1af89c: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1af89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1af8a0: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1af8a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1af8a4: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1af8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1af8a8: 0xafa3049c  sw          $v1, 0x49C($sp)
    ctx->pc = 0x1af8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 3));
    // 0x1af8ac: 0x0  nop
    ctx->pc = 0x1af8acu;
    // NOP
label_1af8b0:
    // 0x1af8b0: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1af8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1af8b4: 0xaec3000c  sw          $v1, 0xC($s6)
    ctx->pc = 0x1af8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 3));
    // 0x1af8b8: 0x8eb00028  lw          $s0, 0x28($s5)
    ctx->pc = 0x1af8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1af8bc: 0x8ef30a68  lw          $s3, 0xA68($s7)
    ctx->pc = 0x1af8bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1af8c0: 0x72609628  paddub      $s2, $s3, $zero
    ctx->pc = 0x1af8c0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1af8c4: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1af8c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1af8c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1af8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1af8cc: 0x17c30002  bne         $fp, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF8CCu;
    {
        const bool branch_taken_0x1af8cc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1af8cc) {
            ctx->pc = 0x1AF8D8u;
            goto label_1af8d8;
        }
    }
    ctx->pc = 0x1AF8D4u;
    // 0x1af8d4: 0xaed00008  sw          $s0, 0x8($s6)
    ctx->pc = 0x1af8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
label_1af8d8:
    // 0x1af8d8: 0x8fa404a8  lw          $a0, 0x4A8($sp)
    ctx->pc = 0x1af8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1af8dc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1af8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1af8e0: 0xafa304a8  sw          $v1, 0x4A8($sp)
    ctx->pc = 0x1af8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 3));
    // 0x1af8e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1af8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1af8e8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1af8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1af8ec: 0xac700090  sw          $s0, 0x90($v1)
    ctx->pc = 0x1af8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 16));
    // 0x1af8f0: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x1af8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1af8f4: 0x0  nop
    ctx->pc = 0x1af8f4u;
    // NOP
label_1af8f8:
    // 0x1af8f8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1af8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af8fc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1af8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af900: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1af900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af904: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x1af904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1af908: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1af908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1af90c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1af90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1af910: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1af910u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1af914: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1af914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1af918: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1af918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1af91c: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AF91Cu;
    {
        const bool branch_taken_0x1af91c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af91c) {
            ctx->pc = 0x1AF8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af8f8;
        }
    }
    ctx->pc = 0x1AF924u;
    // 0x1af924: 0x8eb40018  lw          $s4, 0x18($s5)
    ctx->pc = 0x1af924u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1af928: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1af928u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1af92c: 0xaeb20028  sw          $s2, 0x28($s5)
    ctx->pc = 0x1af92cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 18));
label_1af930:
    // 0x1af930: 0xae920044  sw          $s2, 0x44($s4)
    ctx->pc = 0x1af930u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 18));
    // 0x1af934: 0x26520240  addiu       $s2, $s2, 0x240
    ctx->pc = 0x1af934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x1af938: 0x269400a0  addiu       $s4, $s4, 0xA0
    ctx->pc = 0x1af938u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x1af93c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1af93cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1af940: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AF940u;
    {
        const bool branch_taken_0x1af940 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af940) {
            ctx->pc = 0x1AF930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af930;
        }
    }
    ctx->pc = 0x1AF948u;
    // 0x1af948: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1af948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1af94c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1af94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1af950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1af950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af954: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1af954u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af958: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1af958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1af95c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1af95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1af960: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1af960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1af964: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1af964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1af968: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1af968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1af96c: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1af96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1af970: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1af970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1af974: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1af974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1af978: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1af978u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1af97c: 0x8eb00028  lw          $s0, 0x28($s5)
    ctx->pc = 0x1af97cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1af980: 0x8ef30a68  lw          $s3, 0xA68($s7)
    ctx->pc = 0x1af980u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1af984: 0x72609628  paddub      $s2, $s3, $zero
    ctx->pc = 0x1af984u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1af988: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x1af988u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1af98c: 0x0  nop
    ctx->pc = 0x1af98cu;
    // NOP
label_1af990:
    // 0x1af990: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1af990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af994: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1af994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af998: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1af998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af99c: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x1af99cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1af9a0: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1af9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1af9a4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1af9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1af9a8: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1af9a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1af9ac: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1af9acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1af9b0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1af9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1af9b4: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AF9B4u;
    {
        const bool branch_taken_0x1af9b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af9b4) {
            ctx->pc = 0x1AF990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af990;
        }
    }
    ctx->pc = 0x1AF9BCu;
    // 0x1af9bc: 0x8eb4001c  lw          $s4, 0x1C($s5)
    ctx->pc = 0x1af9bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1af9c0: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1af9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1af9c4: 0xaeb2002c  sw          $s2, 0x2C($s5)
    ctx->pc = 0x1af9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 18));
label_1af9c8:
    // 0x1af9c8: 0xae920044  sw          $s2, 0x44($s4)
    ctx->pc = 0x1af9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 18));
    // 0x1af9cc: 0x26520240  addiu       $s2, $s2, 0x240
    ctx->pc = 0x1af9ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x1af9d0: 0x269400a0  addiu       $s4, $s4, 0xA0
    ctx->pc = 0x1af9d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x1af9d4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1af9d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1af9d8: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AF9D8u;
    {
        const bool branch_taken_0x1af9d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af9d8) {
            ctx->pc = 0x1AF9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af9c8;
        }
    }
    ctx->pc = 0x1AF9E0u;
    // 0x1af9e0: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1af9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1af9e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1af9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1af9e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1af9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af9ec: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1af9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af9f0: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1af9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1af9f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1af9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1af9f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1af9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1af9fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1af9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1afa00: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1afa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1afa04: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1afa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1afa08: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1afa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1afa0c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1afa0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1afa10: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1afa10u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1afa14: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1afa14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1afa18: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1afa18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1afa1c: 0x17c30002  bne         $fp, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFA1Cu;
    {
        const bool branch_taken_0x1afa1c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afa1c) {
            ctx->pc = 0x1AFA28u;
            goto label_1afa28;
        }
    }
    ctx->pc = 0x1AFA24u;
    // 0x1afa24: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1afa24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_1afa28:
    // 0x1afa28: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1afa28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1afa2c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1afa2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1afa30: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x1afa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1afa34: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1afa34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1afa38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1afa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1afa3c: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x1afa3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1afa40: 0x1460ff9b  bnez        $v1, . + 4 + (-0x65 << 2)
    ctx->pc = 0x1AFA40u;
    {
        const bool branch_taken_0x1afa40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afa40) {
            ctx->pc = 0x1AF8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af8b0;
        }
    }
    ctx->pc = 0x1AFA48u;
    // 0x1afa48: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1AFA48u;
    {
        const bool branch_taken_0x1afa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afa48) {
            ctx->pc = 0x1AFAB8u;
            goto label_1afab8;
        }
    }
    ctx->pc = 0x1AFA50u;
label_1afa50:
    // 0x1afa50: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1afa50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1afa54: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1afa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1afa58: 0x17c30007  bne         $fp, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AFA58u;
    {
        const bool branch_taken_0x1afa58 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afa58) {
            ctx->pc = 0x1AFA78u;
            goto label_1afa78;
        }
    }
    ctx->pc = 0x1AFA60u;
    // 0x1afa60: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1afa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1afa64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1afa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1afa68: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1afa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1afa6c: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x1afa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x1afa70: 0xaec30008  sw          $v1, 0x8($s6)
    ctx->pc = 0x1afa70u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 3));
    // 0x1afa74: 0x0  nop
    ctx->pc = 0x1afa74u;
    // NOP
label_1afa78:
    // 0x1afa78: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1afa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1afa7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1afa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1afa80: 0xafa304a8  sw          $v1, 0x4A8($sp)
    ctx->pc = 0x1afa80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 3));
    // 0x1afa84: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1afa84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1afa88: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1afa88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1afa8c: 0x17c30002  bne         $fp, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFA8Cu;
    {
        const bool branch_taken_0x1afa8c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afa8c) {
            ctx->pc = 0x1AFA98u;
            goto label_1afa98;
        }
    }
    ctx->pc = 0x1AFA94u;
    // 0x1afa94: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1afa94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_1afa98:
    // 0x1afa98: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1afa98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1afa9c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1afa9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1afaa0: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x1afaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1afaa4: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1afaa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1afaa8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1afaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1afaac: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x1afaacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1afab0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1AFAB0u;
    {
        const bool branch_taken_0x1afab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afab0) {
            ctx->pc = 0x1AFA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afa50;
        }
    }
    ctx->pc = 0x1AFAB8u;
label_1afab8:
    // 0x1afab8: 0x8fa304a4  lw          $v1, 0x4A4($sp)
    ctx->pc = 0x1afab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1afabc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1afabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1afac0: 0xafa404a4  sw          $a0, 0x4A4($sp)
    ctx->pc = 0x1afac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 4));
    // 0x1afac4: 0x97a304ae  lhu         $v1, 0x4AE($sp)
    ctx->pc = 0x1afac4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1198)));
    // 0x1afac8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1afac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1afacc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1afaccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1afad0: 0x1460ff50  bnez        $v1, . + 4 + (-0xB0 << 2)
    ctx->pc = 0x1AFAD0u;
    {
        const bool branch_taken_0x1afad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afad0) {
            ctx->pc = 0x1AF814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af814;
        }
    }
    ctx->pc = 0x1AFAD8u;
    // 0x1afad8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1afad8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1afadc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1afadcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1afae0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1afae0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1afae4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1afae4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1afae8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1afae8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1afaec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1afaecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afaf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1afaf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afaf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1afaf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afaf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1afaf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afafc: 0x27bd04c0  addiu       $sp, $sp, 0x4C0
    ctx->pc = 0x1afafcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x1afb00: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFB08u;
}
