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

// Function: entry_0018ecb0
// Address: 0x18ecb0 - 0x18ecc4
void entry_0018ecb0_0x18ecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ecb0_0x18ecb0");
#endif

    ctx->pc = 0x18ecb0u;

    // 0x18ecb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ecb4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x18ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18ecb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ecbc: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x18ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18ecc0: 0xac430214  sw          $v1, 0x214($v0)
    ctx->pc = 0x18ecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 3));
    ctx->pc = 0x18ecc4u;
}
