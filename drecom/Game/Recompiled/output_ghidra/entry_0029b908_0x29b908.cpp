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

// Function: entry_0029b908
// Address: 0x29b908 - 0x29b974
void entry_0029b908_0x29b908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b908_0x29b908");
#endif

    switch (ctx->pc) {
        case 0x29b930u: goto label_29b930;
        case 0x29b94cu: goto label_29b94c;
        default: break;
    }

    ctx->pc = 0x29b908u;

    // 0x29b908: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29b908u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b90c: 0xdfa201e8  ld          $v0, 0x1E8($sp)
    ctx->pc = 0x29b90cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x29b910: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29b910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b914: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b914u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b918: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x29b918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b91c: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x29b91cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x29b920: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b920u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b924: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x29b924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b928: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B928u;
    SET_GPR_U32(ctx, 31, 0x29B930u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B930u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B930u) { return; }
    ctx->pc = 0x29B930u;
label_29b930:
    // 0x29b930: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x29b930u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b934: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b938: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b938u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b93c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b93cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b940: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x29b940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x29b944: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B944u;
    SET_GPR_U32(ctx, 31, 0x29B94Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B94Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B94Cu) { return; }
    ctx->pc = 0x29B94Cu;
label_29b94c:
    // 0x29b94c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b94cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b950: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b954: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x29b954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x29b958: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B958u;
    {
        const bool branch_taken_0x29b958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b958) {
            ctx->pc = 0x29B974u;
            return;
        }
    }
    ctx->pc = 0x29B960u;
    // 0x29b960: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b964: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b968: 0xffa201f0  sd          $v0, 0x1F0($sp)
    ctx->pc = 0x29b968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 2));
    // 0x29b96c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B96Cu;
    {
        const bool branch_taken_0x29b96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b96c) {
            ctx->pc = 0x29B978u;
            return;
        }
    }
    ctx->pc = 0x29B974u;
}
