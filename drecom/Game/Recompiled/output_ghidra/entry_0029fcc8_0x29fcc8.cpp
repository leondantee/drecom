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

// Function: entry_0029fcc8
// Address: 0x29fcc8 - 0x29fcf8
void entry_0029fcc8_0x29fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029fcc8_0x29fcc8");
#endif

    ctx->pc = 0x29fcc8u;

    // 0x29fcc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fccc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fcd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29fcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29fcd4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x29fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29fcd8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fcdc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29fcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29fce0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fce4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29fce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fce8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fcec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29fcecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fcf0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fcf4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29fcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29fcf8u;
}
