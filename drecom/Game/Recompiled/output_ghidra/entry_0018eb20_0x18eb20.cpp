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

// Function: entry_0018eb20
// Address: 0x18eb20 - 0x18eb58
void entry_0018eb20_0x18eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eb20_0x18eb20");
#endif

    ctx->pc = 0x18eb20u;

    // 0x18eb20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb24: 0xac40020c  sw          $zero, 0x20C($v0)
    ctx->pc = 0x18eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 524), GPR_U32(ctx, 0));
    // 0x18eb28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb2c: 0x8c420214  lw          $v0, 0x214($v0)
    ctx->pc = 0x18eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18eb30: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18EB30u;
    {
        const bool branch_taken_0x18eb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eb30) {
            ctx->pc = 0x18EB6Cu;
            return;
        }
    }
    ctx->pc = 0x18EB38u;
    // 0x18eb38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb3c: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x18eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18eb40: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x18eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x18eb44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EB44u;
    {
        const bool branch_taken_0x18eb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eb44) {
            ctx->pc = 0x18EB58u;
            return;
        }
    }
    ctx->pc = 0x18EB4Cu;
    // 0x18eb4c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x18eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x18eb50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18EB50u;
    {
        const bool branch_taken_0x18eb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb50) {
            ctx->pc = 0x18EBB0u;
            return;
        }
    }
    ctx->pc = 0x18EB58u;
}
