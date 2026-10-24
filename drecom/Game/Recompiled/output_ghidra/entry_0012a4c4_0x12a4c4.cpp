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

// Function: entry_0012a4c4
// Address: 0x12a4c4 - 0x12a4f4
void entry_0012a4c4_0x12a4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a4c4_0x12a4c4");
#endif

    ctx->pc = 0x12a4c4u;

    // 0x12a4c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a4c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a4cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a4d0: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x12a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12a4d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a4d8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a4dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a4e0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a4e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a4e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a4ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a4f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x12a4f4u;
}
