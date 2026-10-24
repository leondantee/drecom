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

// Function: entry_00125b60
// Address: 0x125b60 - 0x125b90
void entry_00125b60_0x125b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125b60_0x125b60");
#endif

    ctx->pc = 0x125b60u;

    // 0x125b60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125b64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125b68: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125b68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125b6c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x125b70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125b74: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x125b78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125b7c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125b80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125b84: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x125b88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125b8c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x125b90u;
}
