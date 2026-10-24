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

// Function: entry_001c1c70
// Address: 0x1c1c70 - 0x1c1ca0
void entry_001c1c70_0x1c1c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1c70_0x1c1c70");
#endif

    ctx->pc = 0x1c1c70u;

    // 0x1c1c70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1c74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1c78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c1c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c1c7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1c80: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1c1c80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1c84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1c88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c1c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1c8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1c90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c1c90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1c94: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1c1c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c1c98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1c9c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c1c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1c1ca0u;
}
