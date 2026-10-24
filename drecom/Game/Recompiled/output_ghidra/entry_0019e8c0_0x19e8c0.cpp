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

// Function: entry_0019e8c0
// Address: 0x19e8c0 - 0x19e8cc
void entry_0019e8c0_0x19e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e8c0_0x19e8c0");
#endif

    ctx->pc = 0x19e8c0u;

    // 0x19e8c0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x19e8c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e8c4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x19E8C4u;
    {
        const bool branch_taken_0x19e8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e8c4) {
            ctx->pc = 0x19EAD8u;
            return;
        }
    }
    ctx->pc = 0x19E8CCu;
}
