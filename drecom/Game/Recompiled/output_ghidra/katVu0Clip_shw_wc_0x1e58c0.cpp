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

// Function: katVu0Clip_shw_wc
// Address: 0x1e58c0 - 0x1e591c
void katVu0Clip_shw_wc_0x1e58c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("katVu0Clip_shw_wc_0x1e58c0");
#endif

    ctx->pc = 0x1e58c0u;

    // 0x1e58c0: 0x4bf949bc  vmulax.xyzw $ACC, $vf9, $vf25x
    ctx->pc = 0x1e58c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e58c4: 0x4bf950bd  vmadday.xyzw $ACC, $vf10, $vf25y
    ctx->pc = 0x1e58c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e58c8: 0x4bf958be  vmaddaz.xyzw $ACC, $vf11, $vf25z
    ctx->pc = 0x1e58c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e58cc: 0x4be0670b  vmaddw.xyzw $vf28, $vf12, $vf0w
    ctx->pc = 0x1e58ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e58d0: 0x4bdce1ff  .word       0x4BDCE1FF                   # vclipw.xyz  $vf28, $vf28w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1e58d0u;
    { __m128 fs = ctx->vu0_vf[28]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x1e58d4: 0x4bfa49bc  vmulax.xyzw $ACC, $vf9, $vf26x
    ctx->pc = 0x1e58d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e58d8: 0x4bfa50bd  vmadday.xyzw $ACC, $vf10, $vf26y
    ctx->pc = 0x1e58d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e58dc: 0x4bfa58be  vmaddaz.xyzw $ACC, $vf11, $vf26z
    ctx->pc = 0x1e58dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e58e0: 0x4be0674b  vmaddw.xyzw $vf29, $vf12, $vf0w
    ctx->pc = 0x1e58e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e58e4: 0x4bdde9ff  .word       0x4BDDE9FF                   # vclipw.xyz  $vf29, $vf29w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1e58e4u;
    { __m128 fs = ctx->vu0_vf[29]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x1e58e8: 0x4bfb49bc  vmulax.xyzw $ACC, $vf9, $vf27x
    ctx->pc = 0x1e58e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e58ec: 0x4bfb50bd  vmadday.xyzw $ACC, $vf10, $vf27y
    ctx->pc = 0x1e58ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e58f0: 0x4bfb58be  vmaddaz.xyzw $ACC, $vf11, $vf27z
    ctx->pc = 0x1e58f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e58f4: 0x4be0670b  vmaddw.xyzw $vf28, $vf12, $vf0w
    ctx->pc = 0x1e58f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e58f8: 0x4bdce1ff  .word       0x4BDCE1FF                   # vclipw.xyz  $vf28, $vf28w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1e58f8u;
    { __m128 fs = ctx->vu0_vf[28]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x1e58fc: 0x4bf969bc  vmulax.xyzw $ACC, $vf13, $vf25x
    ctx->pc = 0x1e58fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e5900: 0x4bf970bd  vmadday.xyzw $ACC, $vf14, $vf25y
    ctx->pc = 0x1e5900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e5904: 0x4bf978be  vmaddaz.xyzw $ACC, $vf15, $vf25z
    ctx->pc = 0x1e5904u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e5908: 0x4be0864b  vmaddw.xyzw $vf25, $vf16, $vf0w
    ctx->pc = 0x1e5908u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x1e590c: 0x4bd9c9ff  .word       0x4BD9C9FF                   # vclipw.xyz  $vf25, $vf25w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1e590cu;
    { __m128 fs = ctx->vu0_vf[25]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x1e5910: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x1e5910u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x1e5914: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E591Cu;
}
