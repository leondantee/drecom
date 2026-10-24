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

// Function: entry_001d1578
// Address: 0x1d1578 - 0x1d1584
void entry_001d1578_0x1d1578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1578_0x1d1578");
#endif

    ctx->pc = 0x1d1578u;

    // 0x1d1578: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x1d1578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x1d157c: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x1D157Cu;
    {
        const bool branch_taken_0x1d157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d157c) {
            ctx->pc = 0x1D18F8u;
            return;
        }
    }
    ctx->pc = 0x1D1584u;
}
