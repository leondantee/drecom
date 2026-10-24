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

// Function: katVu0Clip_shw_tmc
// Address: 0x1e5920 - 0x1e5968
void katVu0Clip_shw_tmc_0x1e5920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("katVu0Clip_shw_tmc_0x1e5920");
#endif

    ctx->pc = 0x1e5920u;

    // 0x1e5920: 0x4bfa69bc  vmulax.xyzw $ACC, $vf13, $vf26x
    ctx->pc = 0x1e5920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e5924: 0x4bfa70bd  vmadday.xyzw $ACC, $vf14, $vf26y
    ctx->pc = 0x1e5924u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e5928: 0x4bfa78be  vmaddaz.xyzw $ACC, $vf15, $vf26z
    ctx->pc = 0x1e5928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e592c: 0x4be0868b  vmaddw.xyzw $vf26, $vf16, $vf0w
    ctx->pc = 0x1e592cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x1e5930: 0x4bdad1ff  .word       0x4BDAD1FF                   # vclipw.xyz  $vf26, $vf26w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1e5930u;
    { __m128 fs = ctx->vu0_vf[26]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x1e5934: 0x4bfb69bc  vmulax.xyzw $ACC, $vf13, $vf27x
    ctx->pc = 0x1e5934u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e5938: 0x4bfb70bd  vmadday.xyzw $ACC, $vf14, $vf27y
    ctx->pc = 0x1e5938u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e593c: 0x4bfb78be  vmaddaz.xyzw $ACC, $vf15, $vf27z
    ctx->pc = 0x1e593cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e5940: 0x4be086cb  vmaddw.xyzw $vf27, $vf16, $vf0w
    ctx->pc = 0x1e5940u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x1e5944: 0x4bdbd9ff  .word       0x4BDBD9FF                   # vclipw.xyz  $vf27, $vf27w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1e5944u;
    { __m128 fs = ctx->vu0_vf[27]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x1e5948: 0x4a0002ff  vnop
    ctx->pc = 0x1e5948u;
    // NOP operation, no action needed for VU0
    // 0x1e594c: 0x4a0002ff  vnop
    ctx->pc = 0x1e594cu;
    // NOP operation, no action needed for VU0
    // 0x1e5950: 0x4a0002ff  vnop
    ctx->pc = 0x1e5950u;
    // NOP operation, no action needed for VU0
    // 0x1e5954: 0x4a0002ff  vnop
    ctx->pc = 0x1e5954u;
    // NOP operation, no action needed for VU0
    // 0x1e5958: 0x4a0002ff  vnop
    ctx->pc = 0x1e5958u;
    // NOP operation, no action needed for VU0
    // 0x1e595c: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x1e595cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x1e5960: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5968u;
}
