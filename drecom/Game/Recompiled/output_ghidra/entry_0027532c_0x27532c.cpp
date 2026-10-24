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

// Function: entry_0027532c
// Address: 0x27532c - 0x275344
void entry_0027532c_0x27532c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027532c_0x27532c");
#endif

    ctx->pc = 0x27532cu;

    // 0x27532c: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x27532cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x275330: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x275330u;
    {
        const bool branch_taken_0x275330 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x275330) {
            ctx->pc = 0x275344u;
            return;
        }
    }
    ctx->pc = 0x275338u;
    // 0x275338: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x275338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x27533c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27533Cu;
    {
        const bool branch_taken_0x27533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27533c) {
            ctx->pc = 0x275350u;
            return;
        }
    }
    ctx->pc = 0x275344u;
}
