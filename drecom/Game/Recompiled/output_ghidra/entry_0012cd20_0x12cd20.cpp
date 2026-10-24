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

// Function: entry_0012cd20
// Address: 0x12cd20 - 0x12cd34
void entry_0012cd20_0x12cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cd20_0x12cd20");
#endif

    ctx->pc = 0x12cd20u;

    // 0x12cd20: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12cd24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cd28: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x12cd28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x12cd2c: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x12CD2Cu;
    {
        const bool branch_taken_0x12cd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd2c) {
            ctx->pc = 0x12D2CCu;
            return;
        }
    }
    ctx->pc = 0x12CD34u;
}
