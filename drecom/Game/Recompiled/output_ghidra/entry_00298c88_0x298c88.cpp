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

// Function: entry_00298c88
// Address: 0x298c88 - 0x298c9c
void entry_00298c88_0x298c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298c88_0x298c88");
#endif

    ctx->pc = 0x298c88u;

    // 0x298c88: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x298c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x298c8c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x298C8Cu;
    {
        const bool branch_taken_0x298c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298c8c) {
            ctx->pc = 0x298C50u;
            return;
        }
    }
    ctx->pc = 0x298C94u;
    // 0x298c94: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x298c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x298c98: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x298c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    ctx->pc = 0x298c9cu;
}
