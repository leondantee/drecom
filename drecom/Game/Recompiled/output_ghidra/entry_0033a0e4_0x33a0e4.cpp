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

// Function: entry_0033a0e4
// Address: 0x33a0e4 - 0x33a0f4
void entry_0033a0e4_0x33a0e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a0e4_0x33a0e4");
#endif

    ctx->pc = 0x33a0e4u;

    // 0x33a0e4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a0e8: 0x8c305430  lw          $s0, 0x5430($at)
    ctx->pc = 0x33a0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x895430u));
    // 0x33a0ec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x33A0ECu;
    {
        const bool branch_taken_0x33a0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a0ec) {
            ctx->pc = 0x33A168u;
            return;
        }
    }
    ctx->pc = 0x33A0F4u;
}
