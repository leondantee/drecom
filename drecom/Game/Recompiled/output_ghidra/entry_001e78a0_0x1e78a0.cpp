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

// Function: entry_001e78a0
// Address: 0x1e78a0 - 0x1e78e0
void entry_001e78a0_0x1e78a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e78a0_0x1e78a0");
#endif

    ctx->pc = 0x1e78a0u;

    // 0x1e78a0: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1e78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e78a4: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E78A4u;
    {
        const bool branch_taken_0x1e78a4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e78a4) {
            ctx->pc = 0x1E78E0u;
            return;
        }
    }
    ctx->pc = 0x1E78ACu;
    // 0x1e78ac: 0x8fb001c0  lw          $s0, 0x1C0($sp)
    ctx->pc = 0x1e78acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e78b0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e78b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e78b4: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x1e78b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e78b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E78B8u;
    {
        const bool branch_taken_0x1e78b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e78b8) {
            ctx->pc = 0x1E78E0u;
            return;
        }
    }
    ctx->pc = 0x1E78C0u;
    // 0x1e78c0: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x1e78c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e78c4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E78C4u;
    {
        const bool branch_taken_0x1e78c4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e78c4) {
            ctx->pc = 0x1E78E0u;
            return;
        }
    }
    ctx->pc = 0x1E78CCu;
    // 0x1e78cc: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x1e78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e78d0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e78d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e78d4: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e78d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e78d8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E78D8u;
    {
        const bool branch_taken_0x1e78d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e78d8) {
            ctx->pc = 0x1E78F8u;
            return;
        }
    }
    ctx->pc = 0x1E78E0u;
}
