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

// Function: entry_003289a8
// Address: 0x3289a8 - 0x3289b4
void entry_003289a8_0x3289a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003289a8_0x3289a8");
#endif

    ctx->pc = 0x3289a8u;

    // 0x3289a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3289a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3289ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3289ACu;
    {
        const bool branch_taken_0x3289ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3289ac) {
            ctx->pc = 0x328A18u;
            return;
        }
    }
    ctx->pc = 0x3289B4u;
}
