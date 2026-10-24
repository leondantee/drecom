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

// Function: strip_st_h
// Address: 0x326760 - 0x326b8c
void strip_st_h_0x326760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strip_st_h_0x326760");
#endif

    switch (ctx->pc) {
        case 0x326804u: goto label_326804;
        case 0x3269c4u: goto label_3269c4;
        default: break;
    }

    ctx->pc = 0x326760u;

    // 0x326760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x326760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x326764: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x326764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x326768: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x326768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32676c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x326770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x326770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x326774: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x326774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x326778: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32677c: 0x8c720ac4  lw          $s2, 0xAC4($v1)
    ctx->pc = 0x32677cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2756)));
    // 0x326780: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x326780u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x326784: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326788: 0x90630b1c  lbu         $v1, 0xB1C($v1)
    ctx->pc = 0x326788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2844)));
    // 0x32678c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32678cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326790: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x326790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x326794: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x326794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x326798: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32679c: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x32679cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x3267a0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3267a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3267a4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3267a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3267a8: 0x10600080  beqz        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x3267A8u;
    {
        const bool branch_taken_0x3267a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3267a8) {
            ctx->pc = 0x3269ACu;
            goto label_3269ac;
        }
    }
    ctx->pc = 0x3267B0u;
    // 0x3267b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3267b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3267b4: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x3267b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x3267b8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3267b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3267bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3267bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3267c0: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x3267c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x3267c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3267c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3267c8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3267c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3267cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3267ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3267d0: 0x0  nop
    ctx->pc = 0x3267d0u;
    // NOP
    // 0x3267d4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3267d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3267d8: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3267d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3267dc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3267dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3267e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3267e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3267e4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3267e4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3267e8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3267e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3267ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3267ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3267f0: 0x0  nop
    ctx->pc = 0x3267f0u;
    // NOP
    // 0x3267f4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3267f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3267f8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3267f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3267fc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x3267FCu;
    {
        const bool branch_taken_0x3267fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3267fc) {
            ctx->pc = 0x326988u;
            goto label_326988;
        }
    }
    ctx->pc = 0x326804u;
label_326804:
    // 0x326804: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x326804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326808: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32680c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x32680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326810: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326814: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326818: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x326818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32681c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x32681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326820: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x326820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326824: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x326828: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x326828u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x32682c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x32682cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326830: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326838: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x32683c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32683cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326844: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326848: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32684c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32684cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326850: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326854: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x326854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326858: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32685c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x32685cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326860: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326864: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326868: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x32686c: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x32686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x326870: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x326870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326874: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x326874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326878: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32687c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x32687cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x326880: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326884: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326888: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32688c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32688cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326890: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326894: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32689c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x32689cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3268a0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3268a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3268a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3268a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3268a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3268a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3268ac: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x3268acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x3268b0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x3268b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3268b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3268b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3268b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3268b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3268bc: 0x0  nop
    ctx->pc = 0x3268bcu;
    // NOP
    // 0x3268c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3268c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3268c4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3268c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3268c8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3268c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3268cc: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x3268ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x3268d0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3268d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3268d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3268d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3268d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3268d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3268dc: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x3268dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x3268e0: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x3268e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3268e4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x3268e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3268e8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x3268e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3268ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3268ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3268f0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3268f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3268f4: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x3268f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x3268f8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3268f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3268fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3268fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326904: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326908: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32690c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32690cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326910: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326914: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326918: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32691c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32691cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326920: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326924: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x326924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326928: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x32692c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x32692cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326930: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326934: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326938: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x32693c: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x32693cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x326940: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x326940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326944: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x326944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326948: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32694c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x32694cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x326950: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326954: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326958: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32695c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32695cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326960: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326964: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32696c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x32696cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326970: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326974: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326978: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32697c: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x32697cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326980: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x326980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x326984: 0x0  nop
    ctx->pc = 0x326984u;
    // NOP
label_326988:
    // 0x326988: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32698c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x32698cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x326990: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326994: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x326998: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x326998u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32699c: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
    ctx->pc = 0x32699Cu;
    {
        const bool branch_taken_0x32699c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32699c) {
            ctx->pc = 0x326804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326804;
        }
    }
    ctx->pc = 0x3269A4u;
    // 0x3269a4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3269A4u;
    {
        const bool branch_taken_0x3269a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3269a4) {
            ctx->pc = 0x326B70u;
            goto label_326b70;
        }
    }
    ctx->pc = 0x3269ACu;
label_3269ac:
    // 0x3269ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3269acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3269b0: 0x90630b1c  lbu         $v1, 0xB1C($v1)
    ctx->pc = 0x3269b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2844)));
    // 0x3269b4: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x3269b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3269b8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3269b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3269bc: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x3269BCu;
    {
        const bool branch_taken_0x3269bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3269bc) {
            ctx->pc = 0x326B50u;
            goto label_326b50;
        }
    }
    ctx->pc = 0x3269C4u;
label_3269c4:
    // 0x3269c4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3269c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3269c8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3269c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3269cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3269ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3269d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3269d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3269d4: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x3269d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x3269d8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3269d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3269dc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3269dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3269e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3269e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3269e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3269e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3269e8: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x3269e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x3269ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3269ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3269f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3269f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3269f4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3269f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3269f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3269f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3269fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3269fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326a00: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326a04: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x326a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326a08: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326a0c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326a10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326a14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326a18: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326a1c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x326a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326a20: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326a24: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326a28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326a2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326a30: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326a34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326a38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326a38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326a3c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326a40: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326a40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326a44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326a48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326a4c: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326a50: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x326a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326a54: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326a58: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326a5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326a60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326a64: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326a68: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x326a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326a6c: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326a70: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326a74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326a78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326a7c: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326a80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326a88: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326a8c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326a90: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326a94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326a98: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326a9c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x326a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326aa0: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326aa4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326aa8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326aac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326ab0: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326ab4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x326ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326ab8: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326abc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326ac0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326ac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326ac8: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326acc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326ad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326ad4: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326ad8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326adc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326ae0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326ae4: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326ae8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x326ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x326aec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326af0: 0x8c720ac4  lw          $s2, 0xAC4($v1)
    ctx->pc = 0x326af0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2756)));
    // 0x326af4: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x326af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x326af8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326afc: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x326afcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x326b00: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x326B00u;
    {
        const bool branch_taken_0x326b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x326b00) {
            ctx->pc = 0x326B40u;
            goto label_326b40;
        }
    }
    ctx->pc = 0x326B08u;
    // 0x326b08: 0x9243000a  lbu         $v1, 0xA($s2)
    ctx->pc = 0x326b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x326b0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326b10: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x326b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x326b14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x326B14u;
    {
        const bool branch_taken_0x326b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326b14) {
            ctx->pc = 0x326B28u;
            goto label_326b28;
        }
    }
    ctx->pc = 0x326B1Cu;
    // 0x326b1c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x326b1cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x326b20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x326B20u;
    {
        const bool branch_taken_0x326b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326b20) {
            ctx->pc = 0x326B40u;
            goto label_326b40;
        }
    }
    ctx->pc = 0x326B28u;
label_326b28:
    // 0x326b28: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x326b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326b2c: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x326b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x326b30: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x326b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x326b34: 0xac830b18  sw          $v1, 0xB18($a0)
    ctx->pc = 0x326b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 3));
    // 0x326b38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x326B38u;
    {
        const bool branch_taken_0x326b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326b38) {
            ctx->pc = 0x326B70u;
            goto label_326b70;
        }
    }
    ctx->pc = 0x326B40u;
label_326b40:
    // 0x326b40: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x326b40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x326b44: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x326b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x326b48: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x326b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x326b4c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x326b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_326b50:
    // 0x326b50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326b54: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x326b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x326b58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326b5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x326b60: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x326b60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x326b64: 0x1460ff97  bnez        $v1, . + 4 + (-0x69 << 2)
    ctx->pc = 0x326B64u;
    {
        const bool branch_taken_0x326b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x326b64) {
            ctx->pc = 0x3269C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3269c4;
        }
    }
    ctx->pc = 0x326B6Cu;
    // 0x326b6c: 0x0  nop
    ctx->pc = 0x326b6cu;
    // NOP
label_326b70:
    // 0x326b70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x326b70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326b74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x326b74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x326b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326b80: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x326b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x326b84: 0x3e00008  jr          $ra
    ctx->pc = 0x326B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326B8Cu;
}
