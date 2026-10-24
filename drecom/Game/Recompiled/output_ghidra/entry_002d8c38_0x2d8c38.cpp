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

// Function: entry_002d8c38
// Address: 0x2d8c38 - 0x2d8cb0
void entry_002d8c38_0x2d8c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8c38_0x2d8c38");
#endif

    ctx->pc = 0x2d8c38u;

    // 0x2d8c38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8c3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8c40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8c44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d8c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d8c48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c4c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8c50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c54: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8c58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8c60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d8c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8c68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c6c: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d8c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d8c70: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8c70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8c74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8c78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8c80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2d8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8c84: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c88: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2d8c88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8c8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8c90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8c94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c98: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8c98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8c9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8ca0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ca4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d8ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d8ca8: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x2D8CA8u;
    {
        const bool branch_taken_0x2d8ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8ca8) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8CB0u;
}
