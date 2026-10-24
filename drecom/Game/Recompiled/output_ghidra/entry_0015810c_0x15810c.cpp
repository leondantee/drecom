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

// Function: entry_0015810c
// Address: 0x15810c - 0x158118
void entry_0015810c_0x15810c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015810c_0x15810c");
#endif

    ctx->pc = 0x15810cu;

    // 0x15810c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x15810cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x158110: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x158110u;
    {
        const bool branch_taken_0x158110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158110) {
            ctx->pc = 0x1583B8u;
            return;
        }
    }
    ctx->pc = 0x158118u;
}
