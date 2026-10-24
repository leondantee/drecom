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

// Function: entry_0029b8a0
// Address: 0x29b8a0 - 0x29b904
void entry_0029b8a0_0x29b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b8a0_0x29b8a0");
#endif

    switch (ctx->pc) {
        case 0x29b8c8u: goto label_29b8c8;
        case 0x29b8e0u: goto label_29b8e0;
        default: break;
    }

    ctx->pc = 0x29b8a0u;

    // 0x29b8a0: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x29b8a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b8a4: 0xdfa601e0  ld          $a2, 0x1E0($sp)
    ctx->pc = 0x29b8a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x29b8a8: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x29b8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x29b8ac: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b8acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b8b0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x29b8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b8b4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x29b8b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x29b8b8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b8b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b8bc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x29b8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b8c0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B8C0u;
    SET_GPR_U32(ctx, 31, 0x29B8C8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B8C8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B8C8u) { return; }
    ctx->pc = 0x29B8C8u;
label_29b8c8:
    // 0x29b8c8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b8cc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b8ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b8d0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b8d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b8d4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x29b8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29b8d8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B8D8u;
    SET_GPR_U32(ctx, 31, 0x29B8E0u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B8E0u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B8E0u) { return; }
    ctx->pc = 0x29B8E0u;
label_29b8e0:
    // 0x29b8e0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b8e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29b8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x29b8e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B8E8u;
    {
        const bool branch_taken_0x29b8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b8e8) {
            ctx->pc = 0x29B904u;
            return;
        }
    }
    ctx->pc = 0x29B8F0u;
    // 0x29b8f0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b8f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b8f8: 0xffa201e8  sd          $v0, 0x1E8($sp)
    ctx->pc = 0x29b8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 2));
    // 0x29b8fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B8FCu;
    {
        const bool branch_taken_0x29b8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b8fc) {
            ctx->pc = 0x29B908u;
            return;
        }
    }
    ctx->pc = 0x29B904u;
}
