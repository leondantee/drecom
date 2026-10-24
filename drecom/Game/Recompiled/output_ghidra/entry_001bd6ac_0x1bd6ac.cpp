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

// Function: entry_001bd6ac
// Address: 0x1bd6ac - 0x1bd6dc
void entry_001bd6ac_0x1bd6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd6ac_0x1bd6ac");
#endif

    ctx->pc = 0x1bd6acu;

    // 0x1bd6ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd6b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1bd6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd6b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6bc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1bd6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd6c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1bd6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd6c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd6d0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1bd6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1bd6d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6d8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1bd6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1bd6dcu;
}
