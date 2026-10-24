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

// Function: entry_001e6a68
// Address: 0x1e6a68 - 0x1e6aa8
void entry_001e6a68_0x1e6a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6a68_0x1e6a68");
#endif

    ctx->pc = 0x1e6a68u;

    // 0x1e6a68: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1e6a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e6a6c: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E6A6Cu;
    {
        const bool branch_taken_0x1e6a6c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e6a6c) {
            ctx->pc = 0x1E6AA8u;
            return;
        }
    }
    ctx->pc = 0x1E6A74u;
    // 0x1e6a74: 0x8fb001f0  lw          $s0, 0x1F0($sp)
    ctx->pc = 0x1e6a74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e6a78: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6a78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6a7c: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x1e6a7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6a80: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6A80u;
    {
        const bool branch_taken_0x1e6a80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a80) {
            ctx->pc = 0x1E6AA8u;
            return;
        }
    }
    ctx->pc = 0x1E6A88u;
    // 0x1e6a88: 0x8fa501f4  lw          $a1, 0x1F4($sp)
    ctx->pc = 0x1e6a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1e6a8c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6A8Cu;
    {
        const bool branch_taken_0x1e6a8c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1e6a8c) {
            ctx->pc = 0x1E6AA8u;
            return;
        }
    }
    ctx->pc = 0x1E6A94u;
    // 0x1e6a94: 0x8fa301f4  lw          $v1, 0x1F4($sp)
    ctx->pc = 0x1e6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1e6a98: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6a9c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e6a9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6aa0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6AA0u;
    {
        const bool branch_taken_0x1e6aa0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6aa0) {
            ctx->pc = 0x1E6AC0u;
            return;
        }
    }
    ctx->pc = 0x1E6AA8u;
}
