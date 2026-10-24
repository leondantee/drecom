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

// Function: entry_00364a00
// Address: 0x364a00 - 0x364a08
void entry_00364a00_0x364a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364a00_0x364a00");
#endif

    ctx->pc = 0x364a00u;

    // 0x364a00: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x364A00u;
    {
        const bool branch_taken_0x364a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364a00) {
            ctx->pc = 0x364A7Cu;
            return;
        }
    }
    ctx->pc = 0x364A08u;
}
