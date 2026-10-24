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

// Function: entry_0012c30c
// Address: 0x12c30c - 0x12c320
void entry_0012c30c_0x12c30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c30c_0x12c30c");
#endif

    ctx->pc = 0x12c30cu;

    // 0x12c30c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x12c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12c310: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c314: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x12c314u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x12c318: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x12C318u;
    {
        const bool branch_taken_0x12c318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c318) {
            ctx->pc = 0x12C744u;
            return;
        }
    }
    ctx->pc = 0x12C320u;
}
