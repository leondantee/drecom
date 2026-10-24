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

// Function: entry_001cf91c
// Address: 0x1cf91c - 0x1cf94c
void entry_001cf91c_0x1cf91c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf91c_0x1cf91c");
#endif

    ctx->pc = 0x1cf91cu;

    // 0x1cf91c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf920: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf924: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cf924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf928: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf92c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1cf92cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf930: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf934: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cf934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf938: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf93c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cf93cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf940: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1cf940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1cf944: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf948: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cf948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1cf94cu;
}
