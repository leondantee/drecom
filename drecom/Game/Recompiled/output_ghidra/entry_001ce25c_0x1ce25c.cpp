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

// Function: entry_001ce25c
// Address: 0x1ce25c - 0x1ce264
void entry_001ce25c_0x1ce25c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce25c_0x1ce25c");
#endif

    ctx->pc = 0x1ce25cu;

    // 0x1ce25c: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x1CE25Cu;
    {
        const bool branch_taken_0x1ce25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce25c) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CE264u;
}
