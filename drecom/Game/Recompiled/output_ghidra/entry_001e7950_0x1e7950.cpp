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

// Function: entry_001e7950
// Address: 0x1e7950 - 0x1e7990
void entry_001e7950_0x1e7950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7950_0x1e7950");
#endif

    ctx->pc = 0x1e7950u;

    // 0x1e7950: 0x8fb301e0  lw          $s3, 0x1E0($sp)
    ctx->pc = 0x1e7950u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7954: 0x660000e  bltz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x1E7954u;
    {
        const bool branch_taken_0x1e7954 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x1e7954) {
            ctx->pc = 0x1E7990u;
            return;
        }
    }
    ctx->pc = 0x1E795Cu;
    // 0x1e795c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1e795cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7960: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e7964: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x1e7964u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7968: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7968u;
    {
        const bool branch_taken_0x1e7968 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7968) {
            ctx->pc = 0x1E7990u;
            return;
        }
    }
    ctx->pc = 0x1E7970u;
    // 0x1e7970: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x1e7970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7974: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7974u;
    {
        const bool branch_taken_0x1e7974 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e7974) {
            ctx->pc = 0x1E7990u;
            return;
        }
    }
    ctx->pc = 0x1E797Cu;
    // 0x1e797c: 0x8fb501e4  lw          $s5, 0x1E4($sp)
    ctx->pc = 0x1e797cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7980: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e7980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e7984: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x1e7984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e7988: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7988u;
    {
        const bool branch_taken_0x1e7988 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7988) {
            ctx->pc = 0x1E79A8u;
            return;
        }
    }
    ctx->pc = 0x1E7990u;
}
