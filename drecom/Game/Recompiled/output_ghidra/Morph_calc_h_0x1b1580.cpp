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

// Function: Morph_calc_h
// Address: 0x1b1580 - 0x1b1628
void Morph_calc_h_0x1b1580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Morph_calc_h_0x1b1580");
#endif

    ctx->pc = 0x1b1580u;

    // 0x1b1580: 0x70804e28  paddub      $t1, $a0, $zero
    ctx->pc = 0x1b1580u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1b1584: 0x70a03e28  paddub      $a3, $a1, $zero
    ctx->pc = 0x1b1584u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1b1588: 0x70c05628  paddub      $t2, $a2, $zero
    ctx->pc = 0x1b1588u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1b158c: 0x70002c89  pand        $a1, $zero, $zero
    ctx->pc = 0x1b158cu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1590: 0x70001c89  pand        $v1, $zero, $zero
    ctx->pc = 0x1b1590u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1594: 0x70003489  pand        $a2, $zero, $zero
    ctx->pc = 0x1b1594u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1598: 0x70002489  pand        $a0, $zero, $zero
    ctx->pc = 0x1b1598u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b159c: 0x94e50004  lhu         $a1, 0x4($a3)
    ctx->pc = 0x1b159cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1b15a0: 0x95430004  lhu         $v1, 0x4($t2)
    ctx->pc = 0x1b15a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1b15a4: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x1b15a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b15a8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1b15a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1b15ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b15acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b15b0: 0x94e60002  lhu         $a2, 0x2($a3)
    ctx->pc = 0x1b15b0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1b15b4: 0x95440002  lhu         $a0, 0x2($t2)
    ctx->pc = 0x1b15b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x1b15b8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1b15b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1b15bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b15bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b15c0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1b15c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1b15c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b15c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b15c8: 0x94e60000  lhu         $a2, 0x0($a3)
    ctx->pc = 0x1b15c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b15cc: 0x95440000  lhu         $a0, 0x0($t2)
    ctx->pc = 0x1b15ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1b15d0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1b15d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1b15d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b15d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b15d8: 0x70053188  pcgth       $a2, $zero, $a1
    ctx->pc = 0x1b15d8u;
    SET_GPR_VEC(ctx, 6, PS2_PCGTH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x1b15dc: 0x70032188  pcgth       $a0, $zero, $v1
    ctx->pc = 0x1b15dcu;
    SET_GPR_VEC(ctx, 4, PS2_PCGTH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1b15e0: 0x70c53d88  pextlh      $a3, $a2, $a1
    ctx->pc = 0x1b15e0u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTLH(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x1b15e4: 0x70832d88  pextlh      $a1, $a0, $v1
    ctx->pc = 0x1b15e4u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLH(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1b15e8: 0x48a74800  qmtc2.ni    $a3, $vf9
    ctx->pc = 0x1b15e8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1b15ec: 0x48a55000  qmtc2.ni    $a1, $vf10
    ctx->pc = 0x1b15ecu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1b15f0: 0x48a85800  qmtc2.ni    $t0, $vf11
    ctx->pc = 0x1b15f0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b15f4: 0x4be9493c  vitof0.xyzw $vf9, $vf9
    ctx->pc = 0x1b15f4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[9]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1b15f8: 0x4bea513c  vitof0.xyzw $vf10, $vf10
    ctx->pc = 0x1b15f8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[10]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1b15fc: 0x4bc9532c  vsub.xyz    $vf12, $vf10, $vf9
    ctx->pc = 0x1b15fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1b1600: 0x4bcb6318  vmulx.xyz   $vf12, $vf12, $vf11x
    ctx->pc = 0x1b1600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1b1604: 0x4bcc4a68  vadd.xyz    $vf9, $vf9, $vf12
    ctx->pc = 0x1b1604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1b1608: 0x48254800  qmfc2.ni    $a1, $vf9
    ctx->pc = 0x1b1608u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1b160c: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x1b160cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x1b1610: 0x70052fc9  prot3w      $a1, $a1
    ctx->pc = 0x1b1610u;
    SET_GPR_VEC(ctx, 5, _mm_shuffle_epi32(GPR_VEC(ctx, 5), _MM_SHUFFLE(0,3,2,1)));
    // 0x1b1614: 0xad250004  sw          $a1, 0x4($t1)
    ctx->pc = 0x1b1614u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 5));
    // 0x1b1618: 0x70052fc9  prot3w      $a1, $a1
    ctx->pc = 0x1b1618u;
    SET_GPR_VEC(ctx, 5, _mm_shuffle_epi32(GPR_VEC(ctx, 5), _MM_SHUFFLE(0,3,2,1)));
    // 0x1b161c: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x1b161cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
    // 0x1b1620: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1628u;
}
