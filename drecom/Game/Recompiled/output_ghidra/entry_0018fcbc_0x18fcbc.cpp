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

// Function: entry_0018fcbc
// Address: 0x18fcbc - 0x18fcc8
void entry_0018fcbc_0x18fcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fcbc_0x18fcbc");
#endif

    ctx->pc = 0x18fcbcu;

    // 0x18fcbc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18fcbcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18fcc0: 0x10000259  b           . + 4 + (0x259 << 2)
    ctx->pc = 0x18FCC0u;
    {
        const bool branch_taken_0x18fcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fcc0) {
            ctx->pc = 0x190628u;
            return;
        }
    }
    ctx->pc = 0x18FCC8u;
}
