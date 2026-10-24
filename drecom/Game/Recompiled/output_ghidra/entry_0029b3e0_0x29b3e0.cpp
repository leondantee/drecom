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

// Function: entry_0029b3e0
// Address: 0x29b3e0 - 0x29b43c
void entry_0029b3e0_0x29b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b3e0_0x29b3e0");
#endif

    switch (ctx->pc) {
        case 0x29b400u: goto label_29b400;
        case 0x29b41cu: goto label_29b41c;
        default: break;
    }

    ctx->pc = 0x29b3e0u;

    // 0x29b3e0: 0x7200b628  paddub      $s6, $s0, $zero
    ctx->pc = 0x29b3e0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b3e4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b3e8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b3e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b3ec: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b3ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b3f0: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x29b3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b3f4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x29b3f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29b3f8: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B3F8u;
    SET_GPR_U32(ctx, 31, 0x29B400u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B400u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B400u) { return; }
    ctx->pc = 0x29B400u;
label_29b400:
    // 0x29b400: 0x26140010  addiu       $s4, $s0, 0x10
    ctx->pc = 0x29b400u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b404: 0x72808628  paddub      $s0, $s4, $zero
    ctx->pc = 0x29b404u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x29b408: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b408u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b40c: 0x27b500c0  addiu       $s5, $sp, 0xC0
    ctx->pc = 0x29b40cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29b410: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x29b410u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x29b414: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B414u;
    SET_GPR_U32(ctx, 31, 0x29B41Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B41Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B41Cu) { return; }
    ctx->pc = 0x29B41Cu;
label_29b41c:
    // 0x29b41c: 0x3234ffff  andi        $s4, $s1, 0xFFFF
    ctx->pc = 0x29b41cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b420: 0x32940001  andi        $s4, $s4, 0x1
    ctx->pc = 0x29b420u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x29b424: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B424u;
    {
        const bool branch_taken_0x29b424 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b424) {
            ctx->pc = 0x29B43Cu;
            return;
        }
    }
    ctx->pc = 0x29B42Cu;
    // 0x29b42c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b430: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x29b430u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b434: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B434u;
    {
        const bool branch_taken_0x29b434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b434) {
            ctx->pc = 0x29B440u;
            return;
        }
    }
    ctx->pc = 0x29B43Cu;
}
