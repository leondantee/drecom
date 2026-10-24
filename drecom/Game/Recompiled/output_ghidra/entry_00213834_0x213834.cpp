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

// Function: entry_00213834
// Address: 0x213834 - 0x213844
void entry_00213834_0x213834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213834_0x213834");
#endif

    ctx->pc = 0x213834u;

    // 0x213834: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x213834u;
    {
        const bool branch_taken_0x213834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x213834) {
            ctx->pc = 0x213864u;
            return;
        }
    }
    ctx->pc = 0x21383Cu;
    // 0x21383c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21383Cu;
    {
        const bool branch_taken_0x21383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21383c) {
            ctx->pc = 0x213874u;
            return;
        }
    }
    ctx->pc = 0x213844u;
}
