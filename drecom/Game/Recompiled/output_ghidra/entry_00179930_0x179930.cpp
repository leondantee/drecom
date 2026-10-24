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

// Function: entry_00179930
// Address: 0x179930 - 0x179938
void entry_00179930_0x179930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179930_0x179930");
#endif

    ctx->pc = 0x179930u;

    // 0x179930: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x179930u;
    {
        const bool branch_taken_0x179930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179930) {
            ctx->pc = 0x179B40u;
            return;
        }
    }
    ctx->pc = 0x179938u;
}
