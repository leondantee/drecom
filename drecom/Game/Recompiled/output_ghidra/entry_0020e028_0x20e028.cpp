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

// Function: entry_0020e028
// Address: 0x20e028 - 0x20e054
void entry_0020e028_0x20e028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e028_0x20e028");
#endif

    ctx->pc = 0x20e028u;

    // 0x20e028: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20e028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e02c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20e030: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20e030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20e034: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20e038: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x20e038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e03c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20e040: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20e040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e044: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20e044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20e048: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20e048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e04c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20e050: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20e050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20e054u;
}
