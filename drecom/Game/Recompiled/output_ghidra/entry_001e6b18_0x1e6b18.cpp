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

// Function: entry_001e6b18
// Address: 0x1e6b18 - 0x1e6b58
void entry_001e6b18_0x1e6b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6b18_0x1e6b18");
#endif

    ctx->pc = 0x1e6b18u;

    // 0x1e6b18: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x1e6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1e6b1c: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E6B1Cu;
    {
        const bool branch_taken_0x1e6b1c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e6b1c) {
            ctx->pc = 0x1E6B58u;
            return;
        }
    }
    ctx->pc = 0x1E6B24u;
    // 0x1e6b24: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x1e6b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1e6b28: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6b28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6b2c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e6b2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6b30: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6B30u;
    {
        const bool branch_taken_0x1e6b30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b30) {
            ctx->pc = 0x1E6B58u;
            return;
        }
    }
    ctx->pc = 0x1E6B38u;
    // 0x1e6b38: 0x8fa40214  lw          $a0, 0x214($sp)
    ctx->pc = 0x1e6b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x1e6b3c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6B3Cu;
    {
        const bool branch_taken_0x1e6b3c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1e6b3c) {
            ctx->pc = 0x1E6B58u;
            return;
        }
    }
    ctx->pc = 0x1E6B44u;
    // 0x1e6b44: 0x8fa30214  lw          $v1, 0x214($sp)
    ctx->pc = 0x1e6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x1e6b48: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6b4c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e6b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6b50: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6B50u;
    {
        const bool branch_taken_0x1e6b50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b50) {
            ctx->pc = 0x1E6B70u;
            return;
        }
    }
    ctx->pc = 0x1E6B58u;
}
