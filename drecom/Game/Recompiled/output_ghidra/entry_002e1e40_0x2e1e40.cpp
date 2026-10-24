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

// Function: entry_002e1e40
// Address: 0x2e1e40 - 0x2e1e78
void entry_002e1e40_0x2e1e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1e40_0x2e1e40");
#endif

    ctx->pc = 0x2e1e40u;

    // 0x2e1e40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1e44: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e48: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e1e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1e4c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2e1e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e1e50: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e1e54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1e58: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e1e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1e60: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e1e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1e68: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e1e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e1e70: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E1E70u;
    {
        const bool branch_taken_0x2e1e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e70) {
            ctx->pc = 0x2E1EB4u;
            return;
        }
    }
    ctx->pc = 0x2E1E78u;
}
