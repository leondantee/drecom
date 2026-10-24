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

// Function: Mul_index_data_obj4
// Address: 0x1e2260 - 0x1e2a28
void Mul_index_data_obj4_0x1e2260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mul_index_data_obj4_0x1e2260");
#endif

    switch (ctx->pc) {
        case 0x1e231cu: goto label_1e231c;
        case 0x1e237cu: goto label_1e237c;
        case 0x1e25d0u: goto label_1e25d0;
        case 0x1e2680u: goto label_1e2680;
        case 0x1e26e8u: goto label_1e26e8;
        case 0x1e2754u: goto label_1e2754;
        case 0x1e2834u: goto label_1e2834;
        case 0x1e284cu: goto label_1e284c;
        case 0x1e2868u: goto label_1e2868;
        case 0x1e28ccu: goto label_1e28cc;
        case 0x1e2934u: goto label_1e2934;
        case 0x1e29a8u: goto label_1e29a8;
        default: break;
    }

    ctx->pc = 0x1e2260u;

    // 0x1e2260: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1e2260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x1e2264: 0x7fbf00a0  sq          $ra, 0xA0($sp)
    ctx->pc = 0x1e2264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x1e2268: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1e2268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1e226c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1e226cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1e2270: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e2270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1e2274: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e2274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e2278: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e2278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e227c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e227cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e2280: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e2280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e2284: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e2284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e2288: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e2288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e228c: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x1e228cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    // 0x1e2290: 0xafa50268  sw          $a1, 0x268($sp)
    ctx->pc = 0x1e2290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 5));
    // 0x1e2294: 0xafa70278  sw          $a3, 0x278($sp)
    ctx->pc = 0x1e2294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 7));
    // 0x1e2298: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e2298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e229c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x1e229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x1e22a0: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x1e22a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x1e22a4: 0x8fb30268  lw          $s3, 0x268($sp)
    ctx->pc = 0x1e22a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e22a8: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x1e22a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1e22ac: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e22acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e22b0: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x1e22b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e22b4: 0x8ca60028  lw          $a2, 0x28($a1)
    ctx->pc = 0x1e22b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1e22b8: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x1e22b8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e22bc: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x1e22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e22c0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1e22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e22c4: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1e22c4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e22c8: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x1e22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e22cc: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1e22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1e22d0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1e22d0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e22d4: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x1e22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e22d8: 0x8c530048  lw          $s3, 0x48($v0)
    ctx->pc = 0x1e22d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1e22dc: 0xafb3024c  sw          $s3, 0x24C($sp)
    ctx->pc = 0x1e22dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 19));
    // 0x1e22e0: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x1e22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e22e4: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1e22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1e22e8: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x1e22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
    // 0x1e22ec: 0xafa00254  sw          $zero, 0x254($sp)
    ctx->pc = 0x1e22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 0));
    // 0x1e22f0: 0x8fb30260  lw          $s3, 0x260($sp)
    ctx->pc = 0x1e22f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e22f4: 0x8e640134  lw          $a0, 0x134($s3)
    ctx->pc = 0x1e22f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
    // 0x1e22f8: 0xafa40250  sw          $a0, 0x250($sp)
    ctx->pc = 0x1e22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 4));
    // 0x1e22fc: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x1e22fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e2300: 0x8cb60134  lw          $s6, 0x134($a1)
    ctx->pc = 0x1e2300u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
    // 0x1e2304: 0x8fa70260  lw          $a3, 0x260($sp)
    ctx->pc = 0x1e2304u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e2308: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x1e2308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x1e230c: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x1e230cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
    // 0x1e2310: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1e2310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e2314: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E2314u;
    SET_GPR_U32(ctx, 31, 0x1E231Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E231Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E231Cu) { return; }
    ctx->pc = 0x1E231Cu;
label_1e231c:
    // 0x1e231c: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x1e231cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e2320: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x1e2320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e2324: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1e2324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2328: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x1e2328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
    // 0x1e232c: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x1e232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e2330: 0xc46100a4  lwc1        $f1, 0xA4($v1)
    ctx->pc = 0x1e2330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2334: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x1e2334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e2338: 0xc48000a0  lwc1        $f0, 0xA0($a0)
    ctx->pc = 0x1e2338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e233c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e233cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e2340: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x1e2340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x1e2344: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e2344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e2348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e234c: 0x0  nop
    ctx->pc = 0x1e234cu;
    // NOP
    // 0x1e2350: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e2350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e2354: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e2354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e2358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e235c: 0x0  nop
    ctx->pc = 0x1e235cu;
    // NOP
    // 0x1e2360: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e2360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e2364: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1e2364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2368: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e2368u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e236c: 0x0  nop
    ctx->pc = 0x1e236cu;
    // NOP
    // 0x1e2370: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e2370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1e2374: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1e2374u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e2378: 0xafa00240  sw          $zero, 0x240($sp)
    ctx->pc = 0x1e2378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 0));
label_1e237c:
    // 0x1e237c: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x1e237cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2380: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1e2380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1e2384: 0x10600188  beqz        $v1, . + 4 + (0x188 << 2)
    ctx->pc = 0x1E2384u;
    {
        const bool branch_taken_0x1e2384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2384) {
            ctx->pc = 0x1E29A8u;
            goto label_1e29a8;
        }
    }
    ctx->pc = 0x1E238Cu;
    // 0x1e238c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e238cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e2390: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e2390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2394: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1e2394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1e2398: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2398u;
    {
        const bool branch_taken_0x1e2398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2398) {
            ctx->pc = 0x1E23BCu;
            goto label_1e23bc;
        }
    }
    ctx->pc = 0x1E23A0u;
    // 0x1e23a0: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e23a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e23a4: 0x8fa30254  lw          $v1, 0x254($sp)
    ctx->pc = 0x1e23a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x1e23a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e23ac: 0xafa30254  sw          $v1, 0x254($sp)
    ctx->pc = 0x1e23acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 3));
    // 0x1e23b0: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e23b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e23b4: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x1E23B4u;
    {
        const bool branch_taken_0x1e23b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e23b4) {
            ctx->pc = 0x1E29B8u;
            goto label_1e29b8;
        }
    }
    ctx->pc = 0x1E23BCu;
label_1e23bc:
    // 0x1e23bc: 0x96020100  lhu         $v0, 0x100($s0)
    ctx->pc = 0x1e23bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e23c0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1e23c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e23c4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e23c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e23c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e23cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e23d0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e23d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e23d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e23d8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e23d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e23dc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e23dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e23e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e23e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e23e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e23e8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e23ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e23ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e23f0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e23f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e23f4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e23f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e23fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2400: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2404: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e2404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2408: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e2408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e240c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e240cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2410: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2414: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2418: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e241c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2420: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e2420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e2424: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2428: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e242c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e242cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2430: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2434: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e2434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2438: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e2438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e243c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e243cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2440: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2444: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2448: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e244c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2450: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e2450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e2454: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2458: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e245c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e245cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2460: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2464: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e2464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2468: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e2468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e246c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e246cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2470: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2474: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2478: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e247c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2480: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1e2480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1e2484: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2488: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e248c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e248cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2490: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2494: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e2494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2498: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1e2498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e249c: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e249cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e24a0: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1E24A0u;
    {
        const bool branch_taken_0x1e24a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e24a0) {
            ctx->pc = 0x1E2688u;
            goto label_1e2688;
        }
    }
    ctx->pc = 0x1E24A8u;
    // 0x1e24a8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e24a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e24ac: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e24acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e24b0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e24b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e24b4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e24b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e24b8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e24bc: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e24bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e24c0: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e24c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e24c4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e24c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e24c8: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e24c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e24cc: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e24d0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e24d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e24d4: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e24d8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e24d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e24dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e24e0: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x1e24e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
    // 0x1e24e4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e24e8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e24e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e24ec: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1E24ECu;
    {
        const bool branch_taken_0x1e24ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e24ec) {
            ctx->pc = 0x1E2648u;
            goto label_1e2648;
        }
    }
    ctx->pc = 0x1E24F4u;
    // 0x1e24f4: 0x17c00036  bnez        $fp, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E24F4u;
    {
        const bool branch_taken_0x1e24f4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e24f4) {
            ctx->pc = 0x1E25D0u;
            goto label_1e25d0;
        }
    }
    ctx->pc = 0x1E24FCu;
    // 0x1e24fc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e24fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2500: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2504: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2508: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e2508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e250c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2510: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e2510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e2514: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2518: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e251c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e251cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2520: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e2520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e2524: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e2524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2528: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1e2528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1e252c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e252cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2530: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2534: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2538: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e2538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e253c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2540: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1e2540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1e2544: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e254c: 0x0  nop
    ctx->pc = 0x1e254cu;
    // NOP
    // 0x1e2550: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1e2550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1e2554: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x1e2554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1e2558: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e2558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1e255c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e2560: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e2560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e2564: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e2564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e2568: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1e2568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1e256c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e256cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2570: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e2570u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e2574: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e2574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e2578: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x1e2578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e257c: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e257cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e2580: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1e2580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e2584: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e2584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e2588: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e2588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e258c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1e258cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e2590: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e2590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2594: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e2594u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e2598: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e2598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e259c: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x1e259cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e25a0: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e25a4: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1e25a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e25a8: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1e25a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e25ac: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x1e25acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x1e25b0: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1e25b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e25b4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1e25b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e25b8: 0x8fa50278  lw          $a1, 0x278($sp)
    ctx->pc = 0x1e25b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1e25bc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e25bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e25c0: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1e25c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e25c4: 0x27ab0220  addiu       $t3, $sp, 0x220
    ctx->pc = 0x1e25c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1e25c8: 0xc05d3ac  jal         func_174EB0
    ctx->pc = 0x1E25C8u;
    SET_GPR_U32(ctx, 31, 0x1E25D0u);
    ctx->pc = 0x174EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174EB0u, 0x1E25C8u, 0x1E25D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E25D0u;
label_1e25d0:
    // 0x1e25d0: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1e25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1e25d4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e25d8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1e25d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1e25dc: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x1e25dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1e25e0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e25e4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1e25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1e25e8: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x1e25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1e25ec: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e25f0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1e25f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1e25f4: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1e25f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1e25f8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e25fc: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1e25fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1e2600: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x1e2600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1e2604: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2608: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1e2608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1e260c: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x1e260cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1e2610: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2614: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x1e2614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x1e2618: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1e2618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1e261c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2620: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x1e2620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x1e2624: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x1e2624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1e2628: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e262c: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1e262cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1e2630: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x1e2630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1e2634: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2638: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1e2638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1e263c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2640: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1e2640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e2644: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e2644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_1e2648:
    // 0x1e2648: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x1e2648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e264c: 0xc7a0025c  lwc1        $f0, 0x25C($sp)
    ctx->pc = 0x1e264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2650: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e2650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2654: 0x0  nop
    ctx->pc = 0x1e2654u;
    // NOP
    // 0x1e2658: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2658u;
    {
        const bool branch_taken_0x1e2658 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2658) {
            ctx->pc = 0x1E2668u;
            goto label_1e2668;
        }
    }
    ctx->pc = 0x1E2660u;
    // 0x1e2660: 0xa6000102  sh          $zero, 0x102($s0)
    ctx->pc = 0x1e2660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e2664: 0x0  nop
    ctx->pc = 0x1e2664u;
    // NOP
label_1e2668:
    // 0x1e2668: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1e2668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e266c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e266cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e2670: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e2670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e2674: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x1e2674u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e2678: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E2678u;
    SET_GPR_U32(ctx, 31, 0x1E2680u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E2678u, 0x1E2680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2680u;
label_1e2680:
    // 0x1e2680: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1E2680u;
    {
        const bool branch_taken_0x1e2680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2680) {
            ctx->pc = 0x1E2850u;
            goto label_1e2850;
        }
    }
    ctx->pc = 0x1E2688u;
label_1e2688:
    // 0x1e2688: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e268c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e268cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e2690: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1E2690u;
    {
        const bool branch_taken_0x1e2690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2690) {
            ctx->pc = 0x1E2728u;
            goto label_1e2728;
        }
    }
    ctx->pc = 0x1E2698u;
    // 0x1e2698: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e2698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e269c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e26a0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e26a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e26a4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e26a4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e26a8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e26ac: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e26acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e26b0: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e26b4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e26b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e26b8: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e26b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e26bc: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e26c0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e26c4: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e26c8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e26cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e26d0: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x1e26d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
    // 0x1e26d4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e26d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e26d8: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x1e26d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e26dc: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e26dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e26e0: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E26E0u;
    SET_GPR_U32(ctx, 31, 0x1E26E8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E26E8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E26E8u) { return; }
    ctx->pc = 0x1E26E8u;
label_1e26e8:
    // 0x1e26e8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e26ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e26ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e26f0: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e26f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e26f4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1e26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1e26f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e26f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e26fc: 0x0  nop
    ctx->pc = 0x1e26fcu;
    // NOP
    // 0x1e2700: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e2700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e2704: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1e2704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1e2708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e270c: 0x0  nop
    ctx->pc = 0x1e270cu;
    // NOP
    // 0x1e2710: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e2710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e2714: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e271c: 0x0  nop
    ctx->pc = 0x1e271cu;
    // NOP
    // 0x1e2720: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e2724: 0x0  nop
    ctx->pc = 0x1e2724u;
    // NOP
label_1e2728:
    // 0x1e2728: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e272c: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x1e272cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1e2730: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2734: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e2734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x1e2738: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e273c: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x1e273cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x1e2740: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1e2740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e2744: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1e2744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e2748: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e2748u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e274c: 0xc067618  jal         func_19D860
    ctx->pc = 0x1E274Cu;
    SET_GPR_U32(ctx, 31, 0x1E2754u);
    ctx->pc = 0x19D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D860u, 0x1E274Cu, 0x1E2754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2754u;
label_1e2754:
    // 0x1e2754: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2758: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e2758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e275c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E275Cu;
    {
        const bool branch_taken_0x1e275c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e275c) {
            ctx->pc = 0x1E27B0u;
            goto label_1e27b0;
        }
    }
    ctx->pc = 0x1E2764u;
    // 0x1e2764: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e2764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2768: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1e2768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1e276c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e276cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1e2770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2774: 0x0  nop
    ctx->pc = 0x1e2774u;
    // NOP
    // 0x1e2778: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e2778u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e277c: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e277cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e2780: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e2780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2784: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e2784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2788: 0x0  nop
    ctx->pc = 0x1e2788u;
    // NOP
    // 0x1e278c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e278cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2790: 0x0  nop
    ctx->pc = 0x1e2790u;
    // NOP
    // 0x1e2794: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2794u;
    {
        const bool branch_taken_0x1e2794 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2794) {
            ctx->pc = 0x1E27B0u;
            goto label_1e27b0;
        }
    }
    ctx->pc = 0x1E279Cu;
    // 0x1e279c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e27a0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e27a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e27a4: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e27a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e27a8: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e27a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e27ac: 0x0  nop
    ctx->pc = 0x1e27acu;
    // NOP
label_1e27b0:
    // 0x1e27b0: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e27b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e27b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e27b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e27b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e27bc: 0x0  nop
    ctx->pc = 0x1e27bcu;
    // NOP
    // 0x1e27c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e27c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e27c4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e27c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e27c8: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x1e27c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e27cc: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1e27ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e27d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e27d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e27d4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e27d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1e27d8: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1e27d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e27dc: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1e27dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e27e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e27e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e27e4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e27e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1e27e8: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x1e27e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e27ec: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1e27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1e27f0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e27f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e27f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e27f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e27f8: 0x0  nop
    ctx->pc = 0x1e27f8u;
    // NOP
    // 0x1e27fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e27fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e2800: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e2800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e2804: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1e2804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2808: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1e2808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1e280c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e280cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e2810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2814: 0x0  nop
    ctx->pc = 0x1e2814u;
    // NOP
    // 0x1e2818: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e2818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e281c: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e281cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e2820: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e2820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e2824: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e2824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e2828: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1e2828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1e282c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E282Cu;
    SET_GPR_U32(ctx, 31, 0x1E2834u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E282Cu, 0x1E2834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2834u;
label_1e2834:
    // 0x1e2834: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1e2834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e2838: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e2838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e283c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e283cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e2840: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e2840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e2844: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E2844u;
    SET_GPR_U32(ctx, 31, 0x1E284Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E2844u, 0x1E284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E284Cu;
label_1e284c:
    // 0x1e284c: 0x0  nop
    ctx->pc = 0x1e284cu;
    // NOP
label_1e2850:
    // 0x1e2850: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e2850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e2854: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1e2854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e2858: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e2858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e285c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e285cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2860: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E2860u;
    SET_GPR_U32(ctx, 31, 0x1E2868u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E2868u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E2868u) { return; }
    ctx->pc = 0x1E2868u;
label_1e2868:
    // 0x1e2868: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e2868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e286c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2870: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e2870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e2874: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e2874u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e2878: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2878u;
    {
        const bool branch_taken_0x1e2878 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2878) {
            ctx->pc = 0x1E2898u;
            goto label_1e2898;
        }
    }
    ctx->pc = 0x1E2880u;
    // 0x1e2880: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e2880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e2884: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2888: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e2888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e288c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e288cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e2890: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2890u;
    {
        const bool branch_taken_0x1e2890 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2890) {
            ctx->pc = 0x1E28A0u;
            goto label_1e28a0;
        }
    }
    ctx->pc = 0x1E2898u;
label_1e2898:
    // 0x1e2898: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e2898u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e289c: 0x0  nop
    ctx->pc = 0x1e289cu;
    // NOP
label_1e28a0:
    // 0x1e28a0: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x1e28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1e28a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e28a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e28a8: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e28a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e28ac: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E28ACu;
    {
        const bool branch_taken_0x1e28ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e28ac) {
            ctx->pc = 0x1E28B8u;
            goto label_1e28b8;
        }
    }
    ctx->pc = 0x1E28B4u;
    // 0x1e28b4: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e28b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e28b8:
    // 0x1e28b8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e28b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e28bc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e28bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e28c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e28c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e28c4: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E28C4u;
    SET_GPR_U32(ctx, 31, 0x1E28CCu);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E28C4u, 0x1E28CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E28CCu;
label_1e28cc:
    // 0x1e28cc: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1e28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e28d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e28d4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e28d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e28d8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e28d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e28dc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E28DCu;
    {
        const bool branch_taken_0x1e28dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e28dc) {
            ctx->pc = 0x1E2900u;
            goto label_1e2900;
        }
    }
    ctx->pc = 0x1E28E4u;
    // 0x1e28e4: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1e28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1e28e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e28e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e28ec: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e28ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e28f0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e28f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e28f4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E28F4u;
    {
        const bool branch_taken_0x1e28f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e28f4) {
            ctx->pc = 0x1E2908u;
            goto label_1e2908;
        }
    }
    ctx->pc = 0x1E28FCu;
    // 0x1e28fc: 0x0  nop
    ctx->pc = 0x1e28fcu;
    // NOP
label_1e2900:
    // 0x1e2900: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e2900u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e2904: 0x0  nop
    ctx->pc = 0x1e2904u;
    // NOP
label_1e2908:
    // 0x1e2908: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1e2908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1e290c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2910: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e2910u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e2914: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2914u;
    {
        const bool branch_taken_0x1e2914 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2914) {
            ctx->pc = 0x1E2920u;
            goto label_1e2920;
        }
    }
    ctx->pc = 0x1E291Cu;
    // 0x1e291c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e291cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e2920:
    // 0x1e2920: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1e2920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e2924: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e2924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e2928: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e292c: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E292Cu;
    SET_GPR_U32(ctx, 31, 0x1E2934u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E292Cu, 0x1E2934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2934u;
label_1e2934:
    // 0x1e2934: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1e2934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e2938: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e293c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e293cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e2940: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e2940u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e2944: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2944u;
    {
        const bool branch_taken_0x1e2944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2944) {
            ctx->pc = 0x1E2968u;
            goto label_1e2968;
        }
    }
    ctx->pc = 0x1E294Cu;
    // 0x1e294c: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x1e294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1e2950: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2954: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e2954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e2958: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e2958u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e295c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E295Cu;
    {
        const bool branch_taken_0x1e295c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e295c) {
            ctx->pc = 0x1E2970u;
            goto label_1e2970;
        }
    }
    ctx->pc = 0x1E2964u;
    // 0x1e2964: 0x0  nop
    ctx->pc = 0x1e2964u;
    // NOP
label_1e2968:
    // 0x1e2968: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e2968u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e296c: 0x0  nop
    ctx->pc = 0x1e296cu;
    // NOP
label_1e2970:
    // 0x1e2970: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x1e2970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1e2974: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2978: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e2978u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e297c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E297Cu;
    {
        const bool branch_taken_0x1e297c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e297c) {
            ctx->pc = 0x1E2988u;
            goto label_1e2988;
        }
    }
    ctx->pc = 0x1E2984u;
    // 0x1e2984: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e2984u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e2988:
    // 0x1e2988: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e2988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e298c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1e298cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e2990: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x1e2990u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e2994: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x1e2994u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e2998: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1e2998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e299c: 0x72604628  paddub      $t0, $s3, $zero
    ctx->pc = 0x1e299cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e29a0: 0xc077f60  jal         func_1DFD80
    ctx->pc = 0x1E29A0u;
    SET_GPR_U32(ctx, 31, 0x1E29A8u);
    ctx->pc = 0x1DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD80u, 0x1E29A0u, 0x1E29A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E29A8u;
label_1e29a8:
    // 0x1e29a8: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1e29a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e29ac: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e29acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e29b0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1e29b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1e29b4: 0x0  nop
    ctx->pc = 0x1e29b4u;
    // NOP
label_1e29b8:
    // 0x1e29b8: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x1e29b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1e29bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e29bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e29c0: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x1e29c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
    // 0x1e29c4: 0x1460fe6d  bnez        $v1, . + 4 + (-0x193 << 2)
    ctx->pc = 0x1E29C4u;
    {
        const bool branch_taken_0x1e29c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e29c4) {
            ctx->pc = 0x1E237Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e237c;
        }
    }
    ctx->pc = 0x1E29CCu;
    // 0x1e29cc: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x1e29ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x1e29d0: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x1e29d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e29d4: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e29d8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E29D8u;
    {
        const bool branch_taken_0x1e29d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e29d8) {
            ctx->pc = 0x1E29F4u;
            goto label_1e29f4;
        }
    }
    ctx->pc = 0x1E29E0u;
    // 0x1e29e0: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x1e29e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e29e4: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1e29e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1e29e8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e29e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e29ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e29ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e29f0: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1e29f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_1e29f4:
    // 0x1e29f4: 0x7bbf00a0  lq          $ra, 0xA0($sp)
    ctx->pc = 0x1e29f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e29f8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1e29f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e29fc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1e29fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e2a00: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e2a00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e2a04: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e2a04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e2a08: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e2a08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2a0c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e2a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2a10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e2a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2a14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e2a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2a18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e2a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2a1c: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x1e2a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1e2a20: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2A28u;
}
