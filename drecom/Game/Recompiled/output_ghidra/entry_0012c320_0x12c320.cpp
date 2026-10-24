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

// Function: entry_0012c320
// Address: 0x12c320 - 0x12c334
void entry_0012c320_0x12c320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c320_0x12c320");
#endif

    ctx->pc = 0x12c320u;

    // 0x12c320: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12c320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12c324: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c328: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x12c328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x12c32c: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x12C32Cu;
    {
        const bool branch_taken_0x12c32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c32c) {
            ctx->pc = 0x12C744u;
            return;
        }
    }
    ctx->pc = 0x12C334u;
}
