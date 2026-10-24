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

// Function: entry_0018ce20
// Address: 0x18ce20 - 0x18ce38
void entry_0018ce20_0x18ce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ce20_0x18ce20");
#endif

    ctx->pc = 0x18ce20u;

    // 0x18ce20: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x18CE20u;
    {
        const bool branch_taken_0x18ce20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ce20) {
            ctx->pc = 0x18CE60u;
            return;
        }
    }
    ctx->pc = 0x18CE28u;
    // 0x18ce28: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18ce2c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18ce2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18ce30: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x18CE30u;
    {
        const bool branch_taken_0x18ce30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ce30) {
            ctx->pc = 0x18D2F0u;
            return;
        }
    }
    ctx->pc = 0x18CE38u;
}
