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

// Function: entry_0034d6c0
// Address: 0x34d6c0 - 0x34d6e8
void entry_0034d6c0_0x34d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034d6c0_0x34d6c0");
#endif

    ctx->pc = 0x34d6c0u;

    // 0x34d6c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d6c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d6c8: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x34d6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d6cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d6d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d6d4: 0xa040006f  sb          $zero, 0x6F($v0)
    ctx->pc = 0x34d6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d6d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34d6dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d6e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d6e4: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x34d6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x34d6e8u;
}
