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

// Function: entry_002d8a50
// Address: 0x2d8a50 - 0x2d8a94
void entry_002d8a50_0x2d8a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8a50_0x2d8a50");
#endif

    ctx->pc = 0x2d8a50u;

    // 0x2d8a50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8a54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8a58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8a5c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2d8a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8a60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a64: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2d8a64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8a68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a6c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8a70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a74: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8a78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8a7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a80: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d8a84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a88: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d8a88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d8a8c: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x2D8A8Cu;
    {
        const bool branch_taken_0x2d8a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8a8c) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8A94u;
}
