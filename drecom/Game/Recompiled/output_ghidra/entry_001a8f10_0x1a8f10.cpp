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

// Function: entry_001a8f10
// Address: 0x1a8f10 - 0x1a8f1c
void entry_001a8f10_0x1a8f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8f10_0x1a8f10");
#endif

    ctx->pc = 0x1a8f10u;

    // 0x1a8f10: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1a8f10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8f14: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A8F14u;
    {
        const bool branch_taken_0x1a8f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f14) {
            ctx->pc = 0x1A8F70u;
            return;
        }
    }
    ctx->pc = 0x1A8F1Cu;
}
