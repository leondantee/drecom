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

// Function: entry_003795e0
// Address: 0x3795e0 - 0x3795ec
void entry_003795e0_0x3795e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003795e0_0x3795e0");
#endif

    ctx->pc = 0x3795e0u;

    // 0x3795e0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x3795e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3795e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3795E4u;
    {
        const bool branch_taken_0x3795e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3795e4) {
            ctx->pc = 0x37960Cu;
            return;
        }
    }
    ctx->pc = 0x3795ECu;
}
