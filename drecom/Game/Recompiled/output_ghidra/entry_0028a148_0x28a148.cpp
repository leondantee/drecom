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

// Function: entry_0028a148
// Address: 0x28a148 - 0x28a15c
void entry_0028a148_0x28a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028a148_0x28a148");
#endif

    ctx->pc = 0x28a148u;

    // 0x28a148: 0x2ae70004  slti        $a3, $s7, 0x4
    ctx->pc = 0x28a148u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28a14c: 0x14e0ffea  bnez        $a3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x28A14Cu;
    {
        const bool branch_taken_0x28a14c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a14c) {
            ctx->pc = 0x28A0F8u;
            return;
        }
    }
    ctx->pc = 0x28A154u;
    // 0x28a154: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x28A154u;
    {
        const bool branch_taken_0x28a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a154) {
            ctx->pc = 0x28A1D0u;
            return;
        }
    }
    ctx->pc = 0x28A15Cu;
}
