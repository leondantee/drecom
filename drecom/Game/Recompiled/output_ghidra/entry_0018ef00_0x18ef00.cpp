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

// Function: entry_0018ef00
// Address: 0x18ef00 - 0x18ef14
void entry_0018ef00_0x18ef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ef00_0x18ef00");
#endif

    ctx->pc = 0x18ef00u;

    // 0x18ef00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef04: 0x8c430b20  lw          $v1, 0xB20($v0)
    ctx->pc = 0x18ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2848)));
    // 0x18ef08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef0c: 0x8c420b24  lw          $v0, 0xB24($v0)
    ctx->pc = 0x18ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2852)));
    // 0x18ef10: 0xac430b20  sw          $v1, 0xB20($v0)
    ctx->pc = 0x18ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2848), GPR_U32(ctx, 3));
    ctx->pc = 0x18ef14u;
}
