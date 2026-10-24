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

// Function: entry_002e1e08
// Address: 0x2e1e08 - 0x2e1e40
void entry_002e1e08_0x2e1e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1e08_0x2e1e08");
#endif

    ctx->pc = 0x2e1e08u;

    // 0x2e1e08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1e0c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e1e10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1e14: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2e1e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e1e18: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e1c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e1e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1e20: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e24: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e1e24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1e28: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e1e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1e30: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e1e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e1e38: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2E1E38u;
    {
        const bool branch_taken_0x2e1e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e38) {
            ctx->pc = 0x2E1EB4u;
            return;
        }
    }
    ctx->pc = 0x2E1E40u;
}
