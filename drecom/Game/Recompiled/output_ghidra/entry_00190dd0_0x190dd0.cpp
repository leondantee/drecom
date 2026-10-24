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

// Function: entry_00190dd0
// Address: 0x190dd0 - 0x190fa4
void entry_00190dd0_0x190dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190dd0_0x190dd0");
#endif

    ctx->pc = 0x190dd0u;

    // 0x190dd0: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x190dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x190dd4: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x190DD4u;
    {
        const bool branch_taken_0x190dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190dd4) {
            ctx->pc = 0x190C30u;
            return;
        }
    }
    ctx->pc = 0x190DDCu;
    // 0x190ddc: 0xc62001c0  lwc1        $f0, 0x1C0($s1)
    ctx->pc = 0x190ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190de0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x190de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x190de4: 0xc62001c4  lwc1        $f0, 0x1C4($s1)
    ctx->pc = 0x190de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190de8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x190de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x190dec: 0xc62001c8  lwc1        $f0, 0x1C8($s1)
    ctx->pc = 0x190decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190df0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x190df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x190df4: 0xc62001cc  lwc1        $f0, 0x1CC($s1)
    ctx->pc = 0x190df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190df8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x190df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x190dfc: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x190dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190e00: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x190e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x190e04: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x190e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190e08: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x190e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x190e0c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x190e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190e10: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x190e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x190e14: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x190e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190e18: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x190e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x190e1c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x190e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x190e20: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x190e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190e24: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x190e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x190e28: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x190e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x190e2c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x190e2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x190e30: 0x0  nop
    ctx->pc = 0x190e30u;
    // NOP
    // 0x190e34: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x190e34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x190e38: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x190e38u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x190e3c: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x190e3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190e40: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x190e40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190e44: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x190e44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190e48: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x190e48u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x190e4c: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x190e4cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x190e50: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x190e50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190e54: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x190e54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x190e58: 0x4a0003bf  vwaitq
    ctx->pc = 0x190e58u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x190e5c: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x190e5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x190e60: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x190e60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x190e64: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x190e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x190e68: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x190e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x190e6c: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x190e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190e70: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x190e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x190e74: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x190e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x190e78: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x190e78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x190e7c: 0x0  nop
    ctx->pc = 0x190e7cu;
    // NOP
    // 0x190e80: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x190e80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x190e84: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x190e84u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x190e88: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x190e88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190e8c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x190e8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190e90: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x190e90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190e94: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x190e94u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x190e98: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x190e98u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x190e9c: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x190e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190ea0: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x190ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x190ea4: 0x4a0003bf  vwaitq
    ctx->pc = 0x190ea4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x190ea8: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x190ea8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x190eac: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x190eacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x190eb0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x190eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x190eb4: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x190eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x190eb8: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x190eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190ebc: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x190ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x190ec0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x190ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x190ec4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x190ec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x190ec8: 0x0  nop
    ctx->pc = 0x190ec8u;
    // NOP
    // 0x190ecc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x190eccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x190ed0: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x190ed0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x190ed4: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x190ed4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190ed8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x190ed8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190edc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x190edcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190ee0: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x190ee0u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x190ee4: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x190ee4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x190ee8: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x190ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190eec: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x190eecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x190ef0: 0x4a0003bf  vwaitq
    ctx->pc = 0x190ef0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x190ef4: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x190ef4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x190ef8: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x190ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x190efc: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x190efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x190f00: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x190f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x190f04: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x190f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190f08: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x190f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x190f0c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x190f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x190f10: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x190f10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x190f14: 0x0  nop
    ctx->pc = 0x190f14u;
    // NOP
    // 0x190f18: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x190f18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x190f1c: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x190f1cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x190f20: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x190f20u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190f24: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x190f24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190f28: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x190f28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190f2c: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x190f2cu;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x190f30: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x190f30u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x190f34: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x190f34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190f38: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x190f38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x190f3c: 0x4a0003bf  vwaitq
    ctx->pc = 0x190f3cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x190f40: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x190f40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x190f44: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x190f44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x190f48: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x190f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x190f4c: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x190f4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x190f50: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x190f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x190f54: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x190f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x190f58: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x190F58u;
    {
        const bool branch_taken_0x190f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f58) {
            ctx->pc = 0x190FD8u;
            return;
        }
    }
    ctx->pc = 0x190F60u;
    // 0x190f60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x190f64: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x190f64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x190f68: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x190f68u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x190f6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x190f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x190f70: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x190f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x190f74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x190f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190f78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x190f7c: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x190f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x190f80: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x190f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190f84: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x190f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x190f88: 0x244225fc  addiu       $v0, $v0, 0x25FC
    ctx->pc = 0x190f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9724));
    // 0x190f8c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x190f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x190f90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190F90u;
    {
        const bool branch_taken_0x190f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190f90) {
            ctx->pc = 0x190FA4u;
            return;
        }
    }
    ctx->pc = 0x190F98u;
    // 0x190f98: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x190f98u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190f9c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x190F9Cu;
    {
        const bool branch_taken_0x190f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f9c) {
            ctx->pc = 0x1910D8u;
            return;
        }
    }
    ctx->pc = 0x190FA4u;
}
