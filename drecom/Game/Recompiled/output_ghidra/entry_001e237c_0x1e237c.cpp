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

// Function: entry_001e237c
// Address: 0x1e237c - 0x1e23bc
void entry_001e237c_0x1e237c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e237c_0x1e237c");
#endif

    ctx->pc = 0x1e237cu;

    // 0x1e237c: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x1e237cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2380: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1e2380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1e2384: 0x10600188  beqz        $v1, . + 4 + (0x188 << 2)
    ctx->pc = 0x1E2384u;
    {
        const bool branch_taken_0x1e2384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2384) {
            ctx->pc = 0x1E29A8u;
            return;
        }
    }
    ctx->pc = 0x1E238Cu;
    // 0x1e238c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e238cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e2390: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e2390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2394: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1e2394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1e2398: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2398u;
    {
        const bool branch_taken_0x1e2398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2398) {
            ctx->pc = 0x1E23BCu;
            return;
        }
    }
    ctx->pc = 0x1E23A0u;
    // 0x1e23a0: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e23a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e23a4: 0x8fa30254  lw          $v1, 0x254($sp)
    ctx->pc = 0x1e23a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x1e23a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e23ac: 0xafa30254  sw          $v1, 0x254($sp)
    ctx->pc = 0x1e23acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 3));
    // 0x1e23b0: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e23b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e23b4: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x1E23B4u;
    {
        const bool branch_taken_0x1e23b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e23b4) {
            ctx->pc = 0x1E29B8u;
            return;
        }
    }
    ctx->pc = 0x1E23BCu;
}
