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

// Function: entry_00186ed4
// Address: 0x186ed4 - 0x186ee0
void entry_00186ed4_0x186ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186ed4_0x186ed4");
#endif

    ctx->pc = 0x186ed4u;

    // 0x186ed4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x186ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x186ed8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186ED8u;
    {
        const bool branch_taken_0x186ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ed8) {
            ctx->pc = 0x186EE4u;
            return;
        }
    }
    ctx->pc = 0x186EE0u;
}
