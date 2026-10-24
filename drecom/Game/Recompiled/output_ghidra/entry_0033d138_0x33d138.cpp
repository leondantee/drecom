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

// Function: entry_0033d138
// Address: 0x33d138 - 0x33d154
void entry_0033d138_0x33d138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d138_0x33d138");
#endif

    ctx->pc = 0x33d138u;

    // 0x33d138: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x33d138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x33d13c: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x33d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x33d140: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x33d140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33d144: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x33D144u;
    {
        const bool branch_taken_0x33d144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d144) {
            ctx->pc = 0x33D0C0u;
            return;
        }
    }
    ctx->pc = 0x33D14Cu;
    // 0x33d14c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x33D14Cu;
    {
        const bool branch_taken_0x33d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d14c) {
            ctx->pc = 0x33D1D8u;
            return;
        }
    }
    ctx->pc = 0x33D154u;
}
