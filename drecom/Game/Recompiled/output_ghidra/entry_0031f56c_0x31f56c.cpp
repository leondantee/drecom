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

// Function: entry_0031f56c
// Address: 0x31f56c - 0x31f578
void entry_0031f56c_0x31f56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f56c_0x31f56c");
#endif

    ctx->pc = 0x31f56cu;

    // 0x31f56c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31f56cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31f570: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31F570u;
    {
        const bool branch_taken_0x31f570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f570) {
            ctx->pc = 0x31F598u;
            return;
        }
    }
    ctx->pc = 0x31F578u;
}
