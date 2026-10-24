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

// Function: entry_0027cbe4
// Address: 0x27cbe4 - 0x27cbf0
void entry_0027cbe4_0x27cbe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027cbe4_0x27cbe4");
#endif

    ctx->pc = 0x27cbe4u;

    // 0x27cbe4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27cbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x27cbe8: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x27CBE8u;
    {
        const bool branch_taken_0x27cbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cbe8) {
            ctx->pc = 0x27CE40u;
            return;
        }
    }
    ctx->pc = 0x27CBF0u;
}
