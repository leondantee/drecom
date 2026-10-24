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

// Function: entry_001e78f8
// Address: 0x1e78f8 - 0x1e7938
void entry_001e78f8_0x1e78f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e78f8_0x1e78f8");
#endif

    ctx->pc = 0x1e78f8u;

    // 0x1e78f8: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1e78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e78fc: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E78FCu;
    {
        const bool branch_taken_0x1e78fc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e78fc) {
            ctx->pc = 0x1E7938u;
            return;
        }
    }
    ctx->pc = 0x1E7904u;
    // 0x1e7904: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1e7904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e7908: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e790c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e790cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7910: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7910u;
    {
        const bool branch_taken_0x1e7910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7910) {
            ctx->pc = 0x1E7938u;
            return;
        }
    }
    ctx->pc = 0x1E7918u;
    // 0x1e7918: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e7918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e791c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E791Cu;
    {
        const bool branch_taken_0x1e791c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e791c) {
            ctx->pc = 0x1E7938u;
            return;
        }
    }
    ctx->pc = 0x1E7924u;
    // 0x1e7924: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e7924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e7928: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7928u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e792c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e792cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7930: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7930u;
    {
        const bool branch_taken_0x1e7930 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7930) {
            ctx->pc = 0x1E7950u;
            return;
        }
    }
    ctx->pc = 0x1E7938u;
}
