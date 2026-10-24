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

// Function: entry_0023e064
// Address: 0x23e064 - 0x23e094
void entry_0023e064_0x23e064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e064_0x23e064");
#endif

    ctx->pc = 0x23e064u;

    // 0x23e064: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23e064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e068: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e06c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23e06cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23e070: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x23e070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23e074: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e078: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x23e078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23e07c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e080: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x23e080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e084: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e088: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x23e088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e08c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e090: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23e090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x23e094u;
}
