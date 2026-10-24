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

// Function: entry_003642f8
// Address: 0x3642f8 - 0x364300
void entry_003642f8_0x3642f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003642f8_0x3642f8");
#endif

    ctx->pc = 0x3642f8u;

    // 0x3642f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3642F8u;
    {
        const bool branch_taken_0x3642f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3642f8) {
            ctx->pc = 0x364360u;
            return;
        }
    }
    ctx->pc = 0x364300u;
}
