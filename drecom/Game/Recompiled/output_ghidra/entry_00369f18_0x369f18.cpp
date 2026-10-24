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

// Function: entry_00369f18
// Address: 0x369f18 - 0x369f40
void entry_00369f18_0x369f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369f18_0x369f18");
#endif

    ctx->pc = 0x369f18u;

    // 0x369f18: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369f1c: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x369f1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x369f20: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x369F20u;
    {
        const bool branch_taken_0x369f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f20) {
            ctx->pc = 0x369F40u;
            return;
        }
    }
    ctx->pc = 0x369F28u;
    // 0x369f28: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x369f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369f2c: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x369f2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x369f30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x369f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x369f34: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x369f34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x369f38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x369F38u;
    {
        const bool branch_taken_0x369f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f38) {
            ctx->pc = 0x369F7Cu;
            return;
        }
    }
    ctx->pc = 0x369F40u;
}
