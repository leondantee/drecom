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

// Function: entry_003617cc
// Address: 0x3617cc - 0x3617fc
void entry_003617cc_0x3617cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003617cc_0x3617cc");
#endif

    ctx->pc = 0x3617ccu;

    // 0x3617cc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3617ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3617d0: 0x8c641244  lw          $a0, 0x1244($v1)
    ctx->pc = 0x3617d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4676)));
    // 0x3617d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3617d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3617d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3617d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3617dc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3617DCu;
    {
        const bool branch_taken_0x3617dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3617dc) {
            ctx->pc = 0x361804u;
            return;
        }
    }
    ctx->pc = 0x3617E4u;
    // 0x3617e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3617e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3617e8: 0x8c421244  lw          $v0, 0x1244($v0)
    ctx->pc = 0x3617e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4676)));
    // 0x3617ec: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x3617ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
    // 0x3617f0: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x3617f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x3617f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3617f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3617f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3617f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x3617fcu;
}
