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

// Function: entry_00186df4
// Address: 0x186df4 - 0x186e00
void entry_00186df4_0x186df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186df4_0x186df4");
#endif

    ctx->pc = 0x186df4u;

    // 0x186df4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x186df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x186df8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x186DF8u;
    {
        const bool branch_taken_0x186df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186df8) {
            ctx->pc = 0x186EE4u;
            return;
        }
    }
    ctx->pc = 0x186E00u;
}
