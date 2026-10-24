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

// Function: entry_002e1dd0
// Address: 0x2e1dd0 - 0x2e1e08
void entry_002e1dd0_0x2e1dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1dd0_0x2e1dd0");
#endif

    ctx->pc = 0x2e1dd0u;

    // 0x2e1dd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1dd4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1dd8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e1dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1ddc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2e1ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e1de0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1de4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e1de4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1de8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1dec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e1decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1df0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1df4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e1df4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1df8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1dfc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e1e00: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2E1E00u;
    {
        const bool branch_taken_0x2e1e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e00) {
            ctx->pc = 0x2E1EB4u;
            return;
        }
    }
    ctx->pc = 0x2E1E08u;
}
