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

// Function: entry_00129b50
// Address: 0x129b50 - 0x129b80
void entry_00129b50_0x129b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129b50_0x129b50");
#endif

    ctx->pc = 0x129b50u;

    // 0x129b50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129b54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129b58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129b58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129b5c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x129b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x129b60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129b64: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129b64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129b68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129b6c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129b70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129b74: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129b78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129b7c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x129b80u;
}
