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

// Function: entry_0033d23c
// Address: 0x33d23c - 0x33d248
void entry_0033d23c_0x33d23c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d23c_0x33d23c");
#endif

    ctx->pc = 0x33d23cu;

    // 0x33d23c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x33d23cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33d240: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x33D240u;
    {
        const bool branch_taken_0x33d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d240) {
            ctx->pc = 0x33D298u;
            return;
        }
    }
    ctx->pc = 0x33D248u;
}
