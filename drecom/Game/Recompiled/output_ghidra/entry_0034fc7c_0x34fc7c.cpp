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

// Function: entry_0034fc7c
// Address: 0x34fc7c - 0x34fca8
void entry_0034fc7c_0x34fc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034fc7c_0x34fc7c");
#endif

    ctx->pc = 0x34fc7cu;

    // 0x34fc7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fc80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34fc84: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x34fc84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fc88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34fc8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fc90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34fc94: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x34fc94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x34fc98: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x34fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34fc9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fca0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34fca4: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x34fca4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x34fca8u;
}
