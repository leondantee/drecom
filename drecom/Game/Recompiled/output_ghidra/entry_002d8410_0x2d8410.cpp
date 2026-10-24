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

// Function: entry_002d8410
// Address: 0x2d8410 - 0x2d8448
void entry_002d8410_0x2d8410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8410_0x2d8410");
#endif

    ctx->pc = 0x2d8410u;

    // 0x2d8410: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8414: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8418: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d841c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8420: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8424: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8428: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d842c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d842cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8430: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8434: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8434u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8438: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d843c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d843cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8440: 0x100002cf  b           . + 4 + (0x2CF << 2)
    ctx->pc = 0x2D8440u;
    {
        const bool branch_taken_0x2d8440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8440) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8448u;
}
