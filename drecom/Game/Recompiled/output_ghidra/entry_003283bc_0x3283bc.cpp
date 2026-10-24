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

// Function: entry_003283bc
// Address: 0x3283bc - 0x3283c8
void entry_003283bc_0x3283bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003283bc_0x3283bc");
#endif

    ctx->pc = 0x3283bcu;

    // 0x3283bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3283bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3283c0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3283C0u;
    {
        const bool branch_taken_0x3283c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3283c0) {
            ctx->pc = 0x328480u;
            return;
        }
    }
    ctx->pc = 0x3283C8u;
}
