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

// Function: entry_001cff60
// Address: 0x1cff60 - 0x1cff90
void entry_001cff60_0x1cff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cff60_0x1cff60");
#endif

    ctx->pc = 0x1cff60u;

    // 0x1cff60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cff60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff68: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cff68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cff6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff70: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1cff70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cff74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cff74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff78: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cff78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cff7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff80: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cff80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cff84: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1cff84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1cff88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff8c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1cff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x1cff90u;
}
