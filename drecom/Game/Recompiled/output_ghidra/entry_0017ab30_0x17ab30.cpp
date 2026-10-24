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

// Function: entry_0017ab30
// Address: 0x17ab30 - 0x17ab3c
void entry_0017ab30_0x17ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ab30_0x17ab30");
#endif

    ctx->pc = 0x17ab30u;

    // 0x17ab30: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17ab30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17ab34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17AB34u;
    {
        const bool branch_taken_0x17ab34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ab34) {
            ctx->pc = 0x17AB5Cu;
            return;
        }
    }
    ctx->pc = 0x17AB3Cu;
}
