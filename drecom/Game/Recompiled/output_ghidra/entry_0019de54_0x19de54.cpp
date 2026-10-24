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

// Function: entry_0019de54
// Address: 0x19de54 - 0x19de9c
void entry_0019de54_0x19de54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019de54_0x19de54");
#endif

    ctx->pc = 0x19de54u;

label_19de54:
    // 0x19de54: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x19de54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19de58: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x19de58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19de5c: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x19de5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19de60: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x19de60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19de64: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x19de64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19de68: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x19de68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19de6c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19de6cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x19de70: 0x22310010  addi        $s1, $s1, 0x10
    ctx->pc = 0x19de70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
    // 0x19de74: 0x22100010  addi        $s0, $s0, 0x10
    ctx->pc = 0x19de74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x19de78: 0x1407fff6  bne         $zero, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19DE78u;
    {
        const bool branch_taken_0x19de78 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        if (branch_taken_0x19de78) {
            ctx->pc = 0x19DE54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19de54;
        }
    }
    ctx->pc = 0x19DE80u;
    // 0x19de80: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x19de80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19de84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19de84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19de88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19de88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19de8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19de8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19de90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19de90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19de94: 0x3e00008  jr          $ra
    ctx->pc = 0x19DE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DE9Cu;
}
