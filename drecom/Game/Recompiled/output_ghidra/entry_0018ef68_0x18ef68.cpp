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

// Function: entry_0018ef68
// Address: 0x18ef68 - 0x18ef80
void entry_0018ef68_0x18ef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ef68_0x18ef68");
#endif

    ctx->pc = 0x18ef68u;

    // 0x18ef68: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x18ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x18ef6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef70: 0xac430b28  sw          $v1, 0xB28($v0)
    ctx->pc = 0x18ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2856), GPR_U32(ctx, 3));
    // 0x18ef74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x18ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef78: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x18ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x18ef7c: 0xac430b2c  sw          $v1, 0xB2C($v0)
    ctx->pc = 0x18ef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2860), GPR_U32(ctx, 3));
    ctx->pc = 0x18ef80u;
}
