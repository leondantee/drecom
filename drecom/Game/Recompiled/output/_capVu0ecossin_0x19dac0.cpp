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

// Function: _capVu0ecossin
// Address: 0x19dac0 - 0x19db3c
void _capVu0ecossin_0x19dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_capVu0ecossin_0x19dac0");
#endif

    ctx->pc = 0x19dac0u;

    // 0x19dac0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x19dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x19dac4: 0x24637b40  addiu       $v1, $v1, 0x7B40
    ctx->pc = 0x19dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31552));
    // 0x19dac8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x19dac8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x387B40u));
    // 0x19dacc: 0x4a26333d  vmr32.w     $vf6, $vf6
    ctx->pc = 0x19daccu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19dad0: 0x4b060100  vaddx.x     $vf4, $vf0, $vf6x
    ctx->pc = 0x19dad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19dad4: 0x4b0631aa  vmul.x      $vf6, $vf6, $vf6
    ctx->pc = 0x19dad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19dad8: 0x4ae02118  vmulx.yzw   $vf4, $vf4, $vf0x
    ctx->pc = 0x19dad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19dadc: 0x4be62a1b  vmulw.xyzw  $vf8, $vf5, $vf6w
    ctx->pc = 0x19dadcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19dae0: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x19dae0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19dae4: 0x4be64218  vmulx.xyzw  $vf8, $vf8, $vf6x
    ctx->pc = 0x19dae4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19dae8: 0x4bc64218  vmulx.xyz   $vf8, $vf8, $vf6x
    ctx->pc = 0x19dae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19daec: 0x4b082103  vaddw.x     $vf4, $vf4, $vf8w
    ctx->pc = 0x19daecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19daf0: 0x4b864218  vmulx.xy    $vf8, $vf8, $vf6x
    ctx->pc = 0x19daf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19daf4: 0x4b082102  vaddz.x     $vf4, $vf4, $vf8z
    ctx->pc = 0x19daf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19daf8: 0x4b064218  vmulx.x     $vf8, $vf8, $vf6x
    ctx->pc = 0x19daf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19dafc: 0x4b082101  vaddy.x     $vf4, $vf4, $vf8y
    ctx->pc = 0x19dafcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19db00: 0x4b082100  vaddx.x     $vf4, $vf4, $vf8x
    ctx->pc = 0x19db00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19db04: 0x4b842900  vaddx.xy    $vf4, $vf5, $vf4x
    ctx->pc = 0x19db04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19db08: 0x4b0421ea  vmul.x      $vf7, $vf4, $vf4
    ctx->pc = 0x19db08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19db0c: 0x4a2701c4  vsubx.w     $vf7, $vf0, $vf7x
    ctx->pc = 0x19db0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19db10: 0x4b8703bd  .word       0x4B8703BD                   # vsqrt       $Q, $vf7w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x19db10u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x19db14: 0x4a0003bf  vwaitq
    ctx->pc = 0x19db14u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19db18: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x19db18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19db1c: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19DB1Cu;
    {
        const bool branch_taken_0x19db1c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x19db1c) {
            ctx->pc = 0x19DB30u;
            goto label_19db30;
        }
    }
    ctx->pc = 0x19DB24u;
    // 0x19db24: 0x4b072900  vaddx.x     $vf4, $vf5, $vf7x
    ctx->pc = 0x19db24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19db28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19DB28u;
    {
        const bool branch_taken_0x19db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19db28) {
            ctx->pc = 0x19DB34u;
            goto label_19db34;
        }
    }
    ctx->pc = 0x19DB30u;
label_19db30:
    // 0x19db30: 0x4b072904  vsubx.x     $vf4, $vf5, $vf7x
    ctx->pc = 0x19db30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19db34:
    // 0x19db34: 0x3e00008  jr          $ra
    ctx->pc = 0x19DB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DB3Cu;
}
