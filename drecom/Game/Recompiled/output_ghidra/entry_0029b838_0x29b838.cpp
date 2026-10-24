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

// Function: entry_0029b838
// Address: 0x29b838 - 0x29b89c
void entry_0029b838_0x29b838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b838_0x29b838");
#endif

    switch (ctx->pc) {
        case 0x29b860u: goto label_29b860;
        case 0x29b878u: goto label_29b878;
        default: break;
    }

    ctx->pc = 0x29b838u;

    // 0x29b838: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29b838u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b83c: 0xdfa201d8  ld          $v0, 0x1D8($sp)
    ctx->pc = 0x29b83cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x29b840: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29b840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b844: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b844u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b848: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b84c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b84cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b850: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b850u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b854: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x29b854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b858: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B858u;
    SET_GPR_U32(ctx, 31, 0x29B860u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B860u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B860u) { return; }
    ctx->pc = 0x29B860u;
label_29b860:
    // 0x29b860: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b864: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b864u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b868: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b868u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b86c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x29b86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x29b870: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B870u;
    SET_GPR_U32(ctx, 31, 0x29B878u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B878u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B878u) { return; }
    ctx->pc = 0x29B878u;
label_29b878:
    // 0x29b878: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x29b878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b87c: 0x30850010  andi        $a1, $a0, 0x10
    ctx->pc = 0x29b87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x29b880: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B880u;
    {
        const bool branch_taken_0x29b880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b880) {
            ctx->pc = 0x29B89Cu;
            return;
        }
    }
    ctx->pc = 0x29B888u;
    // 0x29b888: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x29b888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b88c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x29b88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b890: 0xffa201e0  sd          $v0, 0x1E0($sp)
    ctx->pc = 0x29b890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 2));
    // 0x29b894: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B894u;
    {
        const bool branch_taken_0x29b894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b894) {
            ctx->pc = 0x29B8A0u;
            return;
        }
    }
    ctx->pc = 0x29B89Cu;
}
