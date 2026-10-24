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

// Function: entry_002d21c4
// Address: 0x2d21c4 - 0x2d21f4
void entry_002d21c4_0x2d21c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d21c4_0x2d21c4");
#endif

    ctx->pc = 0x2d21c4u;

    // 0x2d21c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d21c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d21c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21cc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d21ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d21d0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2d21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2d21d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21d8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d21d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d21dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21e0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d21e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d21e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21e8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d21e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d21ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d21f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d21f4u;
}
