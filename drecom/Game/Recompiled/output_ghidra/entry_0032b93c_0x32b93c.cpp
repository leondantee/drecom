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

// Function: entry_0032b93c
// Address: 0x32b93c - 0x32b948
void entry_0032b93c_0x32b93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b93c_0x32b93c");
#endif

    ctx->pc = 0x32b93cu;

    // 0x32b93c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x32b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x32b940: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32B940u;
    {
        const bool branch_taken_0x32b940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b940) {
            ctx->pc = 0x32B980u;
            return;
        }
    }
    ctx->pc = 0x32B948u;
}
