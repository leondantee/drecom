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

// Function: entry_0033c94c
// Address: 0x33c94c - 0x33c968
void entry_0033c94c_0x33c94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c94c_0x33c94c");
#endif

    ctx->pc = 0x33c94cu;

    // 0x33c94c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x33c94cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c950: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x33c950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x33c954: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33c954u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33c958: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x33c958u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c95c: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x33c95cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x33c960: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33C960u;
    {
        const bool branch_taken_0x33c960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c960) {
            ctx->pc = 0x33C988u;
            return;
        }
    }
    ctx->pc = 0x33C968u;
}
