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

// Function: entry_0018ec6c
// Address: 0x18ec6c - 0x18ec80
void entry_0018ec6c_0x18ec6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ec6c_0x18ec6c");
#endif

    ctx->pc = 0x18ec6cu;

    // 0x18ec6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ec70: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x18ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18ec74: 0xac400214  sw          $zero, 0x214($v0)
    ctx->pc = 0x18ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 0));
    // 0x18ec78: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18EC78u;
    {
        const bool branch_taken_0x18ec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec78) {
            ctx->pc = 0x18ECC4u;
            return;
        }
    }
    ctx->pc = 0x18EC80u;
}
