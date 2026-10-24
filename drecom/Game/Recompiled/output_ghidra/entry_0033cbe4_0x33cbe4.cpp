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

// Function: entry_0033cbe4
// Address: 0x33cbe4 - 0x33cc00
void entry_0033cbe4_0x33cbe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033cbe4_0x33cbe4");
#endif

    ctx->pc = 0x33cbe4u;

    // 0x33cbe4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x33cbe4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cbe8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x33cbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x33cbec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33cbecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33cbf0: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x33cbf0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33cbf4: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x33cbf4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x33cbf8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33CBF8u;
    {
        const bool branch_taken_0x33cbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cbf8) {
            ctx->pc = 0x33CC20u;
            return;
        }
    }
    ctx->pc = 0x33CC00u;
}
