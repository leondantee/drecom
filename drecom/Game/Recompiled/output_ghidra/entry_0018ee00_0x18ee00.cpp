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

// Function: entry_0018ee00
// Address: 0x18ee00 - 0x18ee2c
void entry_0018ee00_0x18ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ee00_0x18ee00");
#endif

    ctx->pc = 0x18ee00u;

    // 0x18ee00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee04: 0xac4002b4  sw          $zero, 0x2B4($v0)
    ctx->pc = 0x18ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 0));
    // 0x18ee08: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x18ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x18ee0c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18EE0Cu;
    {
        const bool branch_taken_0x18ee0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee0c) {
            ctx->pc = 0x18EE2Cu;
            return;
        }
    }
    ctx->pc = 0x18EE14u;
    // 0x18ee14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee18: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x18ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x18ee1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee20: 0xac4002b0  sw          $zero, 0x2B0($v0)
    ctx->pc = 0x18ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 0));
    // 0x18ee24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18EE24u;
    {
        const bool branch_taken_0x18ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee24) {
            ctx->pc = 0x18EE44u;
            return;
        }
    }
    ctx->pc = 0x18EE2Cu;
}
