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

// Function: entry_001c9dd4
// Address: 0x1c9dd4 - 0x1c9e04
void entry_001c9dd4_0x1c9dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9dd4_0x1c9dd4");
#endif

    ctx->pc = 0x1c9dd4u;

    // 0x1c9dd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9dd8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9ddc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c9ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c9de0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9de4: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1c9de4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9de8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9dec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c9decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9df0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9df4: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1c9df4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9df8: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1c9df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c9dfc: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x1c9dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9e00: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x1c9e00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    ctx->pc = 0x1c9e04u;
}
