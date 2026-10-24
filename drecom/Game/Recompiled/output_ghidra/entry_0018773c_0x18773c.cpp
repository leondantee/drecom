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

// Function: entry_0018773c
// Address: 0x18773c - 0x187744
void entry_0018773c_0x18773c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018773c_0x18773c");
#endif

    ctx->pc = 0x18773cu;

    // 0x18773c: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x18773Cu;
    {
        const bool branch_taken_0x18773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18773c) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x187744u;
}
