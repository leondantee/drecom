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

// Function: entry_00194f64
// Address: 0x194f64 - 0x1950f8
void entry_00194f64_0x194f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194f64_0x194f64");
#endif

    ctx->pc = 0x194f64u;

    // 0x194f64: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x194f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x194f68: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x194f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x194f6c: 0x246505b0  addiu       $a1, $v1, 0x5B0
    ctx->pc = 0x194f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x194f70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x194f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194f74: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x194f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x194f78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x194f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194f7c: 0x26c602d0  addiu       $a2, $s6, 0x2D0
    ctx->pc = 0x194f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x194f80: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x194f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x194f84: 0x2433821  addu        $a3, $s2, $v1
    ctx->pc = 0x194f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x194f88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x194f88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x194f8c: 0x0  nop
    ctx->pc = 0x194f8cu;
    // NOP
    // 0x194f90: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x194f90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x194f94: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x194f94u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x194f98: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x194f98u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x194f9c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x194f9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x194fa0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x194fa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x194fa4: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x194fa4u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x194fa8: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x194fa8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x194fac: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x194facu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194fb0: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x194fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x194fb4: 0x4a0003bf  vwaitq
    ctx->pc = 0x194fb4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x194fb8: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x194fb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x194fbc: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x194fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x194fc0: 0xfaa50040  sqc2        $vf5, 0x40($s5)
    ctx->pc = 0x194fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194fc4: 0xfaa50070  sqc2        $vf5, 0x70($s5)
    ctx->pc = 0x194fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194fc8: 0xfaa500a0  sqc2        $vf5, 0xA0($s5)
    ctx->pc = 0x194fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194fcc: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x194fccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x194fd0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x194fd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x194fd4: 0xdea50000  ld          $a1, 0x0($s5)
    ctx->pc = 0x194fd4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x194fd8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x194fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x194fdc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x194fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x194fe0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x194fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x194fe4: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x194fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x194fe8: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x194fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x194fec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x194fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194ff0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x194ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x194ff4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x194ff4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x194ff8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x194ffc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x194ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x195000: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x195000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x195004: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x195004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x195008: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x195008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x19500c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19500cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x195010: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x195010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x195014: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x195014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195018: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x195018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x19501c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x19501cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x195020: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x195020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x195024: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x195024u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195028: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x195028u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19502c: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x19502cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x195030: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x195030u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x195034: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x195034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x195038: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x195038u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19503c: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x19503cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x195040: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x195040u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x195044: 0xdea60000  ld          $a2, 0x0($s5)
    ctx->pc = 0x195044u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x195048: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x195048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19504c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19504cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x195050: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x195050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x195054: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x195054u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x195058: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x195058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x19505c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x19505cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195060: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x195060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x195064: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x195064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195068: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x195068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x19506c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x19506cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195070: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x195070u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x195074: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x195074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x195078: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x195078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19507c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x19507cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x195080: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x195080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x195084: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x195084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x195088: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x195088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19508c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19508cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x195090: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x195090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x195094: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x195094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195098: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x195098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x19509c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x19509cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1950a0: 0x2433821  addu        $a3, $s2, $v1
    ctx->pc = 0x1950a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1950a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1950a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1950a8: 0x0  nop
    ctx->pc = 0x1950a8u;
    // NOP
    // 0x1950ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1950acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1950b0: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x1950b0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1950b4: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1950b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1950b8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1950b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1950bc: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x1950bcu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1950c0: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x1950c0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1950c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1950c4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1950c8: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x1950c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1950cc: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x1950ccu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1950d0: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1950d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1950d4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1950d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1950d8: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x1950d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1950dc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1950dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1950e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1950E0u;
    {
        const bool branch_taken_0x1950e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1950e0) {
            ctx->pc = 0x1950F8u;
            return;
        }
    }
    ctx->pc = 0x1950E8u;
    // 0x1950e8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1950e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1950ec: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1950ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1950f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1950F0u;
    {
        const bool branch_taken_0x1950f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1950f0) {
            ctx->pc = 0x195100u;
            return;
        }
    }
    ctx->pc = 0x1950F8u;
}
