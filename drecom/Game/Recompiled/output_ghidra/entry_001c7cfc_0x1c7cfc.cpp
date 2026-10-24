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

// Function: entry_001c7cfc
// Address: 0x1c7cfc - 0x1c7d2c
void entry_001c7cfc_0x1c7cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7cfc_0x1c7cfc");
#endif

    ctx->pc = 0x1c7cfcu;

    // 0x1c7cfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c7cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7d00: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c7d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7d04: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x1c7d04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c7d08: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7d0c: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x1c7d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7d10: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1c7d10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7d14: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x1c7d14u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7d18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7d1c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c7d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7d20: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c7d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c7d24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7d28: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c7d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1c7d2cu;
}
