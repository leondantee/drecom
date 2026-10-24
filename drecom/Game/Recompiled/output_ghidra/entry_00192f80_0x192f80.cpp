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

// Function: entry_00192f80
// Address: 0x192f80 - 0x193014
void entry_00192f80_0x192f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192f80_0x192f80");
#endif

    ctx->pc = 0x192f80u;

    // 0x192f80: 0xdea60000  ld          $a2, 0x0($s5)
    ctx->pc = 0x192f80u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192f84: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x192f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x192f88: 0xfea60000  sd          $a2, 0x0($s5)
    ctx->pc = 0x192f88u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 6));
    // 0x192f8c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192f8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192f90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192f94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x192f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x192f98: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x192f98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x192f9c: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x192f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x192fa0: 0x24c705b0  addiu       $a3, $a2, 0x5B0
    ctx->pc = 0x192fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1456));
    // 0x192fa4: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x192fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192fa8: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x192fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x192fac: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x192facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192fb0: 0x26c602d0  addiu       $a2, $s6, 0x2D0
    ctx->pc = 0x192fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x192fb4: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x192fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192fb8: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x192fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x192fbc: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x192fbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192fc0: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x192fc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192fc4: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x192fc4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x192fc8: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x192fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x192fcc: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x192fccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x192fd0: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x192fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x192fd4: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x192fd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x192fd8: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x192fd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192fdc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x192fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x192fe0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192fe4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x192fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x192fe8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192fec: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x192fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x192ff0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x192ff0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192ff4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x192ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x192ff8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192ffc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x192FFCu;
    {
        const bool branch_taken_0x192ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192ffc) {
            ctx->pc = 0x193014u;
            return;
        }
    }
    ctx->pc = 0x193004u;
    // 0x193004: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x193004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x193008: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x193008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x19300c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19300Cu;
    {
        const bool branch_taken_0x19300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19300c) {
            ctx->pc = 0x193018u;
            return;
        }
    }
    ctx->pc = 0x193014u;
}
