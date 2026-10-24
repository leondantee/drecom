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

// Function: entry_001e6960
// Address: 0x1e6960 - 0x1e69a0
void entry_001e6960_0x1e6960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6960_0x1e6960");
#endif

    ctx->pc = 0x1e6960u;

    // 0x1e6960: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x1e6960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e6964: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E6964u;
    {
        const bool branch_taken_0x1e6964 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1e6964) {
            ctx->pc = 0x1E69A0u;
            return;
        }
    }
    ctx->pc = 0x1E696Cu;
    // 0x1e696c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1e696cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e6970: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6974: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e6974u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6978: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6978u;
    {
        const bool branch_taken_0x1e6978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6978) {
            ctx->pc = 0x1E69A0u;
            return;
        }
    }
    ctx->pc = 0x1E6980u;
    // 0x1e6980: 0x8fb701c4  lw          $s7, 0x1C4($sp)
    ctx->pc = 0x1e6980u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e6984: 0x6e00006  bltz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6984u;
    {
        const bool branch_taken_0x1e6984 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x1e6984) {
            ctx->pc = 0x1E69A0u;
            return;
        }
    }
    ctx->pc = 0x1E698Cu;
    // 0x1e698c: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x1e698cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e6990: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6994: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x1e6994u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6998: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6998u;
    {
        const bool branch_taken_0x1e6998 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6998) {
            ctx->pc = 0x1E69B8u;
            return;
        }
    }
    ctx->pc = 0x1E69A0u;
}
