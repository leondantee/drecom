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

// Function: capVu0Sin
// Address: 0x19d740 - 0x19d790
void capVu0Sin_0x19d740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0Sin_0x19d740");
#endif

    ctx->pc = 0x19d740u;

    // 0x19d740: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x19d740u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x19d744: 0x25297b20  addiu       $t1, $t1, 0x7B20
    ctx->pc = 0x19d744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 31520));
    // 0x19d748: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x19d748u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x387B20u));
    // 0x19d74c: 0x44096000  mfc1        $t1, $f12
    ctx->pc = 0x19d74cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x19d750: 0x0  nop
    ctx->pc = 0x19d750u;
    // NOP
    // 0x19d754: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x19d754u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x19d758: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x19d758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19d75c: 0x4b0011bf  vmulaw.x    $ACC, $vf2, $vf0w
    ctx->pc = 0x19d75cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d760: 0x4be3112a  vmul.xyzw   $vf4, $vf2, $vf3
    ctx->pc = 0x19d760u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d764: 0x4b0120bc  vmaddax.x   $ACC, $vf4, $vf1x
    ctx->pc = 0x19d764u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d768: 0x4be3212a  vmul.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x19d768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d76c: 0x4b0120bd  vmadday.x   $ACC, $vf4, $vf1y
    ctx->pc = 0x19d76cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d770: 0x4be3212a  vmul.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x19d770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d774: 0x4b0120be  vmaddaz.x   $ACC, $vf4, $vf1z
    ctx->pc = 0x19d774u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d778: 0x4be3212a  vmul.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x19d778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d77c: 0x4b01210b  vmaddw.x    $vf4, $vf4, $vf1w
    ctx->pc = 0x19d77cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d780: 0x48292000  qmfc2.ni    $t1, $vf4
    ctx->pc = 0x19d780u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d784: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x19d784u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d788: 0x3e00008  jr          $ra
    ctx->pc = 0x19D788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D790u;
}
