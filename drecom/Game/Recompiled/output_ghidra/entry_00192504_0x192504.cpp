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

// Function: entry_00192504
// Address: 0x192504 - 0x192698
void entry_00192504_0x192504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192504_0x192504");
#endif

    ctx->pc = 0x192504u;

    // 0x192504: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x192504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x192508: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x192508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x19250c: 0x246505b0  addiu       $a1, $v1, 0x5B0
    ctx->pc = 0x19250cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x192510: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x192510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192514: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x192514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x192518: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x192518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19251c: 0x26c602d0  addiu       $a2, $s6, 0x2D0
    ctx->pc = 0x19251cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x192520: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x192520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192524: 0x2433821  addu        $a3, $s2, $v1
    ctx->pc = 0x192524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x192528: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x192528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19252c: 0x0  nop
    ctx->pc = 0x19252cu;
    // NOP
    // 0x192530: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x192530u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x192534: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x192534u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x192538: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x192538u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19253c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x19253cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192540: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x192540u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x192544: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x192544u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x192548: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x192548u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19254c: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x19254cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x192550: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x192550u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x192554: 0x4a0003bf  vwaitq
    ctx->pc = 0x192554u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x192558: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x192558u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19255c: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x19255cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x192560: 0xfaa50040  sqc2        $vf5, 0x40($s5)
    ctx->pc = 0x192560u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x192564: 0xfaa50070  sqc2        $vf5, 0x70($s5)
    ctx->pc = 0x192564u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x192568: 0xfaa500a0  sqc2        $vf5, 0xA0($s5)
    ctx->pc = 0x192568u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19256c: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x19256cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x192570: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192570u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192574: 0xdea50000  ld          $a1, 0x0($s5)
    ctx->pc = 0x192574u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192578: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x192578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19257c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19257cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x192580: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x192580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x192584: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x192584u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x192588: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x192588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x19258c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x19258cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192590: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x192590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192594: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192594u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192598: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19259c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19259cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1925a0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1925a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1925a4: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1925a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1925a8: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x1925a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x1925ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1925acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1925b0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1925b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1925b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1925b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1925b8: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x1925b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x1925bc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1925bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1925c0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1925c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1925c4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1925c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1925c8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1925c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1925cc: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x1925ccu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1925d0: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x1925d0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1925d4: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x1925d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1925d8: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x1925d8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1925dc: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1925dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1925e0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1925e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1925e4: 0xdea60000  ld          $a2, 0x0($s5)
    ctx->pc = 0x1925e4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1925e8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1925e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1925ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1925ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1925f0: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1925f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1925f4: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x1925f4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x1925f8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1925f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1925fc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1925fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192600: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x192600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x192604: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x192604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192608: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x192608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x19260c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x19260cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192610: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192610u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192614: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192618: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x192618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19261c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x19261cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x192620: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x192620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x192624: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x192624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x192628: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x192628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19262c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19262cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192630: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x192630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x192634: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x192634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192638: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x192638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x19263c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x19263cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192640: 0x2433821  addu        $a3, $s2, $v1
    ctx->pc = 0x192640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x192644: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x192644u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x192648: 0x0  nop
    ctx->pc = 0x192648u;
    // NOP
    // 0x19264c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19264cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x192650: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x192650u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x192654: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x192654u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192658: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x192658u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19265c: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x19265cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x192660: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x192660u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x192664: 0x4a0003bf  vwaitq
    ctx->pc = 0x192664u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x192668: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x192668u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19266c: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x19266cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x192670: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x192670u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x192674: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192674u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192678: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x192678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x19267c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x19267cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192680: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x192680u;
    {
        const bool branch_taken_0x192680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192680) {
            ctx->pc = 0x192698u;
            return;
        }
    }
    ctx->pc = 0x192688u;
    // 0x192688: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x192688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19268c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x19268cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x192690: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192690u;
    {
        const bool branch_taken_0x192690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192690) {
            ctx->pc = 0x1926A0u;
            return;
        }
    }
    ctx->pc = 0x192698u;
}
