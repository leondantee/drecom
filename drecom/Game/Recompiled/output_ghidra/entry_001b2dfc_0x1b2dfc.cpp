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

// Function: entry_001b2dfc
// Address: 0x1b2dfc - 0x1b2e0c
void entry_001b2dfc_0x1b2dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2dfc_0x1b2dfc");
#endif

    ctx->pc = 0x1b2dfcu;

    // 0x1b2dfc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b2e00: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1b2e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x1b2e04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B2E04u;
    {
        const bool branch_taken_0x1b2e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2e04) {
            ctx->pc = 0x1B2E30u;
            return;
        }
    }
    ctx->pc = 0x1B2E0Cu;
}
