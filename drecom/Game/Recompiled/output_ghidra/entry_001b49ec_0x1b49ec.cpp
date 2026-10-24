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

// Function: entry_001b49ec
// Address: 0x1b49ec - 0x1b49fc
void entry_001b49ec_0x1b49ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b49ec_0x1b49ec");
#endif

    ctx->pc = 0x1b49ecu;

    // 0x1b49ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b49f0: 0xa4401416  sh          $zero, 0x1416($v0)
    ctx->pc = 0x1b49f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5142), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b49f4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1B49F4u;
    {
        const bool branch_taken_0x1b49f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b49f4) {
            ctx->pc = 0x1B4AE8u;
            return;
        }
    }
    ctx->pc = 0x1B49FCu;
}
