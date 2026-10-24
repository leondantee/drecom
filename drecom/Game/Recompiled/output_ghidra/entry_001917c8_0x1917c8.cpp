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

// Function: entry_001917c8
// Address: 0x1917c8 - 0x191984
void entry_001917c8_0x1917c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001917c8_0x1917c8");
#endif

    ctx->pc = 0x1917c8u;

    // 0x1917c8: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1917c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1917cc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1917CCu;
    {
        const bool branch_taken_0x1917cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1917cc) {
            ctx->pc = 0x191748u;
            return;
        }
    }
    ctx->pc = 0x1917D4u;
    // 0x1917d4: 0xc62001c0  lwc1        $f0, 0x1C0($s1)
    ctx->pc = 0x1917d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1917d8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1917d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1917dc: 0xc62001c4  lwc1        $f0, 0x1C4($s1)
    ctx->pc = 0x1917dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1917e0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1917e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1917e4: 0xc62001c8  lwc1        $f0, 0x1C8($s1)
    ctx->pc = 0x1917e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1917e8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1917e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1917ec: 0xc62001cc  lwc1        $f0, 0x1CC($s1)
    ctx->pc = 0x1917ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1917f0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1917f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1917f4: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1917f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1917f8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1917f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1917fc: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1917fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191800: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x191800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x191804: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x191804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191808: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x191808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x19180c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x19180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191810: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x191810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x191814: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x191814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191818: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x191818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19181c: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x19181cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x191820: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x191820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x191824: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x191824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x191828: 0x0  nop
    ctx->pc = 0x191828u;
    // NOP
    // 0x19182c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19182cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x191830: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x191830u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x191834: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x191834u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191838: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x191838u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19183c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x19183cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191840: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x191840u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x191844: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x191844u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x191848: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x191848u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19184c: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x19184cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x191850: 0x4a0003bf  vwaitq
    ctx->pc = 0x191850u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x191854: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x191854u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x191858: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x191858u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19185c: 0xfa050040  sqc2        $vf5, 0x40($s0)
    ctx->pc = 0x19185cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x191860: 0xfa050070  sqc2        $vf5, 0x70($s0)
    ctx->pc = 0x191860u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x191864: 0xfa0500a0  sqc2        $vf5, 0xA0($s0)
    ctx->pc = 0x191864u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x191868: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x191868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x19186c: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x19186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x191870: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x191870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191874: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x191874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x191878: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x191878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x19187c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19187cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x191880: 0x0  nop
    ctx->pc = 0x191880u;
    // NOP
    // 0x191884: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x191884u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x191888: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x191888u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x19188c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19188cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191890: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x191890u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191894: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x191894u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x191898: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x191898u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19189c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19189cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1918a0: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x1918a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1918a4: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x1918a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1918a8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1918a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1918ac: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1918acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1918b0: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x1918b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1918b4: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x1918b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1918b8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1918b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1918bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1918bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1918c0: 0x0  nop
    ctx->pc = 0x1918c0u;
    // NOP
    // 0x1918c4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1918c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1918c8: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x1918c8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1918cc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1918ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1918d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1918d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1918d4: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x1918d4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1918d8: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x1918d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1918dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1918dcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1918e0: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x1918e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1918e4: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x1918e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1918e8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1918e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1918ec: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1918ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1918f0: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x1918f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1918f4: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x1918f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1918f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1918f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1918fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1918fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x191900: 0x0  nop
    ctx->pc = 0x191900u;
    // NOP
    // 0x191904: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x191904u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x191908: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x191908u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x19190c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19190cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191910: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x191910u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191914: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x191914u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x191918: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x191918u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19191c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19191cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x191920: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x191920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x191924: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x191924u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x191928: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x191928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x19192c: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x19192cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x191930: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x191930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x191934: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x191934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x191938: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x191938u;
    {
        const bool branch_taken_0x191938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191938) {
            ctx->pc = 0x1919B8u;
            return;
        }
    }
    ctx->pc = 0x191940u;
    // 0x191940: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x191940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x191944: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x191944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x191948: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x191948u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19194c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19194cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x191950: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x191950u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x191954: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x191954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191958: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x191958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x19195c: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x19195cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x191960: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x191960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191964: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x191964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x191968: 0x244225fc  addiu       $v0, $v0, 0x25FC
    ctx->pc = 0x191968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9724));
    // 0x19196c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x19196cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191970: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191970u;
    {
        const bool branch_taken_0x191970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191970) {
            ctx->pc = 0x191984u;
            return;
        }
    }
    ctx->pc = 0x191978u;
    // 0x191978: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x191978u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19197c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x19197Cu;
    {
        const bool branch_taken_0x19197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19197c) {
            ctx->pc = 0x191AB8u;
            return;
        }
    }
    ctx->pc = 0x191984u;
}
