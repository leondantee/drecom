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

// Function: entry_00184de4
// Address: 0x184de4 - 0x184dec
void entry_00184de4_0x184de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184de4_0x184de4");
#endif

    ctx->pc = 0x184de4u;

    // 0x184de4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x184DE4u;
    {
        const bool branch_taken_0x184de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184de4) {
            ctx->pc = 0x184E14u;
            return;
        }
    }
    ctx->pc = 0x184DECu;
}
