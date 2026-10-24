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

// Function: entry_0018e528
// Address: 0x18e528 - 0x18e530
void entry_0018e528_0x18e528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e528_0x18e528");
#endif

    ctx->pc = 0x18e528u;

    // 0x18e528: 0x1660ffc2  bnez        $s3, . + 4 + (-0x3E << 2)
    ctx->pc = 0x18E528u;
    {
        const bool branch_taken_0x18e528 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e528) {
            ctx->pc = 0x18E434u;
            return;
        }
    }
    ctx->pc = 0x18E530u;
}
