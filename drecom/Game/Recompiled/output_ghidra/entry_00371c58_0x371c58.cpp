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

// Function: entry_00371c58
// Address: 0x371c58 - 0x371c70
void entry_00371c58_0x371c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371c58_0x371c58");
#endif

    ctx->pc = 0x371c58u;

    // 0x371c58: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x371c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x371c5c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x371c5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x371c60: 0x1620ffaf  bnez        $s1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x371C60u;
    {
        const bool branch_taken_0x371c60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x371c60) {
            ctx->pc = 0x371B20u;
            return;
        }
    }
    ctx->pc = 0x371C68u;
    // 0x371c68: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x371C68u;
    {
        const bool branch_taken_0x371c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371c68) {
            ctx->pc = 0x371DC0u;
            return;
        }
    }
    ctx->pc = 0x371C70u;
}
