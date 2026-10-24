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

// Function: entry_0018eb6c
// Address: 0x18eb6c - 0x18eb9c
void entry_0018eb6c_0x18eb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eb6c_0x18eb6c");
#endif

    ctx->pc = 0x18eb6cu;

    // 0x18eb6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb70: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x18eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18eb74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb78: 0x8c420214  lw          $v0, 0x214($v0)
    ctx->pc = 0x18eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18eb7c: 0xac430218  sw          $v1, 0x218($v0)
    ctx->pc = 0x18eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 3));
    // 0x18eb80: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EB80u;
    {
        const bool branch_taken_0x18eb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eb80) {
            ctx->pc = 0x18EB9Cu;
            return;
        }
    }
    ctx->pc = 0x18EB88u;
    // 0x18eb88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb8c: 0x8c420214  lw          $v0, 0x214($v0)
    ctx->pc = 0x18eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18eb90: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x18eb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x18eb94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18EB94u;
    {
        const bool branch_taken_0x18eb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb94) {
            ctx->pc = 0x18EBB0u;
            return;
        }
    }
    ctx->pc = 0x18EB9Cu;
}
