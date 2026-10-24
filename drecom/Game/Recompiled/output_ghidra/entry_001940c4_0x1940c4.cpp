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

// Function: entry_001940c4
// Address: 0x1940c4 - 0x194258
void entry_001940c4_0x1940c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001940c4_0x1940c4");
#endif

    ctx->pc = 0x1940c4u;

    // 0x1940c4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1940c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1940c8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1940c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1940cc: 0x246505b0  addiu       $a1, $v1, 0x5B0
    ctx->pc = 0x1940ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x1940d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1940d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1940d4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1940d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1940d8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1940d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1940dc: 0x26c602d0  addiu       $a2, $s6, 0x2D0
    ctx->pc = 0x1940dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x1940e0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1940e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1940e4: 0x2633821  addu        $a3, $s3, $v1
    ctx->pc = 0x1940e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1940e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1940e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1940ec: 0x0  nop
    ctx->pc = 0x1940ecu;
    // NOP
    // 0x1940f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1940f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1940f4: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x1940f4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1940f8: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1940f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1940fc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1940fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x194100: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x194100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x194104: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x194104u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x194108: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x194108u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19410c: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x19410cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194110: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x194110u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x194114: 0x4a0003bf  vwaitq
    ctx->pc = 0x194114u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x194118: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x194118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19411c: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x19411cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x194120: 0xfaa50040  sqc2        $vf5, 0x40($s5)
    ctx->pc = 0x194120u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194124: 0xfaa50070  sqc2        $vf5, 0x70($s5)
    ctx->pc = 0x194124u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194128: 0xfaa500a0  sqc2        $vf5, 0xA0($s5)
    ctx->pc = 0x194128u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19412c: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x19412cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x194130: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x194130u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x194134: 0xdea50000  ld          $a1, 0x0($s5)
    ctx->pc = 0x194134u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x194138: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x194138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19413c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19413cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x194140: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x194140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x194144: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x194144u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x194148: 0x2f01821  addu        $v1, $s7, $s0
    ctx->pc = 0x194148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x19414c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x19414cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194150: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x194150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x194154: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x194154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x194158: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19415c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19415cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x194160: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x194160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x194164: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x194164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x194168: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x194168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x19416c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19416cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194170: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x194170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x194174: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x194174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194178: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x194178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x19417c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x19417cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x194180: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x194180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x194184: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x194184u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194188: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x194188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19418c: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x19418cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x194190: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x194190u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x194194: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x194194u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x194198: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x194198u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19419c: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x19419cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1941a0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1941a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1941a4: 0xdea60000  ld          $a2, 0x0($s5)
    ctx->pc = 0x1941a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1941a8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1941a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1941ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1941acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1941b0: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1941b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1941b4: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x1941b4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x1941b8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1941b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1941bc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1941bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1941c0: 0x2f01821  addu        $v1, $s7, $s0
    ctx->pc = 0x1941c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x1941c4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1941c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1941c8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1941c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1941cc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1941ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1941d0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1941d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1941d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1941d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1941d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1941d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1941dc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1941dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1941e0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1941e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1941e4: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x1941e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x1941e8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1941e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1941ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1941ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1941f0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1941f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1941f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1941f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1941f8: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x1941f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x1941fc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1941fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x194200: 0x2633821  addu        $a3, $s3, $v1
    ctx->pc = 0x194200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x194204: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x194204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x194208: 0x0  nop
    ctx->pc = 0x194208u;
    // NOP
    // 0x19420c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19420cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x194210: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x194210u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x194214: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x194214u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x194218: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x194218u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19421c: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x19421cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x194220: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x194220u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x194224: 0x4a0003bf  vwaitq
    ctx->pc = 0x194224u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x194228: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x194228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19422c: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x19422cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x194230: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x194230u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x194234: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x194234u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x194238: 0x2f01821  addu        $v1, $s7, $s0
    ctx->pc = 0x194238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x19423c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x19423cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194240: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x194240u;
    {
        const bool branch_taken_0x194240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194240) {
            ctx->pc = 0x194258u;
            return;
        }
    }
    ctx->pc = 0x194248u;
    // 0x194248: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x194248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19424c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x19424cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x194250: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x194250u;
    {
        const bool branch_taken_0x194250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194250) {
            ctx->pc = 0x194260u;
            return;
        }
    }
    ctx->pc = 0x194258u;
}
