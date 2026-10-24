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

// Function: entry_002525cc
// Address: 0x2525cc - 0x2525d4
void entry_002525cc_0x2525cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002525cc_0x2525cc");
#endif

    ctx->pc = 0x2525ccu;

    // 0x2525cc: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x2525CCu;
    {
        const bool branch_taken_0x2525cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2525cc) {
            ctx->pc = 0x2529ECu;
            return;
        }
    }
    ctx->pc = 0x2525D4u;
}
