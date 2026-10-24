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

// Function: entry_0021c4f8
// Address: 0x21c4f8 - 0x21c504
void entry_0021c4f8_0x21c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c4f8_0x21c4f8");
#endif

    ctx->pc = 0x21c4f8u;

    // 0x21c4f8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x21c4f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c4fc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x21C4FCu;
    {
        const bool branch_taken_0x21c4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c4fc) {
            ctx->pc = 0x21C598u;
            return;
        }
    }
    ctx->pc = 0x21C504u;
}
