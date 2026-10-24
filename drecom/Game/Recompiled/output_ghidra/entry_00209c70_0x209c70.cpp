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

// Function: entry_00209c70
// Address: 0x209c70 - 0x209ca0
void entry_00209c70_0x209c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209c70_0x209c70");
#endif

    ctx->pc = 0x209c70u;

    // 0x209c70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209c74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209c78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x209c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x209c7c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x209c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x209c80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209c84: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x209c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x209c88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209c8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x209c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x209c90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209c94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x209c94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x209c98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209c9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x209c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x209ca0u;
}
