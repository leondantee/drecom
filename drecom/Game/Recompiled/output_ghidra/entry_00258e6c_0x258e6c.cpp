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

// Function: entry_00258e6c
// Address: 0x258e6c - 0x258e78
void entry_00258e6c_0x258e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258e6c_0x258e6c");
#endif

    ctx->pc = 0x258e6cu;

    // 0x258e6c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x258e6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x258e70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x258E70u;
    {
        const bool branch_taken_0x258e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258e70) {
            ctx->pc = 0x258E90u;
            return;
        }
    }
    ctx->pc = 0x258E78u;
}
