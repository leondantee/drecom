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

// Function: entry_0015bd38
// Address: 0x15bd38 - 0x15bd44
void entry_0015bd38_0x15bd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bd38_0x15bd38");
#endif

    ctx->pc = 0x15bd38u;

    // 0x15bd38: 0x241e0005  addiu       $fp, $zero, 0x5
    ctx->pc = 0x15bd38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15bd3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15BD3Cu;
    {
        const bool branch_taken_0x15bd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd3c) {
            ctx->pc = 0x15BD48u;
            return;
        }
    }
    ctx->pc = 0x15BD44u;
}
