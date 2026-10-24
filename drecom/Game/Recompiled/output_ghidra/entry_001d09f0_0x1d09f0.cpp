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

// Function: entry_001d09f0
// Address: 0x1d09f0 - 0x1d0a20
void entry_001d09f0_0x1d09f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d09f0_0x1d09f0");
#endif

    ctx->pc = 0x1d09f0u;

    // 0x1d09f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d09f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d09f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d09f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d09f8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1d09f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d09fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0a00: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1d0a00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0a04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0a08: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1d0a08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0a0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0a10: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d0a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0a14: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1d0a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d0a18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0a1c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1d0a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1d0a20u;
}
