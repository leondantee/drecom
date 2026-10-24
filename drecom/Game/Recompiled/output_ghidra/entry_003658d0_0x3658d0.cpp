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

// Function: entry_003658d0
// Address: 0x3658d0 - 0x365900
void entry_003658d0_0x3658d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003658d0_0x3658d0");
#endif

    ctx->pc = 0x3658d0u;

    // 0x3658d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3658d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3658d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3658d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3658dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3658dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3658e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3658e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3658e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3658ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3658f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3658f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3658f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3658fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x365900u;
}
