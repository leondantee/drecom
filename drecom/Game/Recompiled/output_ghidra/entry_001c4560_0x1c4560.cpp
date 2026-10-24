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

// Function: entry_001c4560
// Address: 0x1c4560 - 0x1c456c
void entry_001c4560_0x1c4560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4560_0x1c4560");
#endif

    ctx->pc = 0x1c4560u;

    // 0x1c4560: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c4560u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c4564: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4564u;
    {
        const bool branch_taken_0x1c4564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4564) {
            ctx->pc = 0x1C4588u;
            return;
        }
    }
    ctx->pc = 0x1C456Cu;
}
