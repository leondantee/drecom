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

// Function: entry_003454d8
// Address: 0x3454d8 - 0x345500
void entry_003454d8_0x3454d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003454d8_0x3454d8");
#endif

    ctx->pc = 0x3454d8u;

    // 0x3454d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3454d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3454dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3454dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3454e0: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x3454e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3454e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3454e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3454e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3454e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3454ec: 0xa040006f  sb          $zero, 0x6F($v0)
    ctx->pc = 0x3454ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x3454f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3454f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3454f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3454f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3454f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3454f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3454fc: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x3454fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x345500u;
}
