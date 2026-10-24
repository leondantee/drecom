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

// Function: entry_0023ac88
// Address: 0x23ac88 - 0x23acb8
void entry_0023ac88_0x23ac88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ac88_0x23ac88");
#endif

    ctx->pc = 0x23ac88u;

    // 0x23ac88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23ac88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ac8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac90: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23ac90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23ac94: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x23ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23ac98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ac98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac9c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x23ac9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23aca0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23aca4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x23aca4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23aca8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23acac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x23acacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23acb0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23acb4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x23acb8u;
}
