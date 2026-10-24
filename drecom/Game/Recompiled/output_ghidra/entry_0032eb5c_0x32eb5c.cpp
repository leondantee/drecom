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

// Function: entry_0032eb5c
// Address: 0x32eb5c - 0x32eb80
void entry_0032eb5c_0x32eb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032eb5c_0x32eb5c");
#endif

    ctx->pc = 0x32eb5cu;

    // 0x32eb5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32eb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32eb60: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x32eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0110u));
    // 0x32eb64: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x32eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x32eb68: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32eb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32eb6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32EB6Cu;
    {
        const bool branch_taken_0x32eb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb6c) {
            ctx->pc = 0x32EB80u;
            return;
        }
    }
    ctx->pc = 0x32EB74u;
    // 0x32eb74: 0x8e036614  lw          $v1, 0x6614($s0)
    ctx->pc = 0x32eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26132)));
    // 0x32eb78: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x32eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x32eb7c: 0xae036614  sw          $v1, 0x6614($s0)
    ctx->pc = 0x32eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26132), GPR_U32(ctx, 3));
    ctx->pc = 0x32eb80u;
}
