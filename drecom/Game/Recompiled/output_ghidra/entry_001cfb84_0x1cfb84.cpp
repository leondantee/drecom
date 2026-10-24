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

// Function: entry_001cfb84
// Address: 0x1cfb84 - 0x1cfbb4
void entry_001cfb84_0x1cfb84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfb84_0x1cfb84");
#endif

    ctx->pc = 0x1cfb84u;

    // 0x1cfb84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cfb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfb88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cfb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cfb90: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb94: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1cfb94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfb98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cfb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfba0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfba4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cfba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfba8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1cfba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1cfbac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfbb0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cfbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1cfbb4u;
}
