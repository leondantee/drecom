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

// Function: entry_001e7a58
// Address: 0x1e7a58 - 0x1e7a98
void entry_001e7a58_0x1e7a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7a58_0x1e7a58");
#endif

    ctx->pc = 0x1e7a58u;

    // 0x1e7a58: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x1e7a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1e7a5c: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E7A5Cu;
    {
        const bool branch_taken_0x1e7a5c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1e7a5c) {
            ctx->pc = 0x1E7A98u;
            return;
        }
    }
    ctx->pc = 0x1E7A64u;
    // 0x1e7a64: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x1e7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1e7a68: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7a68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e7a6c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e7a6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7a70: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7A70u;
    {
        const bool branch_taken_0x1e7a70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a70) {
            ctx->pc = 0x1E7A98u;
            return;
        }
    }
    ctx->pc = 0x1E7A78u;
    // 0x1e7a78: 0x8fa30214  lw          $v1, 0x214($sp)
    ctx->pc = 0x1e7a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x1e7a7c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7A7Cu;
    {
        const bool branch_taken_0x1e7a7c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e7a7c) {
            ctx->pc = 0x1E7A98u;
            return;
        }
    }
    ctx->pc = 0x1E7A84u;
    // 0x1e7a84: 0x8fa30214  lw          $v1, 0x214($sp)
    ctx->pc = 0x1e7a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x1e7a88: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7a88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e7a8c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e7a8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7a90: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7A90u;
    {
        const bool branch_taken_0x1e7a90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a90) {
            ctx->pc = 0x1E7AB0u;
            return;
        }
    }
    ctx->pc = 0x1E7A98u;
}
