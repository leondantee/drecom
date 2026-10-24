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

// Function: entry_00192dc0
// Address: 0x192dc0 - 0x192f3c
void entry_00192dc0_0x192dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192dc0_0x192dc0");
#endif

    ctx->pc = 0x192dc0u;

    // 0x192dc0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x192dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x192dc4: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x192dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x192dc8: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x192dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x192dcc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x192dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192dd0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x192dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x192dd4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x192dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192dd8: 0x26c702d0  addiu       $a3, $s6, 0x2D0
    ctx->pc = 0x192dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x192ddc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x192ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192de0: 0x2234021  addu        $t0, $s1, $v1
    ctx->pc = 0x192de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x192de4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x192de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x192de8: 0x0  nop
    ctx->pc = 0x192de8u;
    // NOP
    // 0x192dec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x192decu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x192df0: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x192df0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x192df4: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x192df4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192df8: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x192df8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x192dfc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x192dfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192e00: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x192e00u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x192e04: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x192e04u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x192e08: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x192e08u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x192e0c: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x192e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x192e10: 0x4a0003bf  vwaitq
    ctx->pc = 0x192e10u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x192e14: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x192e14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x192e18: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x192e18u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x192e1c: 0xfaa50040  sqc2        $vf5, 0x40($s5)
    ctx->pc = 0x192e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x192e20: 0xfaa50070  sqc2        $vf5, 0x70($s5)
    ctx->pc = 0x192e20u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x192e24: 0xfaa500a0  sqc2        $vf5, 0xA0($s5)
    ctx->pc = 0x192e24u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x192e28: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x192e28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x192e2c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192e2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192e30: 0xdea60000  ld          $a2, 0x0($s5)
    ctx->pc = 0x192e30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192e34: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x192e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x192e38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x192e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x192e3c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x192e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x192e40: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x192e40u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x192e44: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x192e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x192e48: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x192e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192e4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192e50: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192e50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192e54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192e58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x192e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x192e5c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x192e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x192e60: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x192e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x192e64: 0x24c705b0  addiu       $a3, $a2, 0x5B0
    ctx->pc = 0x192e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1456));
    // 0x192e68: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x192e68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192e6c: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x192e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x192e70: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x192e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192e74: 0x26c602d0  addiu       $a2, $s6, 0x2D0
    ctx->pc = 0x192e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x192e78: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x192e78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192e7c: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x192e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x192e80: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x192e80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192e84: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x192e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192e88: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x192e88u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x192e8c: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x192e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x192e90: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x192e90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x192e94: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x192e94u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x192e98: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x192e98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x192e9c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192e9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192ea0: 0xdea70000  ld          $a3, 0x0($s5)
    ctx->pc = 0x192ea0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192ea4: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x192ea4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x192ea8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x192ea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x192eac: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x192eacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x192eb0: 0xfea60000  sd          $a2, 0x0($s5)
    ctx->pc = 0x192eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 6));
    // 0x192eb4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x192eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x192eb8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192ebc: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x192ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x192ec0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x192ec0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192ec4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x192ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x192ec8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192ecc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192eccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192ed0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192ed4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x192ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x192ed8: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x192ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x192edc: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x192edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x192ee0: 0x24c705b0  addiu       $a3, $a2, 0x5B0
    ctx->pc = 0x192ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1456));
    // 0x192ee4: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x192ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192ee8: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x192ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x192eec: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x192eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192ef0: 0x26c602d0  addiu       $a2, $s6, 0x2D0
    ctx->pc = 0x192ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x192ef4: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x192ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192ef8: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x192ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x192efc: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x192efcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192f00: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x192f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192f04: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x192f04u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x192f08: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x192f08u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x192f0c: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x192f0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x192f10: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x192f10u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x192f14: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x192f14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x192f18: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192f18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192f1c: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x192f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x192f20: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x192f20u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192f24: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x192F24u;
    {
        const bool branch_taken_0x192f24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f24) {
            ctx->pc = 0x192F3Cu;
            return;
        }
    }
    ctx->pc = 0x192F2Cu;
    // 0x192f2c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x192f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x192f30: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x192f30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x192f34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192F34u;
    {
        const bool branch_taken_0x192f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f34) {
            ctx->pc = 0x192F40u;
            return;
        }
    }
    ctx->pc = 0x192F3Cu;
}
