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

// Function: entry_003634e8
// Address: 0x3634e8 - 0x363518
void entry_003634e8_0x3634e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003634e8_0x3634e8");
#endif

    ctx->pc = 0x3634e8u;

    // 0x3634e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3634e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3634ec: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3634ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3634f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3634f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3634f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3634f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3634f8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3634f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3634fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3634fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363500: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363504: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363508: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36350c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36350cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363510: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363514: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x363518u;
}
