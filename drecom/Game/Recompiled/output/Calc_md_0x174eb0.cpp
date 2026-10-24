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

// Function: Calc_md
// Address: 0x174eb0 - 0x174ff8
void Calc_md_0x174eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Calc_md_0x174eb0");
#endif

    ctx->pc = 0x174eb0u;

    // 0x174eb0: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x174eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x174eb4: 0x71006628  paddub      $t4, $t0, $zero
    ctx->pc = 0x174eb4u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x174eb8: 0x71206e28  paddub      $t5, $t1, $zero
    ctx->pc = 0x174eb8u;
    SET_GPR_VEC(ctx, 13, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x174ebc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x174ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x174ec0: 0x24685800  addiu       $t0, $v1, 0x5800
    ctx->pc = 0x174ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 22528));
    // 0x174ec4: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x174ec4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174ec8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x174ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x174ecc: 0x2463e550  addiu       $v1, $v1, -0x1AB0
    ctx->pc = 0x174eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960464));
    // 0x174ed0: 0xd9130000  lqc2        $vf19, 0x0($t0)
    ctx->pc = 0x174ed0u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(FAST_READ128(0x385800u));
    // 0x174ed4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x174ed4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x61E550u));
    // 0x174ed8: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x174ed8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x61E560u));
    // 0x174edc: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x174edcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(FAST_READ128(0x61E570u));
    // 0x174ee0: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x174ee0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x61E580u));
    // 0x174ee4: 0xd8890000  lqc2        $vf9, 0x0($a0)
    ctx->pc = 0x174ee4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x174ee8: 0xd88a0010  lqc2        $vf10, 0x10($a0)
    ctx->pc = 0x174ee8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x174eec: 0xd88b0020  lqc2        $vf11, 0x20($a0)
    ctx->pc = 0x174eecu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x174ef0: 0xd88c0030  lqc2        $vf12, 0x30($a0)
    ctx->pc = 0x174ef0u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x174ef4: 0xd8850040  lqc2        $vf5, 0x40($a0)
    ctx->pc = 0x174ef4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x174ef8: 0xd8860050  lqc2        $vf6, 0x50($a0)
    ctx->pc = 0x174ef8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x174efc: 0xd8870060  lqc2        $vf7, 0x60($a0)
    ctx->pc = 0x174efcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x174f00: 0xd8880070  lqc2        $vf8, 0x70($a0)
    ctx->pc = 0x174f00u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x174f04: 0xd8b80000  lqc2        $vf24, 0x0($a1)
    ctx->pc = 0x174f04u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x174f08: 0x4bd8c13c  vitof0.xyz  $vf24, $vf24
    ctx->pc = 0x174f08u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[24]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x174f0c: 0x95480000  lhu         $t0, 0x0($t2)
    ctx->pc = 0x174f0cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x174f10: 0x70084788  pext5       $t0, $t0
    ctx->pc = 0x174f10u;
    { __m128i rt = GPR_VEC(ctx, 8); 
   __m128i m1 = _mm_set1_epi32(0x0000001F); 
   __m128i m2 = _mm_set1_epi32(0x000003E0); 
   __m128i m3 = _mm_set1_epi32(0x00007C00); 
   __m128i m4 = _mm_set1_epi32(0x00008000); 
   __m128i a1 = _mm_slli_epi32(_mm_and_si128(rt, m1), 3); 
   __m128i a2 = _mm_slli_epi32(_mm_and_si128(rt, m2), 6); 
   __m128i a3 = _mm_slli_epi32(_mm_and_si128(rt, m3), 9); 
   __m128i a4 = _mm_slli_epi32(_mm_and_si128(rt, m4), 16); 
   SET_GPR_VEC(ctx, 8, _mm_or_si128(_mm_or_si128(a1, a2), _mm_or_si128(a3, a4))); }
    // 0x174f14: 0x70084a88  pcgtb       $t1, $zero, $t0
    ctx->pc = 0x174f14u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x174f18: 0x71284688  pextlb      $t0, $t1, $t0
    ctx->pc = 0x174f18u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x174f1c: 0x70084988  pcgth       $t1, $zero, $t0
    ctx->pc = 0x174f1cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x174f20: 0x71284588  pextlh      $t0, $t1, $t0
    ctx->pc = 0x174f20u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x174f24: 0x48a8f800  qmtc2.ni    $t0, $vf31
    ctx->pc = 0x174f24u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x174f28: 0x4bdff93c  vitof0.xyz  $vf31, $vf31
    ctx->pc = 0x174f28u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[31]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x174f2c: 0x4bd3ffd9  vmuly.xyz   $vf31, $vf31, $vf19y
    ctx->pc = 0x174f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x174f30: 0xd98d0000  lqc2        $vf13, 0x0($t4)
    ctx->pc = 0x174f30u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x174f34: 0xd98e0010  lqc2        $vf14, 0x10($t4)
    ctx->pc = 0x174f34u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x174f38: 0xd98f0020  lqc2        $vf15, 0x20($t4)
    ctx->pc = 0x174f38u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x174f3c: 0xd9900030  lqc2        $vf16, 0x30($t4)
    ctx->pc = 0x174f3cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x174f40: 0xd9ba0000  lqc2        $vf26, 0x0($t5)
    ctx->pc = 0x174f40u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x174f44: 0xd9bb0010  lqc2        $vf27, 0x10($t5)
    ctx->pc = 0x174f44u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x174f48: 0xd9bc0020  lqc2        $vf28, 0x20($t5)
    ctx->pc = 0x174f48u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x174f4c: 0xd9bd0030  lqc2        $vf29, 0x30($t5)
    ctx->pc = 0x174f4cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 48)));
    // 0x174f50: 0xd8d10000  lqc2        $vf17, 0x0($a2)
    ctx->pc = 0x174f50u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x174f54: 0xd8f20000  lqc2        $vf18, 0x0($a3)
    ctx->pc = 0x174f54u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x174f58: 0x4bff69bc  vmulax.xyzw $ACC, $vf13, $vf31x
    ctx->pc = 0x174f58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174f5c: 0x4bffd349  vmaddy.xyzw $vf13, $vf26, $vf31y
    ctx->pc = 0x174f5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x174f60: 0x4bff71bc  vmulax.xyzw $ACC, $vf14, $vf31x
    ctx->pc = 0x174f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174f64: 0x4bffdb89  vmaddy.xyzw $vf14, $vf27, $vf31y
    ctx->pc = 0x174f64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x174f68: 0x4bff79bc  vmulax.xyzw $ACC, $vf15, $vf31x
    ctx->pc = 0x174f68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174f6c: 0x4bffe3c9  vmaddy.xyzw $vf15, $vf28, $vf31y
    ctx->pc = 0x174f6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x174f70: 0x4bff81bc  vmulax.xyzw $ACC, $vf16, $vf31x
    ctx->pc = 0x174f70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174f74: 0x4bffec09  vmaddy.xyzw $vf16, $vf29, $vf31y
    ctx->pc = 0x174f74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x174f78: 0x4bf269bc  vmulax.xyzw $ACC, $vf13, $vf18x
    ctx->pc = 0x174f78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174f7c: 0x4bf270bd  vmadday.xyzw $ACC, $vf14, $vf18y
    ctx->pc = 0x174f7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174f80: 0x4bf27c8a  vmaddz.xyzw $vf18, $vf15, $vf18z
    ctx->pc = 0x174f80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x174f84: 0x4bf169bc  vmulax.xyzw $ACC, $vf13, $vf17x
    ctx->pc = 0x174f84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174f88: 0x4bf170bd  vmadday.xyzw $ACC, $vf14, $vf17y
    ctx->pc = 0x174f88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174f8c: 0x4bf178be  vmaddaz.xyzw $ACC, $vf15, $vf17z
    ctx->pc = 0x174f8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174f90: 0x4be0844b  vmaddw.xyzw $vf17, $vf16, $vf0w
    ctx->pc = 0x174f90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x174f94: 0x4bd3c61a  vmulz.xyz   $vf24, $vf24, $vf19z
    ctx->pc = 0x174f94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x174f98: 0x4bf229bc  vmulax.xyzw $ACC, $vf5, $vf18x
    ctx->pc = 0x174f98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174f9c: 0x4bf230bd  vmadday.xyzw $ACC, $vf6, $vf18y
    ctx->pc = 0x174f9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174fa0: 0x4bf238be  vmaddaz.xyzw $ACC, $vf7, $vf18z
    ctx->pc = 0x174fa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174fa4: 0x4be0478b  vmaddw.xyzw $vf30, $vf8, $vf0w
    ctx->pc = 0x174fa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x174fa8: 0x4bf109bc  vmulax.xyzw $ACC, $vf1, $vf17x
    ctx->pc = 0x174fa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174fac: 0x4bf110bd  vmadday.xyzw $ACC, $vf2, $vf17y
    ctx->pc = 0x174facu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174fb0: 0x4bf118be  vmaddaz.xyzw $ACC, $vf3, $vf17z
    ctx->pc = 0x174fb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174fb4: 0x4be0250b  vmaddw.xyzw $vf20, $vf4, $vf0w
    ctx->pc = 0x174fb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x174fb8: 0x4be0f790  vmaxx.xyzw  $vf30, $vf30, $vf0x
    ctx->pc = 0x174fb8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x174fbc: 0x4bf403bc  vdiv        $Q, $vf0w, $vf20w
    ctx->pc = 0x174fbcu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x174fc0: 0x4bfe49bc  vmulax.xyzw $ACC, $vf9, $vf30x
    ctx->pc = 0x174fc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174fc4: 0x4bfe50bd  vmadday.xyzw $ACC, $vf10, $vf30y
    ctx->pc = 0x174fc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174fc8: 0x4bfe58be  vmaddaz.xyzw $ACC, $vf11, $vf30z
    ctx->pc = 0x174fc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174fcc: 0x4be0658b  vmaddw.xyzw $vf22, $vf12, $vf0w
    ctx->pc = 0x174fccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x174fd0: 0x4a0003bf  vwaitq
    ctx->pc = 0x174fd0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x174fd4: 0x4be0a51c  vmulq.xyzw  $vf20, $vf20, $Q
    ctx->pc = 0x174fd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x174fd8: 0x4bd8b5aa  vmul.xyz    $vf22, $vf22, $vf24
    ctx->pc = 0x174fd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x174fdc: 0x4bf4a17d  vftoi4.xyzw $vf20, $vf20
    ctx->pc = 0x174fdcu;
    { __m128 src = ctx->vu0_vf[20]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x174fe0: 0x4bf3b5d7  vminiw.xyzw $vf23, $vf22, $vf19w
    ctx->pc = 0x174fe0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x174fe4: 0x4bf7b97c  vftoi0.xyzw $vf23, $vf23
    ctx->pc = 0x174fe4u;
    { __m128 src = ctx->vu0_vf[23]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x174fe8: 0xf9740000  sqc2        $vf20, 0x0($t3)
    ctx->pc = 0x174fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x174fec: 0xf9d70000  sqc2        $vf23, 0x0($t6)
    ctx->pc = 0x174fecu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x174ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x174FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174FF8u;
}
