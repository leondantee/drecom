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

// Function: entry_00127c08
// Address: 0x127c08 - 0x127c10
void entry_00127c08_0x127c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127c08_0x127c08");
#endif

    ctx->pc = 0x127c08u;

    // 0x127c08: 0x100001f2  b           . + 4 + (0x1F2 << 2)
    ctx->pc = 0x127C08u;
    {
        const bool branch_taken_0x127c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127c08) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x127C10u;
}
