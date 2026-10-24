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

// Function: entry_0018dc24
// Address: 0x18dc24 - 0x18dc38
void entry_0018dc24_0x18dc24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dc24_0x18dc24");
#endif

    ctx->pc = 0x18dc24u;

    // 0x18dc24: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x18dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x18dc28: 0xae020b20  sw          $v0, 0xB20($s0)
    ctx->pc = 0x18dc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2848), GPR_U32(ctx, 2));
    // 0x18dc2c: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x18dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x18dc30: 0xac500b24  sw          $s0, 0xB24($v0)
    ctx->pc = 0x18dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2852), GPR_U32(ctx, 16));
    // 0x18dc34: 0xae70006c  sw          $s0, 0x6C($s3)
    ctx->pc = 0x18dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 16));
    ctx->pc = 0x18dc38u;
}
