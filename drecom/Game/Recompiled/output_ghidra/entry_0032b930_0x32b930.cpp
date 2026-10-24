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

// Function: entry_0032b930
// Address: 0x32b930 - 0x32b93c
void entry_0032b930_0x32b930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b930_0x32b930");
#endif

    ctx->pc = 0x32b930u;

    // 0x32b930: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x32b930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x32b934: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32B934u;
    {
        const bool branch_taken_0x32b934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b934) {
            ctx->pc = 0x32B980u;
            return;
        }
    }
    ctx->pc = 0x32B93Cu;
}
