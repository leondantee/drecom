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

// Function: entry_002ed5e4
// Address: 0x2ed5e4 - 0x2ed5f0
void entry_002ed5e4_0x2ed5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed5e4_0x2ed5e4");
#endif

    ctx->pc = 0x2ed5e4u;

    // 0x2ed5e4: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x2ed5e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ed5e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED5E8u;
    {
        const bool branch_taken_0x2ed5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed5e8) {
            ctx->pc = 0x2ED5F4u;
            return;
        }
    }
    ctx->pc = 0x2ED5F0u;
}
