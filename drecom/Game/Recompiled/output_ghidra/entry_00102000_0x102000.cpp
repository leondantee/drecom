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

// Function: entry_00102000
// Address: 0x102000 - 0x102008
void entry_00102000_0x102000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102000_0x102000");
#endif

    ctx->pc = 0x102000u;

    // 0x102000: 0x2d620007  sltiu       $v0, $t3, 0x7
    ctx->pc = 0x102000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x102004: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102004u;
    {
        const bool branch_taken_0x102004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102004) {
            ctx->pc = 0x102014u;
            return;
        }
    }
    ctx->pc = 0x10200Cu;
}
