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

// Function: entry_00195140
// Address: 0x195140 - 0x1951d8
void entry_00195140_0x195140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195140_0x195140");
#endif

    ctx->pc = 0x195140u;

    // 0x195140: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x195140u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x195144: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x195144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x195148: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x195148u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x19514c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x19514cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x195150: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x195150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x195154: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x195154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x195158: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x195158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x19515c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x19515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x195160: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x195160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x195164: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x195164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x195168: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19516c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x19516cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x195170: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x195170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195174: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x195174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x195178: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x195178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x19517c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x19517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x195180: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x195180u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195184: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x195184u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x195188: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x195188u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19518c: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x19518cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x195190: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x195190u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x195194: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x195194u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x195198: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x195198u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x19519c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x19519cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1951a0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1951a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1951a4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1951a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1951a8: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x1951a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1951ac: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1951acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1951b0: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x1951b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1951b4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1951b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1951b8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1951b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1951bc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1951bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1951c0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1951C0u;
    {
        const bool branch_taken_0x1951c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1951c0) {
            ctx->pc = 0x1951D8u;
            return;
        }
    }
    ctx->pc = 0x1951C8u;
    // 0x1951c8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1951c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1951cc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1951ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1951d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1951D0u;
    {
        const bool branch_taken_0x1951d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1951d0) {
            ctx->pc = 0x1951E0u;
            return;
        }
    }
    ctx->pc = 0x1951D8u;
}
