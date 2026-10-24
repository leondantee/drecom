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

// Function: entry_002e2da0
// Address: 0x2e2da0 - 0x2e2dd4
void entry_002e2da0_0x2e2da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2da0_0x2e2da0");
#endif

    ctx->pc = 0x2e2da0u;

    // 0x2e2da0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e2da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2da4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2da8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e2da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2dac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2db0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2e2db0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2db4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2db8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e2db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2dbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2dc0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e2dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2dc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2dc8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e2dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e2dcc: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x2E2DCCu;
    {
        const bool branch_taken_0x2e2dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2dcc) {
            ctx->pc = 0x2E3198u;
            return;
        }
    }
    ctx->pc = 0x2E2DD4u;
}
