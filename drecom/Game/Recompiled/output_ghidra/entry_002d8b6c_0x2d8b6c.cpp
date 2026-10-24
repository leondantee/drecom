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

// Function: entry_002d8b6c
// Address: 0x2d8b6c - 0x2d8bb0
void entry_002d8b6c_0x2d8b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8b6c_0x2d8b6c");
#endif

    ctx->pc = 0x2d8b6cu;

    // 0x2d8b6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8b70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8b78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d8b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d8b7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b80: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8b80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8b84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8b88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8b8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8b90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8b94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d8b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8b9c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ba0: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d8ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d8ba4: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ba8: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x2D8BA8u;
    {
        const bool branch_taken_0x2d8ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8ba8) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8BB0u;
}
