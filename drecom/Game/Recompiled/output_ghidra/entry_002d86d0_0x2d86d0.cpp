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

// Function: entry_002d86d0
// Address: 0x2d86d0 - 0x2d8708
void entry_002d86d0_0x2d86d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d86d0_0x2d86d0");
#endif

    ctx->pc = 0x2d86d0u;

    // 0x2d86d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d86d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d86d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d86d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d86d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d86d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d86dc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d86dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d86e0: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x2d86e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d86e4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d86e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d86e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d86ec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d86ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d86f0: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2d86f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d86f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d86f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d86f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d86f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d86fc: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d86fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8700: 0x1000021f  b           . + 4 + (0x21F << 2)
    ctx->pc = 0x2D8700u;
    {
        const bool branch_taken_0x2d8700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8700) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8708u;
}
