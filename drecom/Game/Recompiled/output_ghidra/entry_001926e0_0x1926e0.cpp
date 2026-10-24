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

// Function: entry_001926e0
// Address: 0x1926e0 - 0x192778
void entry_001926e0_0x1926e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001926e0_0x1926e0");
#endif

    ctx->pc = 0x1926e0u;

    // 0x1926e0: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1926e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1926e4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1926e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1926e8: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x1926e8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x1926ec: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1926ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1926f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1926f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1926f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1926f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1926f8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1926f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1926fc: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1926fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x192700: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x192700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x192704: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x192704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x192708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19270c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x19270cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x192710: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x192710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192714: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x192714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x192718: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x192718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x19271c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x19271cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x192720: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x192720u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192724: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x192724u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192728: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x192728u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19272c: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x19272cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x192730: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x192730u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x192734: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x192734u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x192738: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x192738u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x19273c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x19273cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192740: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x192740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x192744: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x192744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192748: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x192748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19274c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x19274cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192750: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x192750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x192754: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x192754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192758: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x192758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x19275c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x19275cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192760: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x192760u;
    {
        const bool branch_taken_0x192760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x192760) {
            ctx->pc = 0x192778u;
            return;
        }
    }
    ctx->pc = 0x192768u;
    // 0x192768: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x192768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19276c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x19276cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x192770: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192770u;
    {
        const bool branch_taken_0x192770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192770) {
            ctx->pc = 0x192780u;
            return;
        }
    }
    ctx->pc = 0x192778u;
}
