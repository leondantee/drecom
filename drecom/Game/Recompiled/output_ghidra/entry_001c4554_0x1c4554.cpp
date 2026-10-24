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

// Function: entry_001c4554
// Address: 0x1c4554 - 0x1c4560
void entry_001c4554_0x1c4554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4554_0x1c4554");
#endif

    ctx->pc = 0x1c4554u;

    // 0x1c4554: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c4554u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c4558: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C4558u;
    {
        const bool branch_taken_0x1c4558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4558) {
            ctx->pc = 0x1C4588u;
            return;
        }
    }
    ctx->pc = 0x1C4560u;
}
