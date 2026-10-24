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

// Function: entry_002dc5c0
// Address: 0x2dc5c0 - 0x2dc5ec
void entry_002dc5c0_0x2dc5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc5c0_0x2dc5c0");
#endif

    ctx->pc = 0x2dc5c0u;

    // 0x2dc5c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc5c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dc5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc5cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5d0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2dc5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc5d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dc5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc5dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dc5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc5e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc5e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dc5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2dc5ecu;
}
