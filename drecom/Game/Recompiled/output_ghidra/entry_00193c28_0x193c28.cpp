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

// Function: entry_00193c28
// Address: 0x193c28 - 0x193d70
void entry_00193c28_0x193c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193c28_0x193c28");
#endif

    ctx->pc = 0x193c28u;

    // 0x193c28: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193c2c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x193c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x193c30: 0x246405b0  addiu       $a0, $v1, 0x5B0
    ctx->pc = 0x193c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x193c34: 0x26c502d0  addiu       $a1, $s6, 0x2D0
    ctx->pc = 0x193c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x193c38: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193c3c: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x193c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x193c40: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x193c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x193c44: 0x0  nop
    ctx->pc = 0x193c44u;
    // NOP
    // 0x193c48: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x193c48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x193c4c: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x193c4cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x193c50: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x193c50u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x193c54: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x193c54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x193c58: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x193c58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193c5c: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x193c5cu;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x193c60: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x193c60u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x193c64: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x193c64u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x193c68: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x193c68u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x193c6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x193c6cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x193c70: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x193c70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x193c74: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x193c74u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x193c78: 0xfaa50040  sqc2        $vf5, 0x40($s5)
    ctx->pc = 0x193c78u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x193c7c: 0xfaa50070  sqc2        $vf5, 0x70($s5)
    ctx->pc = 0x193c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x193c80: 0xfaa500a0  sqc2        $vf5, 0xA0($s5)
    ctx->pc = 0x193c80u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x193c84: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x193c84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x193c88: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x193c88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x193c8c: 0xdea40000  ld          $a0, 0x0($s5)
    ctx->pc = 0x193c8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x193c90: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x193c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x193c94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x193c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x193c98: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x193c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x193c9c: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x193c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x193ca0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x193ca0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x193ca4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x193ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x193ca8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193cac: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x193cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x193cb0: 0x246405b0  addiu       $a0, $v1, 0x5B0
    ctx->pc = 0x193cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x193cb4: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x193cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x193cb8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193cbc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x193cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x193cc0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x193cc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193cc4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x193cc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193cc8: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x193cc8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x193ccc: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x193cccu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x193cd0: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x193cd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x193cd4: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x193cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x193cd8: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x193cd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x193cdc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x193cdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x193ce0: 0xdea40000  ld          $a0, 0x0($s5)
    ctx->pc = 0x193ce0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x193ce4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x193ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x193ce8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x193ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x193cec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x193cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x193cf0: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x193cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x193cf4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x193cf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x193cf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x193cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x193cfc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193d00: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x193d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x193d04: 0x246405b0  addiu       $a0, $v1, 0x5B0
    ctx->pc = 0x193d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x193d08: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x193d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x193d0c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193d10: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x193d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x193d14: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x193d14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193d18: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x193d18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193d1c: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x193d1cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x193d20: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x193d20u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x193d24: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x193d24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x193d28: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x193d28u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x193d2c: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x193d2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x193d30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x193d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x193d34: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193d38: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x193d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x193d3c: 0x246405b0  addiu       $a0, $v1, 0x5B0
    ctx->pc = 0x193d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x193d40: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x193d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x193d44: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193d48: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x193d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x193d4c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x193d4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193d50: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x193d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193d54: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x193d54u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x193d58: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x193d58u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x193d5c: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x193d5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x193d60: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x193d60u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x193d64: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x193d64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x193d68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x193d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x193d6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x193d70u;
}
