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

// Function: entry_00184200
// Address: 0x184200 - 0x18420c
void entry_00184200_0x184200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184200_0x184200");
#endif

    ctx->pc = 0x184200u;

    // 0x184200: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x184200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x184204: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x184204u;
    {
        const bool branch_taken_0x184204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184204) {
            ctx->pc = 0x184218u;
            return;
        }
    }
    ctx->pc = 0x18420Cu;
}
