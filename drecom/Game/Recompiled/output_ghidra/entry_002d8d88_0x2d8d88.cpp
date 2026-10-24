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

// Function: entry_002d8d88
// Address: 0x2d8d88 - 0x2d8dd0
void entry_002d8d88_0x2d8d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8d88_0x2d8d88");
#endif

    ctx->pc = 0x2d8d88u;

    // 0x2d8d88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8d8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8d90: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8d94: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d8d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8d98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8d9c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8da0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8da4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8da4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8da8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8dac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8db0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8db4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8db8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d8db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d8dbc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8dc0: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d8dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d8dc4: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8dc8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2D8DC8u;
    {
        const bool branch_taken_0x2d8dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8dc8) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8DD0u;
}
