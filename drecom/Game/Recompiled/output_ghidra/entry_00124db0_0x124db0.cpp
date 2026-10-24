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

// Function: entry_00124db0
// Address: 0x124db0 - 0x124de0
void entry_00124db0_0x124db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124db0_0x124db0");
#endif

    ctx->pc = 0x124db0u;

    // 0x124db0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124db4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124db8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x124db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x124dbc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x124dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x124dc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124dc4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x124dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x124dc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124dcc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x124dccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124dd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124dd4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x124dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x124dd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124ddc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x124de0u;
}
