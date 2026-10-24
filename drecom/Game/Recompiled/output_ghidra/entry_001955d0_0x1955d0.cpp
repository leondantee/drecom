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

// Function: entry_001955d0
// Address: 0x1955d0 - 0x1955e0
void entry_001955d0_0x1955d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001955d0_0x1955d0");
#endif

    ctx->pc = 0x1955d0u;

    // 0x1955d0: 0x1600ffd3  bnez        $s0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1955D0u;
    {
        const bool branch_taken_0x1955d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1955d0) {
            ctx->pc = 0x195520u;
            return;
        }
    }
    ctx->pc = 0x1955D8u;
    // 0x1955d8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1955d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1955dc: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x1955dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    ctx->pc = 0x1955e0u;
}
