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

// Function: entry_003619d4
// Address: 0x3619d4 - 0x361a04
void entry_003619d4_0x3619d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003619d4_0x3619d4");
#endif

    ctx->pc = 0x3619d4u;

    // 0x3619d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3619d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3619d8: 0x8c641244  lw          $a0, 0x1244($v1)
    ctx->pc = 0x3619d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4676)));
    // 0x3619dc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3619dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3619e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3619e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3619e4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3619E4u;
    {
        const bool branch_taken_0x3619e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3619e4) {
            ctx->pc = 0x361A0Cu;
            return;
        }
    }
    ctx->pc = 0x3619ECu;
    // 0x3619ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3619ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3619f0: 0x8c421244  lw          $v0, 0x1244($v0)
    ctx->pc = 0x3619f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4676)));
    // 0x3619f4: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x3619f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
    // 0x3619f8: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x3619f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x3619fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3619fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361a00: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x361a00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x361a04u;
}
