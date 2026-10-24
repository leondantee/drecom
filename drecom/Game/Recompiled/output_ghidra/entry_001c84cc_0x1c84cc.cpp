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

// Function: entry_001c84cc
// Address: 0x1c84cc - 0x1c84fc
void entry_001c84cc_0x1c84cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c84cc_0x1c84cc");
#endif

    ctx->pc = 0x1c84ccu;

    // 0x1c84cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c84d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c84d4: 0xa0431576  sb          $v1, 0x1576($v0)
    ctx->pc = 0x1c84d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c84d8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1c84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c84dc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c84e0: 0xa0621577  sb          $v0, 0x1577($v1)
    ctx->pc = 0x1c84e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5495), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c84e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c84e8: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1c84e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x1c84ec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c84ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c84f0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c84f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c84f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c84f8: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1c84f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c84fcu;
}
