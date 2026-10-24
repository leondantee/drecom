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

// Function: _loopMulMatrix
// Address: 0x103014 - 0x103044
void _loopMulMatrix_0x103014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_loopMulMatrix_0x103014");
#endif

    ctx->pc = 0x103014u;

label_103014:
    // 0x103014: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x103014u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x103018: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x103018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x10301c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x10301cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x103020: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x103020u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x103024: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x103024u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x103028: 0xf8890000  sqc2        $vf9, 0x0($a0)
    ctx->pc = 0x103028u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x10302c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10302cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x103030: 0x20c60010  addi        $a2, $a2, 0x10
    ctx->pc = 0x103030u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x103034: 0x1407fff7  bne         $zero, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x103034u;
    {
        const bool branch_taken_0x103034 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x103038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103034u;
        // 0x103038: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103034) {
            ctx->pc = 0x103014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103014;
        }
    }
    ctx->pc = 0x10303Cu;
    // 0x10303c: 0x3e00008  jr          $ra
    ctx->pc = 0x10303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10303Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103044u;
}
