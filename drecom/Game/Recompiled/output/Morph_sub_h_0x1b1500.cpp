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

// Function: Morph_sub_h
// Address: 0x1b1500 - 0x1b157c
void Morph_sub_h_0x1b1500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Morph_sub_h_0x1b1500");
#endif

    ctx->pc = 0x1b1500u;

    // 0x1b1500: 0x70801e28  paddub      $v1, $a0, $zero
    ctx->pc = 0x1b1500u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1b1504: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1b1504u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1b1508: 0x70003489  pand        $a2, $zero, $zero
    ctx->pc = 0x1b1508u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b150c: 0x70003c89  pand        $a3, $zero, $zero
    ctx->pc = 0x1b150cu;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1510: 0xdc840000  ld          $a0, 0x0($a0)
    ctx->pc = 0x1b1510u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b1514: 0x9ca60000  lwu         $a2, 0x0($a1)
    ctx->pc = 0x1b1514u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b1518: 0x70063fc9  prot3w      $a3, $a2
    ctx->pc = 0x1b1518u;
    SET_GPR_VEC(ctx, 7, _mm_shuffle_epi32(GPR_VEC(ctx, 6), _MM_SHUFFLE(0,3,2,1)));
    // 0x1b151c: 0x9ca60004  lwu         $a2, 0x4($a1)
    ctx->pc = 0x1b151cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1b1520: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x1b1520u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b1524: 0x70073fc9  prot3w      $a3, $a3
    ctx->pc = 0x1b1524u;
    SET_GPR_VEC(ctx, 7, _mm_shuffle_epi32(GPR_VEC(ctx, 7), _MM_SHUFFLE(0,3,2,1)));
    // 0x1b1528: 0x9ca60008  lwu         $a2, 0x8($a1)
    ctx->pc = 0x1b1528u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b152c: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x1b152cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b1530: 0x700737c9  prot3w      $a2, $a3
    ctx->pc = 0x1b1530u;
    SET_GPR_VEC(ctx, 6, _mm_shuffle_epi32(GPR_VEC(ctx, 7), _MM_SHUFFLE(0,3,2,1)));
    // 0x1b1534: 0x70042988  pcgth       $a1, $zero, $a0
    ctx->pc = 0x1b1534u;
    SET_GPR_VEC(ctx, 5, PS2_PCGTH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x1b1538: 0x70a42588  pextlh      $a0, $a1, $a0
    ctx->pc = 0x1b1538u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLH(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1b153c: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x1b153cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b1540: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1b1540u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1b1544: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x1b1544u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1b1548: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x1b1548u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b154c: 0x4be3193d  vitof4.xyzw $vf3, $vf3
    ctx->pc = 0x1b154cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[3]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.0625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b1550: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1b1550u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1b1554: 0x4bc418d8  vmulx.xyz   $vf3, $vf3, $vf4x
    ctx->pc = 0x1b1554u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b1558: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1b1558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b155c: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x1b155cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1b1560: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1b1560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1b1564: 0x700637c9  prot3w      $a2, $a2
    ctx->pc = 0x1b1564u;
    SET_GPR_VEC(ctx, 6, _mm_shuffle_epi32(GPR_VEC(ctx, 6), _MM_SHUFFLE(0,3,2,1)));
    // 0x1b1568: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1b1568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1b156c: 0x700637c9  prot3w      $a2, $a2
    ctx->pc = 0x1b156cu;
    SET_GPR_VEC(ctx, 6, _mm_shuffle_epi32(GPR_VEC(ctx, 6), _MM_SHUFFLE(0,3,2,1)));
    // 0x1b1570: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1b1570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1b1574: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B157Cu;
}
