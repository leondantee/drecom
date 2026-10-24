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

// Function: entry_00212380
// Address: 0x212380 - 0x212394
void entry_00212380_0x212380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212380_0x212380");
#endif

    ctx->pc = 0x212380u;

    // 0x212380: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x212380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x212384: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x212384u;
    {
        const bool branch_taken_0x212384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x212384) {
            ctx->pc = 0x212368u;
            return;
        }
    }
    ctx->pc = 0x21238Cu;
    // 0x21238c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21238Cu;
    {
        const bool branch_taken_0x21238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21238c) {
            ctx->pc = 0x2123E0u;
            return;
        }
    }
    ctx->pc = 0x212394u;
}
