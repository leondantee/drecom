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

// Function: entry_0027cce4
// Address: 0x27cce4 - 0x27ccf0
void entry_0027cce4_0x27cce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027cce4_0x27cce4");
#endif

    ctx->pc = 0x27cce4u;

    // 0x27cce4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27cce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x27cce8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x27CCE8u;
    {
        const bool branch_taken_0x27cce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cce8) {
            ctx->pc = 0x27CE40u;
            return;
        }
    }
    ctx->pc = 0x27CCF0u;
}
