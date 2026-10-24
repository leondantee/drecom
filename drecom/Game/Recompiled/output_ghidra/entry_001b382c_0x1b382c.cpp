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

// Function: entry_001b382c
// Address: 0x1b382c - 0x1b3850
void entry_001b382c_0x1b382c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b382c_0x1b382c");
#endif

    ctx->pc = 0x1b382cu;

    // 0x1b382c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b382cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b3830: 0x9442001a  lhu         $v0, 0x1A($v0)
    ctx->pc = 0x1b3830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x1b3834: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1b3834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b3838: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b3838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b383c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B383Cu;
    {
        const bool branch_taken_0x1b383c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b383c) {
            ctx->pc = 0x1B3850u;
            return;
        }
    }
    ctx->pc = 0x1B3844u;
    // 0x1b3844: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b3844u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3848: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B3848u;
    {
        const bool branch_taken_0x1b3848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3848) {
            ctx->pc = 0x1B38CCu;
            return;
        }
    }
    ctx->pc = 0x1B3850u;
}
