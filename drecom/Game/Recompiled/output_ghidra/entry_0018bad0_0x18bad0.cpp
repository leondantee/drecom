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

// Function: entry_0018bad0
// Address: 0x18bad0 - 0x18badc
void entry_0018bad0_0x18bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bad0_0x18bad0");
#endif

    ctx->pc = 0x18bad0u;

    // 0x18bad0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x18bad0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18bad4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18BAD4u;
    {
        const bool branch_taken_0x18bad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bad4) {
            ctx->pc = 0x18BB10u;
            return;
        }
    }
    ctx->pc = 0x18BADCu;
}
