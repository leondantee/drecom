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

// Function: entry_0018ec80
// Address: 0x18ec80 - 0x18ecb0
void entry_0018ec80_0x18ec80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ec80_0x18ec80");
#endif

    ctx->pc = 0x18ec80u;

    // 0x18ec80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ec84: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x18ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18ec88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ec8c: 0x8c420214  lw          $v0, 0x214($v0)
    ctx->pc = 0x18ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18ec90: 0xac430218  sw          $v1, 0x218($v0)
    ctx->pc = 0x18ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 3));
    // 0x18ec94: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EC94u;
    {
        const bool branch_taken_0x18ec94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ec94) {
            ctx->pc = 0x18ECB0u;
            return;
        }
    }
    ctx->pc = 0x18EC9Cu;
    // 0x18ec9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eca0: 0x8c420214  lw          $v0, 0x214($v0)
    ctx->pc = 0x18eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18eca4: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x18eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x18eca8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18ECA8u;
    {
        const bool branch_taken_0x18eca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eca8) {
            ctx->pc = 0x18ECC4u;
            return;
        }
    }
    ctx->pc = 0x18ECB0u;
}
