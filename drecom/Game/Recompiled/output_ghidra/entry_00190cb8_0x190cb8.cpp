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

// Function: entry_00190cb8
// Address: 0x190cb8 - 0x190cc4
void entry_00190cb8_0x190cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190cb8_0x190cb8");
#endif

    ctx->pc = 0x190cb8u;

    // 0x190cb8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x190cb8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190cbc: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x190CBCu;
    {
        const bool branch_taken_0x190cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190cbc) {
            ctx->pc = 0x1910D8u;
            return;
        }
    }
    ctx->pc = 0x190CC4u;
}
