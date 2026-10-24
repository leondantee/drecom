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

// Function: entry_00264918
// Address: 0x264918 - 0x264928
void entry_00264918_0x264918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264918_0x264918");
#endif

    ctx->pc = 0x264918u;

    // 0x264918: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x264918u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x26491c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x26491Cu;
    {
        const bool branch_taken_0x26491c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26491c) {
            ctx->pc = 0x2648E0u;
            return;
        }
    }
    ctx->pc = 0x264924u;
    // 0x264924: 0x0  nop
    ctx->pc = 0x264924u;
    // NOP
    ctx->pc = 0x264928u;
}
