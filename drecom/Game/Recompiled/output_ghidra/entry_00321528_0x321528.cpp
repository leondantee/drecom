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

// Function: entry_00321528
// Address: 0x321528 - 0x321530
void entry_00321528_0x321528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321528_0x321528");
#endif

    ctx->pc = 0x321528u;

    // 0x321528: 0x1600ffa4  bnez        $s0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x321528u;
    {
        const bool branch_taken_0x321528 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x321528) {
            ctx->pc = 0x3213BCu;
            return;
        }
    }
    ctx->pc = 0x321530u;
}
