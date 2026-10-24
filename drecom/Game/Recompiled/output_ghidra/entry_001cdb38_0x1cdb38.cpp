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

// Function: entry_001cdb38
// Address: 0x1cdb38 - 0x1cdb68
void entry_001cdb38_0x1cdb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdb38_0x1cdb38");
#endif

    ctx->pc = 0x1cdb38u;

    // 0x1cdb38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cdb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdb3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cdb40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cdb44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb48: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1cdb48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdb4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb50: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cdb50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdb54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cdb58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdb5c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1cdb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1cdb60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb64: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cdb64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1cdb68u;
}
