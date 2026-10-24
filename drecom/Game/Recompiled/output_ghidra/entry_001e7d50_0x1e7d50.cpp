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

// Function: entry_001e7d50
// Address: 0x1e7d50 - 0x1e7dbc
void entry_001e7d50_0x1e7d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7d50_0x1e7d50");
#endif

    ctx->pc = 0x1e7d50u;

    // 0x1e7d50: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1e7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e7d54: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x1e7d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e7d58: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x1e7d58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e7d5c: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x1e7d5cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7d60: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x1e7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e7d64: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x1e7d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e7d68: 0x43a823  subu        $s5, $v0, $v1
    ctx->pc = 0x1e7d68u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7d6c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e7d70: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x1e7d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e7d74: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x1e7d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e7d78: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x1e7d78u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7d7c: 0x8fa201f4  lw          $v0, 0x1F4($sp)
    ctx->pc = 0x1e7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1e7d80: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x1e7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e7d84: 0x43b823  subu        $s7, $v0, $v1
    ctx->pc = 0x1e7d84u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7d88: 0x2b61018  mult        $v0, $s5, $s6
    ctx->pc = 0x1e7d88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e7d8c: 0x2772818  mult        $a1, $s3, $s7
    ctx->pc = 0x1e7d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e7d90: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x1e7d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e7d94: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x1e7d94u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7d98: 0x6610008  bgez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7D98u;
    {
        const bool branch_taken_0x1e7d98 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x1e7d98) {
            ctx->pc = 0x1E7DBCu;
            return;
        }
    }
    ctx->pc = 0x1E7DA0u;
    // 0x1e7da0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7da4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1e7da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e7da8: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x1e7da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e7dac: 0xa43025  or          $a2, $a1, $a0
    ctx->pc = 0x1e7dacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1e7db0: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x1e7db0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x1e7db4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7DB4u;
    {
        const bool branch_taken_0x1e7db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7db4) {
            ctx->pc = 0x1E7DD0u;
            return;
        }
    }
    ctx->pc = 0x1E7DBCu;
}
