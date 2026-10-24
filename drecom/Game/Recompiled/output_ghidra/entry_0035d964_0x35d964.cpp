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

// Function: entry_0035d964
// Address: 0x35d964 - 0x35d970
void entry_0035d964_0x35d964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d964_0x35d964");
#endif

    ctx->pc = 0x35d964u;

    // 0x35d964: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x35d964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x35d968: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x35D968u;
    {
        const bool branch_taken_0x35d968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d968) {
            ctx->pc = 0x35DA58u;
            return;
        }
    }
    ctx->pc = 0x35D970u;
}
