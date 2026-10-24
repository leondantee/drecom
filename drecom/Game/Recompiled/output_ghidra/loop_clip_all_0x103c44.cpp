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

// Function: loop_clip_all
// Address: 0x103c44 - 0x103ca4
void loop_clip_all_0x103c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("loop_clip_all_0x103c44");
#endif

    ctx->pc = 0x103c44u;

label_103c44:
    // 0x103c44: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x103c44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x103c48: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x103c48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x103c4c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x103c4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x103c50: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x103c50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x103c54: 0x4bc84adb  vmulw.xyz   $vf11, $vf9, $vf8w
    ctx->pc = 0x103c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x103c58: 0x4bc8531b  vmulw.xyz   $vf12, $vf10, $vf8w
    ctx->pc = 0x103c58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x103c5c: 0x4a0002ff  vnop
    ctx->pc = 0x103c5cu;
    // NOP operation, no action needed for VU0
    // 0x103c60: 0x4a0002ff  vnop
    ctx->pc = 0x103c60u;
    // NOP operation, no action needed for VU0
    // 0x103c64: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x103c64u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
    // 0x103c68: 0x4bab42ec  vsub.xyw    $vf11, $vf8, $vf11
    ctx->pc = 0x103c68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x103c6c: 0x4ba8632c  vsub.xyw    $vf12, $vf12, $vf8
    ctx->pc = 0x103c6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[12], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x103c70: 0x4a2b4b3c  vmove.w     $vf11, $vf9
    ctx->pc = 0x103c70u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], ctx->vu0_vf[9], _mm_castsi128_ps(mask)); }
    // 0x103c74: 0x4a2c533c  vmove.w     $vf12, $vf10
    ctx->pc = 0x103c74u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[10], _mm_castsi128_ps(mask)); }
    // 0x103c78: 0x4a0002ff  vnop
    ctx->pc = 0x103c78u;
    // NOP operation, no action needed for VU0
    // 0x103c7c: 0x20e70010  addi        $a3, $a3, 0x10
    ctx->pc = 0x103c7cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x103c80: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x103c80u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x103c84: 0x2108ffff  addi        $t0, $t0, -0x1
    ctx->pc = 0x103c84u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x103c88: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x103c88u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x103c8c: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x103c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x103c90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103C90u;
    {
        const bool branch_taken_0x103c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103c90) {
            ctx->pc = 0x103CA4u;
            return;
        }
    }
    ctx->pc = 0x103C98u;
    // 0x103c98: 0x1408ffea  bne         $zero, $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x103C98u;
    {
        const bool branch_taken_0x103c98 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 8));
        if (branch_taken_0x103c98) {
            ctx->pc = 0x103C44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103c44;
        }
    }
    ctx->pc = 0x103CA0u;
    // 0x103ca0: 0x20020001  addi        $v0, $zero, 0x1
    ctx->pc = 0x103ca0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    ctx->pc = 0x103ca4u;
}
