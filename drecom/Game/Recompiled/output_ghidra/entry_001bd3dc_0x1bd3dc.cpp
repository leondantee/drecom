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

// Function: entry_001bd3dc
// Address: 0x1bd3dc - 0x1bd40c
void entry_001bd3dc_0x1bd3dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd3dc_0x1bd3dc");
#endif

    ctx->pc = 0x1bd3dcu;

    // 0x1bd3dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd3e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1bd3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd3e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3ec: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1bd3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd3f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1bd3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd3f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd400: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1bd400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1bd404: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd408: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1bd408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1bd40cu;
}
