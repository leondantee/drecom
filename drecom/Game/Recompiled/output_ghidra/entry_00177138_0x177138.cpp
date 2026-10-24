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

// Function: entry_00177138
// Address: 0x177138 - 0x17714c
void entry_00177138_0x177138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177138_0x177138");
#endif

    ctx->pc = 0x177138u;

    // 0x177138: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177138u;
    {
        const bool branch_taken_0x177138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x177138) {
            ctx->pc = 0x17714Cu;
            return;
        }
    }
    ctx->pc = 0x177140u;
    // 0x177140: 0xafb00098  sw          $s0, 0x98($sp)
    ctx->pc = 0x177140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 16));
    // 0x177144: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x177144u;
    {
        const bool branch_taken_0x177144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177144) {
            ctx->pc = 0x177064u;
            return;
        }
    }
    ctx->pc = 0x17714Cu;
}
