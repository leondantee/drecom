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

// Function: entry_002d1a50
// Address: 0x2d1a50 - 0x2d1a80
void entry_002d1a50_0x2d1a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1a50_0x2d1a50");
#endif

    ctx->pc = 0x2d1a50u;

    // 0x2d1a50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1a54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1a58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1a5c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2d1a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2d1a60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a64: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1a64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1a68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a6c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1a70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a74: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1a78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a7c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d1a80u;
}
