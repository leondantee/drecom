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

// Function: entry_002d88d0
// Address: 0x2d88d0 - 0x2d890c
void entry_002d88d0_0x2d88d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d88d0_0x2d88d0");
#endif

    ctx->pc = 0x2d88d0u;

    // 0x2d88d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d88d4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88d8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2d88d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d88dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d88dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d88e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d88e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d88e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d88e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d88ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d88f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d88f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d88f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d88f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d88fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d88fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8900: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d8900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d8904: 0x1000019e  b           . + 4 + (0x19E << 2)
    ctx->pc = 0x2D8904u;
    {
        const bool branch_taken_0x2d8904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8904) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D890Cu;
}
