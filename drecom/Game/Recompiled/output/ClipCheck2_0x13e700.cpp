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

// Function: ClipCheck2
// Address: 0x13e700 - 0x13e730
void ClipCheck2_0x13e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClipCheck2_0x13e700");
#endif

    ctx->pc = 0x13e700u;

    // 0x13e700: 0xd88a0040  lqc2        $vf10, 0x40($a0)
    ctx->pc = 0x13e700u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13e704: 0xd8ab0040  lqc2        $vf11, 0x40($a1)
    ctx->pc = 0x13e704u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x13e708: 0x4bca51ff  .word       0x4BCA51FF                   # vclipw.xyz  $vf10, $vf10w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13e708u;
    { __m128 fs = ctx->vu0_vf[10]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x13e70c: 0x4bcb59ff  .word       0x4BCB59FF                   # vclipw.xyz  $vf11, $vf11w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13e70cu;
    { __m128 fs = ctx->vu0_vf[11]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x13e710: 0x4a0002ff  vnop
    ctx->pc = 0x13e710u;
    // NOP operation, no action needed for VU0
    // 0x13e714: 0x4a0002ff  vnop
    ctx->pc = 0x13e714u;
    // NOP operation, no action needed for VU0
    // 0x13e718: 0x4a0002ff  vnop
    ctx->pc = 0x13e718u;
    // NOP operation, no action needed for VU0
    // 0x13e71c: 0x4a0002ff  vnop
    ctx->pc = 0x13e71cu;
    // NOP operation, no action needed for VU0
    // 0x13e720: 0x4a0002ff  vnop
    ctx->pc = 0x13e720u;
    // NOP operation, no action needed for VU0
    // 0x13e724: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x13e724u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x13e728: 0x3e00008  jr          $ra
    ctx->pc = 0x13E728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E730u;
}
