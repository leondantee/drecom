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

// Function: katVu0ViewVolumeClip
// Address: 0x13e560 - 0x13e5a8
void katVu0ViewVolumeClip_0x13e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("katVu0ViewVolumeClip_0x13e560");
#endif

    ctx->pc = 0x13e560u;

    // 0x13e560: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x13e560u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e564: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x13e564u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x13e568: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x13e568u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x13e56c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x13e56cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x13e570: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x13e570u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13e574: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x13e574u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e578: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x13e578u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e57c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x13e57cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e580: 0x4be03b0b  vmaddw.xyzw $vf12, $vf7, $vf0w
    ctx->pc = 0x13e580u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13e584: 0x4bcc61ff  .word       0x4BCC61FF                   # vclipw.xyz  $vf12, $vf12w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13e584u;
    { __m128 fs = ctx->vu0_vf[12]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x13e588: 0x4a0002ff  vnop
    ctx->pc = 0x13e588u;
    // NOP operation, no action needed for VU0
    // 0x13e58c: 0x4a0002ff  vnop
    ctx->pc = 0x13e58cu;
    // NOP operation, no action needed for VU0
    // 0x13e590: 0x4a0002ff  vnop
    ctx->pc = 0x13e590u;
    // NOP operation, no action needed for VU0
    // 0x13e594: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x13e594u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x13e598: 0x4a0002ff  vnop
    ctx->pc = 0x13e598u;
    // NOP operation, no action needed for VU0
    // 0x13e59c: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x13e59cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x13e5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E5A8u;
}
