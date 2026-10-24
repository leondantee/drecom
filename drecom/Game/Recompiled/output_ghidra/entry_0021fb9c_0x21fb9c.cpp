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

// Function: entry_0021fb9c
// Address: 0x21fb9c - 0x21fba8
void entry_0021fb9c_0x21fb9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fb9c_0x21fb9c");
#endif

    ctx->pc = 0x21fb9cu;

    // 0x21fb9c: 0x24170005  addiu       $s7, $zero, 0x5
    ctx->pc = 0x21fb9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21fba0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21FBA0u;
    {
        const bool branch_taken_0x21fba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fba0) {
            ctx->pc = 0x21FBB8u;
            return;
        }
    }
    ctx->pc = 0x21FBA8u;
}
