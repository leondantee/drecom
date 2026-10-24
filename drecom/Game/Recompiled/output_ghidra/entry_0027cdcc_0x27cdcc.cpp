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

// Function: entry_0027cdcc
// Address: 0x27cdcc - 0x27cdd8
void entry_0027cdcc_0x27cdcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027cdcc_0x27cdcc");
#endif

    ctx->pc = 0x27cdccu;

    // 0x27cdcc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27cdccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x27cdd0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x27CDD0u;
    {
        const bool branch_taken_0x27cdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cdd0) {
            ctx->pc = 0x27CE40u;
            return;
        }
    }
    ctx->pc = 0x27CDD8u;
}
