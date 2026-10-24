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

// Function: entry_001da818
// Address: 0x1da818 - 0x1da828
void entry_001da818_0x1da818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da818_0x1da818");
#endif

    ctx->pc = 0x1da818u;

    // 0x1da818: 0x2402027c  addiu       $v0, $zero, 0x27C
    ctx->pc = 0x1da818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x1da81c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da81cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1da820: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DA820u;
    {
        const bool branch_taken_0x1da820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da820) {
            ctx->pc = 0x1DA850u;
            return;
        }
    }
    ctx->pc = 0x1DA828u;
}
