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

// Function: entry_0033f040
// Address: 0x33f040 - 0x33f078
void entry_0033f040_0x33f040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f040_0x33f040");
#endif

    ctx->pc = 0x33f040u;

    // 0x33f040: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f044: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x33f044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f048: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33f048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f04c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f050: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x33f050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33f054: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33f054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f058: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f05c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x33f05cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x33f060: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f064: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x33f064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f068: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f06c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x33f06cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f070: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f074: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x33f074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x33f078u;
}
