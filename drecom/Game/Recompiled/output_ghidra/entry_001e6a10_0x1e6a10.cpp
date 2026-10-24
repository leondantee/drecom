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

// Function: entry_001e6a10
// Address: 0x1e6a10 - 0x1e6a50
void entry_001e6a10_0x1e6a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6a10_0x1e6a10");
#endif

    ctx->pc = 0x1e6a10u;

    // 0x1e6a10: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1e6a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e6a14: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E6A14u;
    {
        const bool branch_taken_0x1e6a14 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e6a14) {
            ctx->pc = 0x1E6A50u;
            return;
        }
    }
    ctx->pc = 0x1E6A1Cu;
    // 0x1e6a1c: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1e6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e6a20: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6a24: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e6a24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6a28: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6A28u;
    {
        const bool branch_taken_0x1e6a28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a28) {
            ctx->pc = 0x1E6A50u;
            return;
        }
    }
    ctx->pc = 0x1E6A30u;
    // 0x1e6a30: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x1e6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e6a34: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6A34u;
    {
        const bool branch_taken_0x1e6a34 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e6a34) {
            ctx->pc = 0x1E6A50u;
            return;
        }
    }
    ctx->pc = 0x1E6A3Cu;
    // 0x1e6a3c: 0x8fb001e4  lw          $s0, 0x1E4($sp)
    ctx->pc = 0x1e6a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e6a40: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6a44: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x1e6a44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6a48: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6A48u;
    {
        const bool branch_taken_0x1e6a48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a48) {
            ctx->pc = 0x1E6A68u;
            return;
        }
    }
    ctx->pc = 0x1E6A50u;
}
