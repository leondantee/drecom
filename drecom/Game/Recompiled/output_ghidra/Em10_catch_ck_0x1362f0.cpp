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

// Function: Em10_catch_ck
// Address: 0x1362f0 - 0x1364c8
void Em10_catch_ck_0x1362f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_catch_ck_0x1362f0");
#endif

    switch (ctx->pc) {
        case 0x136404u: goto label_136404;
        case 0x13648cu: goto label_13648c;
        default: break;
    }

    ctx->pc = 0x1362f0u;

    // 0x1362f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1362f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1362f4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x1362f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1362f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1362f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1362fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1362fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x136300: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x136300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x136304: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x136308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13630c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x13630cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x136310: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x136310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x136314: 0x2452bb48  addiu       $s2, $v0, -0x44B8
    ctx->pc = 0x136314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x136318: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x136318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13631c: 0x24541330  addiu       $s4, $v0, 0x1330
    ctx->pc = 0x13631cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x136320: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x136320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x136324: 0x2453dbc0  addiu       $s3, $v0, -0x2440
    ctx->pc = 0x136324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x136328: 0x866210a6  lh          $v0, 0x10A6($s3)
    ctx->pc = 0x136328u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x13632c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x13632cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x136330: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x136330u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x136334: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136334u;
    {
        const bool branch_taken_0x136334 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x136334) {
            ctx->pc = 0x136348u;
            goto label_136348;
        }
    }
    ctx->pc = 0x13633Cu;
    // 0x13633c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x13633cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136340: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x136340u;
    {
        const bool branch_taken_0x136340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136340) {
            ctx->pc = 0x1364A4u;
            goto label_1364a4;
        }
    }
    ctx->pc = 0x136348u;
label_136348:
    // 0x136348: 0x926210a8  lbu         $v0, 0x10A8($s3)
    ctx->pc = 0x136348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4264)));
    // 0x13634c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13634Cu;
    {
        const bool branch_taken_0x13634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13634c) {
            ctx->pc = 0x136360u;
            goto label_136360;
        }
    }
    ctx->pc = 0x136354u;
    // 0x136354: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x136354u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136358: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x136358u;
    {
        const bool branch_taken_0x136358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136358) {
            ctx->pc = 0x1364A4u;
            goto label_1364a4;
        }
    }
    ctx->pc = 0x136360u;
label_136360:
    // 0x136360: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x136360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x136364: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x136364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x136368: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x136368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13636c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13636Cu;
    {
        const bool branch_taken_0x13636c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13636c) {
            ctx->pc = 0x136380u;
            goto label_136380;
        }
    }
    ctx->pc = 0x136374u;
    // 0x136374: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x136374u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136378: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x136378u;
    {
        const bool branch_taken_0x136378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136378) {
            ctx->pc = 0x1364A4u;
            goto label_1364a4;
        }
    }
    ctx->pc = 0x136380u;
label_136380:
    // 0x136380: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x136380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x136384: 0x8c230068  lw          $v1, 0x68($at)
    ctx->pc = 0x136384u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0068u));
    // 0x136388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13638c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13638Cu;
    {
        const bool branch_taken_0x13638c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13638c) {
            ctx->pc = 0x1363C8u;
            goto label_1363c8;
        }
    }
    ctx->pc = 0x136394u;
    // 0x136394: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x136394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x136398: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x136398u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x13639c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1363a0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1363A0u;
    {
        const bool branch_taken_0x1363a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1363a0) {
            ctx->pc = 0x1363BCu;
            goto label_1363bc;
        }
    }
    ctx->pc = 0x1363A8u;
    // 0x1363a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1363a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1363ac: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x1363acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x1363b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1363b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1363b4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1363B4u;
    {
        const bool branch_taken_0x1363b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1363b4) {
            ctx->pc = 0x1363C8u;
            goto label_1363c8;
        }
    }
    ctx->pc = 0x1363BCu;
label_1363bc:
    // 0x1363bc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1363bcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1363c0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1363C0u;
    {
        const bool branch_taken_0x1363c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1363c0) {
            ctx->pc = 0x1364A4u;
            goto label_1364a4;
        }
    }
    ctx->pc = 0x1363C8u;
label_1363c8:
    // 0x1363c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1363c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1363cc: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1363ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1363d0: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x1363d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x1363d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1363d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1363d8: 0x0  nop
    ctx->pc = 0x1363d8u;
    // NOP
    // 0x1363dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1363dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1363e0: 0x0  nop
    ctx->pc = 0x1363e0u;
    // NOP
    // 0x1363e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1363E4u;
    {
        const bool branch_taken_0x1363e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1363e4) {
            ctx->pc = 0x1363F8u;
            goto label_1363f8;
        }
    }
    ctx->pc = 0x1363ECu;
    // 0x1363ec: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1363ecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1363f0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1363F0u;
    {
        const bool branch_taken_0x1363f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1363f0) {
            ctx->pc = 0x1364A4u;
            goto label_1364a4;
        }
    }
    ctx->pc = 0x1363F8u;
label_1363f8:
    // 0x1363f8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1363f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1363fc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1363FCu;
    {
        const bool branch_taken_0x1363fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1363fc) {
            ctx->pc = 0x136468u;
            goto label_136468;
        }
    }
    ctx->pc = 0x136404u;
label_136404:
    // 0x136404: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x136404u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x136408: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x136408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13640c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13640cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136410: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x136410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x136414: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x136414u;
    {
        const bool branch_taken_0x136414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x136414) {
            ctx->pc = 0x136464u;
            goto label_136464;
        }
    }
    ctx->pc = 0x13641Cu;
    // 0x13641c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x13641cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x136420: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x136420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136424: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x136424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x136428: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x136428u;
    {
        const bool branch_taken_0x136428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136428) {
            ctx->pc = 0x136464u;
            goto label_136464;
        }
    }
    ctx->pc = 0x136430u;
    // 0x136430: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x136430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x136434: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x136434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136438: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x136438u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x13643c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13643Cu;
    {
        const bool branch_taken_0x13643c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13643c) {
            ctx->pc = 0x136464u;
            goto label_136464;
        }
    }
    ctx->pc = 0x136444u;
    // 0x136444: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x136444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x136448: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x136448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13644c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13644cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x136450: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136450u;
    {
        const bool branch_taken_0x136450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136450) {
            ctx->pc = 0x136464u;
            goto label_136464;
        }
    }
    ctx->pc = 0x136458u;
    // 0x136458: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x136458u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13645c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13645Cu;
    {
        const bool branch_taken_0x13645c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13645c) {
            ctx->pc = 0x1364A4u;
            goto label_1364a4;
        }
    }
    ctx->pc = 0x136464u;
label_136464:
    // 0x136464: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x136464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_136468:
    // 0x136468: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x136468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13646c: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x13646cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x136470: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x136470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x136474: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x136474u;
    {
        const bool branch_taken_0x136474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136474) {
            ctx->pc = 0x136404u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136404;
        }
    }
    ctx->pc = 0x13647Cu;
    // 0x13647c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x13647cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x136480: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x136480u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136484: 0xc05d25c  jal         func_174970
    ctx->pc = 0x136484u;
    SET_GPR_U32(ctx, 31, 0x13648Cu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x136484u, 0x13648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13648Cu;
label_13648c:
    // 0x13648c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13648Cu;
    {
        const bool branch_taken_0x13648c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13648c) {
            ctx->pc = 0x1364A0u;
            goto label_1364a0;
        }
    }
    ctx->pc = 0x136494u;
    // 0x136494: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x136494u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136498u;
    {
        const bool branch_taken_0x136498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136498) {
            ctx->pc = 0x1364A4u;
            goto label_1364a4;
        }
    }
    ctx->pc = 0x1364A0u;
label_1364a0:
    // 0x1364a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1364a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1364a4:
    // 0x1364a4: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1364a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1364a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1364a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1364ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1364acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1364b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1364b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1364b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1364b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1364b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1364b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1364bc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1364bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1364c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1364C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1364C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1364C8u;
}
