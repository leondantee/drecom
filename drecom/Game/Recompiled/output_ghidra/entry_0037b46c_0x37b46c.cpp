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

// Function: entry_0037b46c
// Address: 0x37b46c - 0x37b4a0
void entry_0037b46c_0x37b46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b46c_0x37b46c");
#endif

    ctx->pc = 0x37b46cu;

    // 0x37b46c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b470: 0x8c2305a0  lw          $v1, 0x5A0($at)
    ctx->pc = 0x37b470u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37b474: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x37b474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x37b478: 0x146000a8  bnez        $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x37B478u;
    {
        const bool branch_taken_0x37b478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b478) {
            ctx->pc = 0x37B71Cu;
            return;
        }
    }
    ctx->pc = 0x37B480u;
    // 0x37b480: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b484: 0x8c220a70  lw          $v0, 0xA70($at)
    ctx->pc = 0x37b484u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0A70u));
    // 0x37b488: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x37B488u;
    {
        const bool branch_taken_0x37b488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b488) {
            ctx->pc = 0x37B618u;
            return;
        }
    }
    ctx->pc = 0x37B490u;
    // 0x37b490: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x37b490u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37b494: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x37b494u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37b498: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37B498u;
    {
        const bool branch_taken_0x37b498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b498) {
            ctx->pc = 0x37B4C0u;
            return;
        }
    }
    ctx->pc = 0x37B4A0u;
}
