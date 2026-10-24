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

// Function: entry_001e69b8
// Address: 0x1e69b8 - 0x1e69f8
void entry_001e69b8_0x1e69b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e69b8_0x1e69b8");
#endif

    ctx->pc = 0x1e69b8u;

    // 0x1e69b8: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1e69b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e69bc: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E69BCu;
    {
        const bool branch_taken_0x1e69bc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e69bc) {
            ctx->pc = 0x1E69F8u;
            return;
        }
    }
    ctx->pc = 0x1E69C4u;
    // 0x1e69c4: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x1e69c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e69c8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e69c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e69cc: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x1e69ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e69d0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E69D0u;
    {
        const bool branch_taken_0x1e69d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e69d0) {
            ctx->pc = 0x1E69F8u;
            return;
        }
    }
    ctx->pc = 0x1E69D8u;
    // 0x1e69d8: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e69dc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E69DCu;
    {
        const bool branch_taken_0x1e69dc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e69dc) {
            ctx->pc = 0x1E69F8u;
            return;
        }
    }
    ctx->pc = 0x1E69E4u;
    // 0x1e69e4: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e69e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e69e8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e69e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e69ec: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e69ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e69f0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E69F0u;
    {
        const bool branch_taken_0x1e69f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e69f0) {
            ctx->pc = 0x1E6A10u;
            return;
        }
    }
    ctx->pc = 0x1E69F8u;
}
