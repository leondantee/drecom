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

// Function: entry_0019dbe0
// Address: 0x19dbe0 - 0x19dc28
void entry_0019dbe0_0x19dbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dbe0_0x19dbe0");
#endif

    ctx->pc = 0x19dbe0u;

label_19dbe0:
    // 0x19dbe0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x19dbe0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19dbe4: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x19dbe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19dbe8: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x19dbe8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19dbec: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x19dbecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19dbf0: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x19dbf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19dbf4: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x19dbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19dbf8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19dbf8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x19dbfc: 0x22310010  addi        $s1, $s1, 0x10
    ctx->pc = 0x19dbfcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
    // 0x19dc00: 0x22100010  addi        $s0, $s0, 0x10
    ctx->pc = 0x19dc00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x19dc04: 0x1407fff6  bne         $zero, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19DC04u;
    {
        const bool branch_taken_0x19dc04 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        if (branch_taken_0x19dc04) {
            ctx->pc = 0x19DBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dbe0;
        }
    }
    ctx->pc = 0x19DC0Cu;
    // 0x19dc0c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x19dc0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19dc10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19dc10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dc14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19dc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dc18: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19dc1c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19dc1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19dc20: 0x3e00008  jr          $ra
    ctx->pc = 0x19DC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DC28u;
}
