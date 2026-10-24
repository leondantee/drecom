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

// Function: entry_001c8e6c
// Address: 0x1c8e6c - 0x1c8e9c
void entry_001c8e6c_0x1c8e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8e6c_0x1c8e6c");
#endif

    ctx->pc = 0x1c8e6cu;

    // 0x1c8e6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c8e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8e70: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c8e74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c8e78: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e7c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1c8e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8e80: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e84: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1c8e84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8e88: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e8c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c8e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8e90: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c8e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c8e94: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8e98: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1c8e9cu;
}
