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

// Function: entry_0019e160
// Address: 0x19e160 - 0x19e1d0
void entry_0019e160_0x19e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e160_0x19e160");
#endif

    switch (ctx->pc) {
        case 0x19e178u: goto label_19e178;
        default: break;
    }

    ctx->pc = 0x19e160u;

    // 0x19e160: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x19e160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19e164: 0x0  nop
    ctx->pc = 0x19e164u;
    // NOP
    // 0x19e168: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x19e168u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x19e16c: 0x3e03021  addu        $a2, $ra, $zero
    ctx->pc = 0x19e16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 31), GPR_U32(ctx, 0)));
    // 0x19e170: 0xc0676b0  jal         func_19DAC0
    ctx->pc = 0x19E170u;
    SET_GPR_U32(ctx, 31, 0x19E178u);
    ctx->pc = 0x19DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAC0u, 0x19E170u, 0x19E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E178u;
label_19e178:
    // 0x19e178: 0xc0f821  addu        $ra, $a2, $zero
    ctx->pc = 0x19e178u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
    // 0x19e17c: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x19e17cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19e180: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x19e180u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19e184: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x19e184u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19e188: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x19e188u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19e18c: 0x4a8029c3  vaddw.y     $vf7, $vf5, $vf0w
    ctx->pc = 0x19e18cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19e190: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x19e190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x19e194: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x19e194u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19e198: 0x4a442984  vsubx.z     $vf6, $vf5, $vf4x
    ctx->pc = 0x19e198u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19e19c: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x19e19cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19e1a0: 0x4b042a00  vaddx.x     $vf8, $vf5, $vf4x
    ctx->pc = 0x19e1a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19e1a4: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x19e1a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19e1a8: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x19e1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19e1ac: 0xfa070010  sqc2        $vf7, 0x10($s0)
    ctx->pc = 0x19e1acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19e1b0: 0xfa080020  sqc2        $vf8, 0x20($s0)
    ctx->pc = 0x19e1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x19e1b4: 0xfa090030  sqc2        $vf9, 0x30($s0)
    ctx->pc = 0x19e1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x19e1b8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x19e1b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e1bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19e1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e1c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19e1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19e1c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19e1c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19E1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E1D0u;
}
