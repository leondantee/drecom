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

// Function: entry_00129d04
// Address: 0x129d04 - 0x129d34
void entry_00129d04_0x129d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129d04_0x129d04");
#endif

    ctx->pc = 0x129d04u;

    // 0x129d04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129d08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129d0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129d10: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x129d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x129d14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129d18: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129d18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129d1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129d20: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129d20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129d24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129d28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129d28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129d2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129d30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x129d34u;
}
