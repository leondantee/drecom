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

// Function: entry_0015790c
// Address: 0x15790c - 0x15791c
void entry_0015790c_0x15790c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015790c_0x15790c");
#endif

    ctx->pc = 0x15790cu;

    // 0x15790c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157910: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x157910u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x157914: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x157914u;
    {
        const bool branch_taken_0x157914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157914) {
            ctx->pc = 0x157B58u;
            return;
        }
    }
    ctx->pc = 0x15791Cu;
}
