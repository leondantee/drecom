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

// Function: entry_0030e764
// Address: 0x30e764 - 0x30e770
void entry_0030e764_0x30e764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e764_0x30e764");
#endif

    ctx->pc = 0x30e764u;

    // 0x30e764: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x30e764u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e768: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x30E768u;
    {
        const bool branch_taken_0x30e768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e768) {
            ctx->pc = 0x30E7D8u;
            return;
        }
    }
    ctx->pc = 0x30E770u;
}
