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

// Function: entry_0018eed0
// Address: 0x18eed0 - 0x18ef00
void entry_0018eed0_0x18eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eed0_0x18eed0");
#endif

    ctx->pc = 0x18eed0u;

    // 0x18eed0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eed4: 0x8c430b24  lw          $v1, 0xB24($v0)
    ctx->pc = 0x18eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2852)));
    // 0x18eed8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eedc: 0x8c420b20  lw          $v0, 0xB20($v0)
    ctx->pc = 0x18eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2848)));
    // 0x18eee0: 0xac430b24  sw          $v1, 0xB24($v0)
    ctx->pc = 0x18eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2852), GPR_U32(ctx, 3));
    // 0x18eee4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EEE4u;
    {
        const bool branch_taken_0x18eee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eee4) {
            ctx->pc = 0x18EF00u;
            return;
        }
    }
    ctx->pc = 0x18EEECu;
    // 0x18eeec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eef0: 0x8c420b20  lw          $v0, 0xB20($v0)
    ctx->pc = 0x18eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2848)));
    // 0x18eef4: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x18eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x18eef8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18EEF8u;
    {
        const bool branch_taken_0x18eef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eef8) {
            ctx->pc = 0x18EF14u;
            return;
        }
    }
    ctx->pc = 0x18EF00u;
}
